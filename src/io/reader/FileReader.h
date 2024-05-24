#pragma once

#include "../../utility/ConcurrentQueue.h"

#include <memory>
#include <string_view>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>

class FileReader {
  std::shared_ptr<ConcurrentQueue<std::string>> ptr_;

  FileReader(std::string_view filename) {
    std::ifstream inputFile(filename.data());
    if (inputFile.fail()) {
      std::cout << "Failed to open file" << std::endl;
      std::cout << "Local path: " << std::filesystem::current_path().c_str() << std::endl;
      return;
    }
//    runner::run(inputFile, std::cout);
    inputFile.close();
    return 0;
  }
};