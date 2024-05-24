#pragma once

#pragma once

#pragma once

#include <queue>

#include <any>
#include <atomic>
#include <cassert>
#include <functional>
#include <future>
#include <iostream>
#include <mutex>
#include <thread>
#include <type_traits>
#include <utility>
#include <functional>

class Task {
public:
  template <typename FuncRetType, typename... Args, typename... FuncTypes>
  explicit Task(std::function<FuncRetType(FuncTypes...)> func, Args&&... args) : is_void{std::is_void_v<FuncRetType>} {
    if constexpr (std::is_void_v<FuncRetType>) {
      void_func = std::bind(func, args...);
      any_func = []() -> int { return 0; };
    } else {
      void_func = []() -> void {};
      any_func = std::bind(func, args...);
    }
  }

  void operator()();

  [[nodiscard]] bool has_result() const;

  [[nodiscard]] std::any get_result() const;

private:
  std::function<void()> void_func;
  std::function<std::any()> any_func;
  std::any any_func_result;
  bool is_void;
};

class ThreadPool {
public:
  explicit ThreadPool(uint32_t num_threads);

  template <typename Func, typename... Args, typename... FuncTypes>
  uint64_t add_task(std::function<Func(FuncTypes...)> func, Args&&... args) {
    const uint64_t task_id = last_idx++;

    std::lock_guard<std::mutex> q_lock(q_mtx);
    q.emplace(Task(func, std::forward<Args>(args)...), task_id);
    q_cv.notify_one();
    return task_id;
  }

  ~ThreadPool();

private:
  void run();

  std::vector<std::thread> threads;
  std::queue<std::pair<Task, uint64_t>> q;
  std::mutex q_mtx;
  std::condition_variable q_cv;
  std::atomic<bool> quite{false};
  std::atomic<uint64_t> last_idx{0};
};
