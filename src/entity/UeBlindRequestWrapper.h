#pragma once

#include <rapidjson/document.h>

#include "../../itti_structs/types.hpp"

struct UeBlindRequestWrapper : vran::rrc_cu::lte::UeBlindRequest {
public:
    void serialize(rapidjson::Document& config) const;
    void deserialize(const rapidjson::Document& config);
};
