#pragma once

#include <io/reader/ReadingInfo.h>
#include <io/reader/StreamReader.h>
#include <utility/ConcurrentQueue.h>

#include <atomic>
#include <filesystem>
#include <format>
#include <fstream>
#include <functional>
#include <future>
#include <iostream>
#include <memory>
#include <mutex>
#include <string>
#include <string_view>
#include <utility>

struct FileReader {
  static void read(std::string_view filename, std::shared_ptr<ConcurrentQueue<Message>> outputQueue,
                   std::shared_ptr<ReadingInfo> readingInfo) {
    std::ifstream inputFile(filename.data());
    if (!inputFile.fail()) {
      StreamReader::read(inputFile, std::move(outputQueue), std::move(readingInfo));
      inputFile.close();
    } else {
      std::cout << std::format("Failed to open input file with name {}\n", filename.data()) << std::endl;
      std::cout << std::format("Local path: {}\n", std::filesystem::current_path().c_str());
    }
  }
};