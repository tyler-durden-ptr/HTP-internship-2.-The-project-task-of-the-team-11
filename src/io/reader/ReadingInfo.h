#pragma once

#include <atomic>
#include <cstdint>

struct ReadingInfo {
  std::atomic<size_t> numOfMessages{0};
  std::atomic_bool finished{false};
};