#pragma once

#include <utility/ConcurrentQueue.h>
#include <io/Message.h>

#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <string_view>
#include <istream>
#include <iostream>
#include <filesystem>
#include <string>

struct StreamReader {
  static void read(std::istream& stream, ConcurrentQueue<Message>& outputQueue) {
    constexpr size_t read_size = 4096;
    stream.exceptions(std::ios_base::badbit);
    if (!stream) {
      throw std::ios_base::failure("file does not exist");
    }
    std::string jsonBody;
    std::string buf(read_size, '\0');
    while (stream.read(& buf[0], read_size)) {
      jsonBody.append(buf, 0, stream.gcount());
    }
    jsonBody.append(buf, 0, stream.gcount());

    rapidjson::Document document;
    document.Parse(jsonBody.c_str());

    for (auto&& member : document.GetObject()) {
      for (auto&& arrayElem : member.value.GetArray()) {
        outputQueue.push({std::string{member.name.GetString()}, std::move(arrayElem)});
      }
    }
  }
};