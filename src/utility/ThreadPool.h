#pragma once

#include <ControlBlock.h>
#include <io/InputMessage.h>
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
                      std::shared_ptr<ControlBlock> readingInfo, std::shared_ptr<ConcurrentQueue<InputType>> inputQ,
                      std::shared_ptr<ConcurrentQueue<OutputType>> outputQ)
      : task(task),
        controlBlock(std::move(readingInfo)),
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
  std::optional<std::pair<size_t, InputType>> readQueue() {
    using namespace std::chrono_literals;
    std::lock_guard g(inputQMutex);
    std::optional<InputType> message = inputQ->pop(1s);
    if (message.has_value()) {
      return {std::pair{inputIdx++, std::move(message.value())}};
    }
    return std::nullopt;
  }

  void run() {
    while (!quite.load()) {
      auto opt = readQueue();
      if (opt.has_value()) {
        auto&& [prev_idx, message] = opt.value();
        std::optional<OutputType> resultOpt(std::nullopt);
        try {
          resultOpt = task(std::move(message));
        } catch (std::exception& ex) {
          ++controlBlock->numberOfFailedMessages;
          std::cerr << std::format("Exception in thread pool: {}\n", ex.what());
        } catch (...) {
          ++controlBlock->numberOfFailedMessages;
          std::cerr << "Exception in thread pool \n";
        }
        {
          std::lock_guard g(messagesMutex);
          if (prev_idx == outputIdx) {
            if (resultOpt.has_value()) {
              outputQ->push(std::move(resultOpt.value()));
            }
            ++outputIdx;
            while (messages.contains(++prev_idx)) {
              auto valueFromMap = std::move(messages[prev_idx]);
              if (valueFromMap.has_value()) {
                outputQ->push(std::move(valueFromMap.value()));
              }
              ++outputIdx;
              messages.erase(prev_idx);
            }
          } else {
            messages[prev_idx] = std::move(resultOpt);
          }
        }
      } else {
        if (controlBlock->readingFinished && inputIdx.load() == controlBlock->numberOfReadMessages) {
          quite = true;
        }
      }
    }
  }

  std::function<OutputType(InputType)> task;
  std::shared_ptr<ControlBlock> controlBlock;
  std::shared_ptr<ConcurrentQueue<InputType>> inputQ;
  std::mutex inputQMutex{};
  std::shared_ptr<ConcurrentQueue<OutputType>> outputQ;
  std::atomic<size_t> inputIdx{0};
  size_t outputIdx{0};
  std::unordered_map<size_t, std::optional<OutputType>> messages{};
  std::mutex messagesMutex{};
  std::vector<std::thread> threads;
  std::atomic<bool> quite{false};
};

template <typename OutputType, typename InputType>
ThreadPool(uint32_t num_threads, std::function<OutputType(InputType)> task,
           std::shared_ptr<ConcurrentQueue<InputType>> inputQ, std::shared_ptr<ConcurrentQueue<OutputType>> outputQ)
    -> ThreadPool<std::remove_cvref_t<OutputType>, std::remove_cvref_t<InputType>>;