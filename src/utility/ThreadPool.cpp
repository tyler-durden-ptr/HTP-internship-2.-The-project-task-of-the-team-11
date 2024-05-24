//
// Created by michael-root on 5/24/2024.
//

#include "ThreadPool.h"

void Task::operator()() {
  void_func();
  any_func_result = any_func();
}

[[nodiscard]] bool Task::has_result() const {
  return !is_void;
}

[[nodiscard]] std::any Task::get_result() const {
  assert(!is_void);
  assert(any_func_result.has_value());
  return any_func_result;
}

ThreadPool::ThreadPool(const uint32_t num_threads) {
  threads.reserve(num_threads);
  for (int i = 0; i < num_threads; ++i) {
    threads.emplace_back(&ThreadPool::run, this);
  }
}

ThreadPool::~ThreadPool() {
  quite = true;
  q_cv.notify_all();
  for (auto& thread : threads) {
    thread.join();
  }
}

void ThreadPool::run() {
  while (!quite) {
    std::unique_lock<std::mutex> lock(q_mtx);
    q_cv.wait(lock, [this]() -> bool { return !q.empty() || quite; });

    if (!q.empty() && !quite) {
      std::pair<Task, uint64_t> task = std::move(q.front());
      q.pop();
      lock.unlock();
      try {
        task.first();
      } catch (...) {
        std::cerr << "Exception in thread pool \n";
      }
    }
  }
}
