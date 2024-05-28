#pragma once

#include "../../itti_structs/types.hpp"

#include <entity/SerializeWrapper.h>
#include <rapidjson/document.h>

struct ErabReleaseResponseWrapper : SerializeWrapper, vran::s1ap::lte::ErabReleaseResponse {
  ErabReleaseResponseWrapper() : SerializeWrapper(), ErabReleaseResponse() {}

  void serialize(rapidjson::Document& config) const override;

  void deserialize(const rapidjson::Value& config) override;

  ~ErabReleaseResponseWrapper() override = default;
};
