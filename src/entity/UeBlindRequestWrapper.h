#pragma once

#include "../../itti_structs/types.hpp"

#include <entity/SerializeWrapper.h>
#include <rapidjson/document.h>

#include <functional>
#include <vector>

struct UeBlindRequestWrapper : SerializeWrapper, vran::rrc_cu::lte::UeBlindRequest {
  UeBlindRequestWrapper() : SerializeWrapper(), UeBlindRequest() {}

  void serialize(rapidjson::Document& config) const override;

  void deserialize(const rapidjson::Value& config) override;

  ~UeBlindRequestWrapper() override;

private:
  void clear() noexcept;

private:
  std::vector<std::function<void()>> deletersForAllocatedMemory{};
};
