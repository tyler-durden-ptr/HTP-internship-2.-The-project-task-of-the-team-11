#pragma once

#include <atomic>
#include <cstdint>

struct ControlBlock {
  std::atomic<size_t> numberOfReadMessages{0};
  std::atomic<size_t> numberOfFailedMessages{0};
  std::atomic_bool readingFinished{false};
};