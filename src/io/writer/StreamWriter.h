#pragma once

#include <io/OutputMessage.h>
#include <io/writer/StreamWriter.h>
#include <utility/ConcurrentQueue.h>

#include <chrono>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iostream>
#include <memory>
#include <string>
#include <string_view>
#include <utility>

struct StreamWriter {
  static void write(std::ostream& stream, std::shared_ptr<ConcurrentQueue<OutputMessage>> queue,
                    const std::function<bool(size_t)>& pred) {
    using namespace std::chrono_literals;
    stream << "[";
    size_t numOfMessages = 0;
    while (pred(numOfMessages)) {

      std::optional<OutputMessage> message = queue->pop(1s);
      if (message.has_value()) {
        if (numOfMessages > 0) {
          stream << ",";
        }
        stream << messageToString(message.value());
        ++numOfMessages;
      }
    }
    stream << "]";
  }
};