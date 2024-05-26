#pragma once

#include <io/InputMessage.h>
#include <io/reader/ReadingInfo.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
#include <utility/ConcurrentQueue.h>

#include <filesystem>
#include <functional>
#include <iostream>
#include <istream>
#include <memory>
#include <string>
#include <string_view>

struct StreamReader {
  static void read(std::istream& stream, std::shared_ptr<ConcurrentQueue<InputMessage>> outputQueue,
                   std::shared_ptr<ReadingInfo> info) {
    constexpr size_t read_size = 4096;
    stream.exceptions(std::ios_base::badbit);
    if (!stream) {
      throw std::ios_base::failure("file does not exist");
    }
    std::string jsonBody;
    std::string buf(read_size, '\0');
    while (stream.read(&buf[0], read_size)) {
      jsonBody.append(buf, 0, stream.gcount());
    }
    jsonBody.append(buf, 0, stream.gcount());

    rapidjson::Document document;
    document.Parse(jsonBody.c_str());
    for (auto&& arrayElem : document.GetArray()) {
      outputQueue->push(std::move(arrayElem));
      info->numOfMessages.fetch_add(1);
    }
    info->finished = true;
  }
};