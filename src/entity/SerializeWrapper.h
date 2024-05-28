#pragma once

#include <rapidjson/document.h>

#include <format>
#include <stdexcept>

struct SerializeWrapper {
  virtual void serialize(rapidjson::Document&) const = 0;

  virtual void deserialize(const rapidjson::Value&) = 0;

  virtual ~SerializeWrapper(){};
};

inline const rapidjson::Value& getChecked(const rapidjson::Value& value, std::string_view name) {
  auto it = value.FindMember(name.data());
  if (it != value.MemberEnd()) {
    return it->value;
  } else {
    throw std::invalid_argument(std::format("rapidjson::Value don't have {} field\n", name.data()));
  }
}
