//
// Created by 唐云 on 2021/7/16.
//
#include "thread"
#include "unistd.h"
#include "iostream"
#include "list"
using namespace std;
static uint64_t message_id_ = 0;
class ThreadTest {
 public:
  void ConsumeMessage() {
    while (true) {
//      my_mutex.lock();
      std::unique_lock<std::mutex> lck(my_mutex);
      condition_variable_.wait(lck, [&] {
        return !(message_list_.empty());
      });
      usleep(10000);
      std::cout << "ConsumeMessage ----------" << message_list_.front() << std::endl;
      message_list_.pop_front();
      condition_variable_.notify_all();
//      lck.unlock();
    }
  }

  void ProductMessage() {
    while (true) {
//      my_mutex.lock();
      std::unique_lock<std::mutex> lck(my_mutex);
      usleep(50000);
      condition_variable_.wait(lck, [&] {
        return message_list_.size() <= kMaxMsgCount;
      });
      std::cout << "ProductMessage ------" << message_id_ << std::endl;
      message_list_.push_back(message_id_++);
      condition_variable_.notify_all();
//      lck.unlock();
    }
  }

 private:
  const int kMaxMsgCount = 20;
  std::list<int> message_list_;
  std::condition_variable condition_variable_;
  std::mutex my_mutex;
};

int main() {
  ThreadTest thread_test;
  std::thread thread_consume1(&ThreadTest::ConsumeMessage, &thread_test);

  std::thread thread_product1(&ThreadTest::ProductMessage, &thread_test);
  std::thread thread_product2(&ThreadTest::ProductMessage, &thread_test);
  std::thread thread_product3(&ThreadTest::ProductMessage, &thread_test);

  std::condition_variable cv;
  std::mutex my_mutex;
  auto lock = std::unique_lock(my_mutex);

  thread_consume1.join();
  thread_product1.join();
  return 0;
}