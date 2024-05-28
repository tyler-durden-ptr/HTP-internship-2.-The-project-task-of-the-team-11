#pragma once

#include <chrono>
#include <condition_variable>
#include <deque>
#include <mutex>
#include <optional>
#include <utility>

template <typename T>
class ConcurrentQueue {
private:
  std::deque<T> queue_;
  std::mutex mutex_;
  std::condition_variable cv_;

public:
  ConcurrentQueue() = default;
  ConcurrentQueue(const ConcurrentQueue&) = delete;
  ConcurrentQueue& operator=(const ConcurrentQueue&) = delete;

  void push(T value) {
    bool was_empty;
    {
      std::lock_guard g(mutex_);
      was_empty = queue_.empty();
      queue_.push_back(std::move(value));
    }
    if (was_empty) {
      cv_.notify_one();
    }
  }

  std::optional<T> try_pop() {
    std::lock_guard g(mutex_);
    if (queue_.empty()) {
      return std::nullopt;
    }
    T result = std::move(queue_.back());
    queue_.pop_back();
    return result;
  }

  T pop() {
    std::unique_lock g(mutex_);
    cv_.wait(g, [this] { return !queue_.empty(); });
    T result = std::move(queue_.front());
    queue_.pop_front();
    return result;
  }

  template <typename Rep, typename Period>
  std::optional<T> pop(std::chrono::duration<Rep, Period> duration) {
    std::unique_lock g(mutex_);
    cv_.wait_for(g, duration, [this] { return !queue_.empty(); });
    if (!queue_.empty()) {
      T result = std::move(queue_.front());
      queue_.pop_front();
      return result;
    }
    return std::nullopt;
  }
};
