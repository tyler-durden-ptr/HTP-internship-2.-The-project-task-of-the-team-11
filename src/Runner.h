#pragma once

#include <io/Message.h>
#include <io/reader/FileReader.h>
#include <io/reader/ReadingInfo.h>
#include <io/writer/FileWriter.h>
#include <utility/ConcurrentQueue.h>
#include <utility/ThreadPool.h>

#include <memory>
#include <string_view>
#include <thread>

struct Runner {
  static void run(std::string_view inputFilePath, std::string_view outputFileView, uint32_t threadPoolSize) {
    auto q1 = std::make_shared<ConcurrentQueue<Message>>();
    auto q2 = std::make_shared<ConcurrentQueue<Message>>();
    auto readingInfo = std::make_shared<ReadingInfo>();

    ThreadPool threadPool(threadPoolSize, std::function<Message(Message)>([&](Message message) -> Message {
                            std::unique_ptr<SerializeWrapper> wrapper = messageToWrapper(message);
                            std::visit([&](auto&& value) { wrapper->deserialize(value); }, message);
                            rapidjson::Document result;
                            wrapper->serialize(result);
                            return result;
                          }),
                          readingInfo, q1, q2);

    std::jthread reader([&]() { FileReader::read(inputFilePath, q1, readingInfo); });
    std::jthread writer([&]() {
      FileWriter::write(outputFileView, q2, [&](size_t writeNum) {
        if (writeNum < readingInfo->numOfMessages.load()) {
          return true;
        } else {
          return !readingInfo->finished.load();
        }
      });
    });
  }
};