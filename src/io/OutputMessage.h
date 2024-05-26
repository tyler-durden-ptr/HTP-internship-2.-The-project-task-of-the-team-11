#pragma once

#include <rapidjson/document.h>

using OutputMessage = rapidjson::Document;

inline std::string messageToString(OutputMessage& message) {
  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  message.Accept(writer);
  return {buffer.GetString()};
}