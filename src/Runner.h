#pragma once

#include <io/InputMessage.h>
#include <io/reader/FileReader.h>
#include <io/reader/ReadingInfo.h>
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
    return [](const rapidjson::Value& value) {
      if (!value.HasMember("UeBlindRequest")) {
        std::cerr << "Very bad in threadPool task\n";
      }
      std::unique_ptr<SerializeWrapper> wrapper = messageToWrapper(value);
      wrapper->deserialize(value);
      rapidjson::Document result;
      wrapper->serialize(result);
      return result;
    };
  }

  static std::function<bool(size_t)> getWriterPredicate(std::shared_ptr<ReadingInfo> readingInfo) {
    return [=](size_t writeNum) {
      if (writeNum < readingInfo->numOfMessages.load()) {
        return true;
      } else {
        return !readingInfo->finished.load();
      }
    };
  }

  static auto setup() {
    return std::make_tuple(std::make_shared<ConcurrentQueue<rapidjson::Value>>(),
                           std::make_shared<ConcurrentQueue<rapidjson::Document>>(), std::make_shared<ReadingInfo>());
  }

public:
  static void run(std::string_view inputFilePath, std::string_view outputFileView, uint32_t threadPoolSize) {
    auto [q1, q2, readingInfo] = setup();
    ThreadPool threadPool(threadPoolSize, getTask(), readingInfo, q1, q2);
    std::jthread reader([&]() { FileReader::read(inputFilePath, q1, readingInfo); });
    std::jthread writer([&]() { FileWriter::write(outputFileView, q2, getWriterPredicate(readingInfo)); });
  }

  static void run(std::istream& inputStream, std::ostream& outputStream, uint32_t threadPoolSize) {
    auto [q1, q2, readingInfo] = setup();
    ThreadPool threadPool(threadPoolSize, getTask(), readingInfo, q1, q2);
    std::jthread reader([&]() { StreamReader::read(inputStream, q1, readingInfo); });
    std::jthread writer([&]() { StreamWriter::write(outputStream, q2, getWriterPredicate(readingInfo)); });
  }
};

// TODO: writer have to shutdown if there were errors during serialization/deserialization in threadPool