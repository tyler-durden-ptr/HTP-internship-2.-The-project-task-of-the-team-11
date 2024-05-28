#pragma once

#include <ControlBlock.h>
#include <io/InputMessage.h>
#include <io/reader/FileReader.h>
#include <io/writer/FileWriter.h>
#include <utility/ConcurrentQueue.h>
#include <utility/ThreadPool.h>

#include <memory>
#include <sstream>
#include <string_view>
#include <thread>
#include <tuple>

class Runner {
  static std::function<OutputMessage(InputMessage)> getTask() {
    return [](rapidjson::Value value) {
      std::unique_ptr<SerializeWrapper> wrapper = messageToWrapper(value);
      wrapper->deserialize(value);
      rapidjson::Document result;
      wrapper->serialize(result);
      return result;
    };
  }

  static std::function<bool(size_t)> getWriterPredicate(std::shared_ptr<ControlBlock> controlBlock) {
    return [=](size_t writeNum) {
      if (writeNum < controlBlock->numberOfReadMessages.load() - controlBlock->numberOfFailedMessages.load()) {
        return true;
      } else {
        return !controlBlock->readingFinished.load();
      }
    };
  }

  static auto setup() {
    return std::make_tuple(std::make_shared<ConcurrentQueue<rapidjson::Value>>(),
                           std::make_shared<ConcurrentQueue<rapidjson::Document>>(), std::make_shared<ControlBlock>());
  }

public:
  static void runWithFiles(std::string_view inputFilePath, std::string_view outputFileView, uint32_t threadPoolSize) {
    auto [q1, q2, readingInfo] = setup();
    ThreadPool threadPool(threadPoolSize, getTask(), readingInfo, q1, q2);
    std::jthread reader([&]() { FileReader::read(inputFilePath, q1, readingInfo); });
    std::jthread writer([&]() { FileWriter::write(outputFileView, q2, getWriterPredicate(readingInfo)); });
  }

  static void runWithStreams(std::istream& inputStream, std::ostream& outputStream, uint32_t threadPoolSize) {
    auto [q1, q2, readingInfo] = setup();
    ThreadPool threadPool(threadPoolSize, getTask(), readingInfo, q1, q2);
    std::jthread reader([&]() { StreamReader::read(inputStream, q1, readingInfo); });
    std::jthread writer([&]() { StreamWriter::write(outputStream, q2, getWriterPredicate(readingInfo)); });
  }
};
