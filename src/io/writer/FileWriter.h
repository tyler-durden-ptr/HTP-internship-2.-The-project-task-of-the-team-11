#pragma once

#include <utility/ConcurrentQueue.h>
#include <io/writer/StreamWriter.h>
#include <io/Message.h>

#include <string_view>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>
#include <utility>

class FileWriter {
  std::ofstream file;

public:


  void write(std::string_view filename, ConcurrentQueue<Message>& inputQueue) {
    std::ofstream file;
    file.open(filename.data());
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
  }
};