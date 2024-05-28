#pragma once

#include <io/InputMessage.h>
#include <ControlBlock.h>
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
                   std::shared_ptr<ControlBlock> info) {
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

    info->inputDoc = rapidjson::Document();
    auto& document = info->inputDoc;
    document.Parse(jsonBody.c_str());
    for (auto&& arrayElem : document.GetArray()) {
      outputQueue->push(std::move(arrayElem));
      info->numberOfReadMessages.fetch_add(1);
    }
    info->readingFinished = true;
  }
};