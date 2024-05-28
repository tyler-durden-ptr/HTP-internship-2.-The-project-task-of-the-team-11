#pragma once

#include <entity/SerializeWrapper.h>
#include <entity/include/ErabReleaseResponseWrapper.h>
#include <entity/include/PathSwitchRequestWrapper.h>
#include <entity/include/UeBlindRequestWrapper.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <cstddef>
#include <format>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <utility>
#include <variant>

using InputMessage = rapidjson::Value;

inline std::unique_ptr<SerializeWrapper> messageToWrapper(const InputMessage& message) {
  for (auto&& member : message.GetObject()) {
    std::string name(member.name.GetString());
    if (name == "UeBlindRequest") {
      return std::make_unique<UeBlindRequestWrapper>();
    } else if (name == "ErabReleaseResponse") {
      return std::make_unique<ErabReleaseResponseWrapper>();
    } else if (name == "HandoverRequestAck") {
      // TODO
    } else if (name == "PathSwitchRequest") {
      return std::make_unique<PathSwitchRequestWrapper>();
    } else if (name == "UeCapabilityInfoIndication") {
      // TODO
    } else {
      throw std::domain_error(
          std::format("messageToWrapper don't know ITTI struct with name {}", member.name.GetString()));
    }
  }
  throw std::domain_error("Empty message in messageToWrapper() or not Object json type.");
}