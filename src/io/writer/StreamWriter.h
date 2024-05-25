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

struct StreamWriter {
  static void write(std::ostream& stream, ConcurrentQueue<Message>& inputQueue) {

  }
};