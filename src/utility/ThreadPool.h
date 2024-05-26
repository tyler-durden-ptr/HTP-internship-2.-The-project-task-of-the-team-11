#pragma once

#include <io/InputMessage.h>
#include <io/reader/ReadingInfo.h>
#include <utility/ConcurrentQueue.h>

#include <queue>

#include <atomic>
#include <cassert>
#include <format>
#include <functional>
#include <future>
#include <iostream>
#include <mutex>
#include <thread>
#include <type_traits>
#include <utility>

template <typename OutputType, typename InputType>
class ThreadPool {
public:
  explicit ThreadPool(uint32_t num_threads, std::function<OutputType(InputType)> task,
                      std::shared_ptr<ReadingInfo> readingInfo, std::shared_ptr<ConcurrentQueue<InputType>> inputQ,
                      std::shared_ptr<ConcurrentQueue<OutputType>> outputQ)
      : task(task),
        readingInfo(std::move(readingInfo)),
        inputQ(std::move(inputQ)),
        outputQ(std::move(outputQ)) {
    threads.reserve(num_threads);
    for (int i = 0; i < num_threads; ++i) {
      threads.emplace_back(&ThreadPool::run, this);
    }
  }

  ~ThreadPool() {
    quite = true;
    for (auto& thread : threads) {
      thread.join();
    }
  }

private:
  void run() {
    using namespace std::chrono_literals;

    while (!quite.load()) {
      std::optional<InputType> message = inputQ->pop(1s);
      if (message.has_value()) {
        size_t prev_idx = inputIdx++;
        try {
          OutputType result = task(std::move(message.value()));
          {
            std::lock_guard g(messagesMutex);
            if (prev_idx == outputIdx.load()) {
              outputQ->push(std::move(result));
              ++outputIdx;
              // TODO: 2 call in map
              while (messages.contains(++prev_idx)) {
                outputQ->push(std::move(messages[prev_idx]));
                ++outputIdx;
                messages.erase(prev_idx);
              }
            } else {
              messages[prev_idx] = std::move(result);
            }
          }
        } catch (std::exception& ex) {
          std::cerr << std::format("Exception in thread pool: {}\n", ex.what());
        } catch (...) {
          std::cerr << "Exception in thread pool \n";
        }
      } else {
        if (readingInfo->finished) {
          quite = true;
        }
      }
    }
  }

  std::function<OutputType(InputType)> task;
  std::shared_ptr<ReadingInfo> readingInfo;
  std::shared_ptr<ConcurrentQueue<InputType>> inputQ;
  std::shared_ptr<ConcurrentQueue<OutputType>> outputQ;
  std::atomic<size_t> inputIdx{0};
  std::atomic<size_t> outputIdx{0};
  std::unordered_map<size_t, OutputType> messages{};
  std::mutex messagesMutex{};
  std::vector<std::thread> threads;
  std::atomic<bool> quite{false};
};

template <typename OutputType, typename InputType>
ThreadPool(uint32_t num_threads, std::function<OutputType(InputType)> task,
           std::shared_ptr<ConcurrentQueue<InputType>> inputQ, std::shared_ptr<ConcurrentQueue<OutputType>> outputQ)
    -> ThreadPool<std::remove_cvref_t<OutputType>, std::remove_cvref_t<InputType>>;