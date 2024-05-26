#pragma once

#include <io/OutputMessage.h>
#include <io/writer/StreamWriter.h>
#include <utility/ConcurrentQueue.h>

#include <filesystem>
#include <format>
#include <fstream>
#include <functional>
#include <iostream>
#include <memory>
#include <ostream>
#include <string>
#include <string_view>
#include <utility>

class FileWriter {
public:
  static void write(std::string_view filename, std::shared_ptr<ConcurrentQueue<OutputMessage>> inputQueue,
                    const std::function<bool(size_t)>& pred) {
    std::ofstream file;
    file.open(filename.data());
    if (file.fail()) {
      std::cout << std::format("Failed to open output file with name {}\n", filename.data());
      std::cout << std::format("Local path: {}\n", std::filesystem::current_path().c_str());
      return;
    }
    StreamWriter::write(file, std::move(inputQueue), pred);
  }
};