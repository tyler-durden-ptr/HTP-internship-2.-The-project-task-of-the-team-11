#pragma once

#include <rapidjson/document.h>

struct SerializeWrapper {
  virtual void serialize(rapidjson::Document&) const = 0;

  virtual void deserialize(const rapidjson::Value&) = 0;

  virtual ~SerializeWrapper() {};
};