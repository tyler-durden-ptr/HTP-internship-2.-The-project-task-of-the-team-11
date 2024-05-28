#pragma once

#include "../../itti_structs/types.hpp"

#include <entity/SerializeWrapper.h>
#include <rapidjson/document.h>

struct PathSwitchRequestWrapper : SerializeWrapper, vran::s1ap::lte::PathSwitchRequest {
  PathSwitchRequestWrapper() : SerializeWrapper(), PathSwitchRequest() {}

  void serialize(rapidjson::Document& config) const override;

  void deserialize(const rapidjson::Value& config) override;

  ~PathSwitchRequestWrapper() override = default;
};
