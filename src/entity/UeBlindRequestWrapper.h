#pragma once

#include <rapidjson/document.h>

#include "../../itti_structs/types.hpp"

class UeBlindRequestWrapper : vran::rrc_cu::lte::UeBlindRequest {
public:
    void serialize(rapidjson::Document& config);
    void deserialize(const rapidjson::Document& config);
};
