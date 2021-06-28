//
// Created by 唐云 on 2021/4/2.
//

#include <chrono>
#include <iostream>
void printDuration(std::chrono::microseconds time) {
  std::cout << " time = " << time.count() << std::endl;
}

//int main() {
//  std::chrono::milliseconds milliseconds(3);
//  std::chrono::microseconds microseconds(3);
//  std::chrono::minutes m_min(3);  // 3 minutes
//  std::chrono::seconds m_sec(3);  // 3 seconds
//  std::chrono::seconds m_sec2;
//  m_sec2 = m_min; // m_sec2.count() = 180
//  std::cout << "m_sec2 = " << m_sec2.count() << std::endl;
//  if (m_sec2 == m_min) {
//    std::cout << "m_sec2 == m_min" << std::endl;
//  }
//
//  microseconds = milliseconds;
//  if (microseconds < milliseconds) {
//    std::cout << " microseconds(3) < milliseconds(3)" << std::endl;
//  }
//  std::cout << "microseconds = " << microseconds.count() << std::endl;
//  std::cout << "milliseconds = " << milliseconds.count() << std::endl;
//
//  std::chrono::duration<float> t2(1.0f);
//  std::chrono::duration<int, std::ratio<60, 1>> m_minr(3);
//  std::chrono::duration<int, std::milli> m_mili(3);
//
//  std::cout << "m_min:" << m_min.count() << "\nm_sec:" << m_sec.count()
//            << "\nm_sec2:" << m_sec2.count();
//
//  typedef std::chrono::duration<int> seconds_type;
//  typedef std::chrono::duration<int, std::milli> milliseconds_type;
//  typedef std::chrono::duration<int, std::ratio<60 * 60>> hours_type;
//
//  hours_type h_oneday(24);                  // 24h
//  seconds_type s_oneday(60 * 60 * 24);          // 86400s
//  milliseconds_type ms_oneday(s_oneday);    // 86400000ms
//
//
//
//  seconds_type s_onehour(60 * 60);            // 3600s
//  //hours_type h_onehour (s_onehour);          // NOT VALID (type truncates), use:
//  hours_type h_onehour(std::chrono::duration_cast<hours_type>(s_onehour));
//  milliseconds_type ms_onehour(s_onehour);  // 3600000ms (ok, no type truncation)
//
//  std::cout << ms_onehour.count() << "ms in 1h" << std::endl;
//
//  std::chrono::minutes minutes_(3);
//  std::chrono::microseconds milliseconds_(5000000);
//
//  printDuration(minutes_);
////  printDuration(milliseconds_);
//
//  std::chrono::microseconds result = minutes_ - milliseconds_;
//  std::cout << "(minutes_ - milliseconds_).count() = " << (milliseconds_ - minutes_).count()
//            << std::endl;
//  std::chrono::duration_cast<std::chrono::minutes>(milliseconds_).count();
//  std::cout << "std::chrono::duration_cast<std::chrono::seconds>(milliseconds_).count() = "
//            << (std::chrono::duration_cast<std::chrono::milliseconds>(milliseconds_).count())
//            << std::endl;
//
//  std::chrono::microseconds durations_(-1);
//  if (durations_.count() == -1) {
//    std::cout << "durations_.count() == -1 " << std::endl;
//  }
//  std::chrono::microseconds kTransitionDuration = std::chrono::milliseconds(2000);
//  std::cout << "kTransitionDuration = " << kTransitionDuration.count() << std::endl;
//  return 0;
//}

