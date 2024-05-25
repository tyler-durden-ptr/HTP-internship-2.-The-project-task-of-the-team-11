#pragma once

#include <utility/ConcurrentQueue.h>
#include <io/reader/StreamReader.h>

#include <string_view>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>
#include <utility>

class FileReader {
  static void read(std::string_view filename, ConcurrentQueue<Message>& outputQueue) {
    std::ifstream inputFile(filename.data());
    if (inputFile.fail()) {
      std::cout << "Failed to open file" << std::endl;
      std::cout << "Local path: " << std::filesystem::current_path().c_str() << std::endl;
      return;
    }
    StreamReader::read(inputFile, outputQueue);
    inputFile.close();
  }
};