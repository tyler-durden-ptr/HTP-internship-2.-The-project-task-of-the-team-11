#pragma once

#include <rapidjson/document.h>

#include <utility>
#include <cstddef>
#include <string>

using Message = std::pair<std::string, rapidjson::Value>;