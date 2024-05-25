#pragma once

#include <entity/SerializeWrapper.h>
#include <entity/UeBlindRequestWrapper.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <cstddef>
#include <format>
#include <memory>
#include <stdexcept>
#include <string>
#include <utility>
#include <variant>

using Message = std::variant<rapidjson::Value, rapidjson::Document>;

inline std::string messageToString(Message&& message) {
  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  std::visit([&](auto&& value) { value.Accept(writer); }, message);
  return {buffer.GetString()};
}

// TODO: rvalue or lvalue receive
inline std::unique_ptr<SerializeWrapper> messageToWrapper(Message& message) {
  for (auto&& member : std::visit([&](auto&& value) { return value.GetObject(); }, message)) {
    std::string name(member.name.GetString());
    if (name == "UeBlindRequest") {
      return std::make_unique<UeBlindRequestWrapper>();
    } else if (name == "") {
      // TODO: other structs
    } else {
      throw std::domain_error(
          std::format("messageToWrapper don't know ITTI struct with name {}", member.name.GetString()));
    }
  }
  throw std::domain_error("Empty message in messageToWrapper() or not Object json type.");
}