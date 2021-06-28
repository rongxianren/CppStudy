//
// Created by 唐云 on 2021/2/19.
//

#include "OperatorTest.h"

//using namespace std;

MyObject::MyObject() {
  cout << "MyObject 的默认构造函数被调用" << endl;
}

MyObject &MyObject::operator=(const MyObject &myObject) {
  height = 10;
  age = 100;
  cout << "MyObject 的赋值函数被调用" << endl;
  return *this;
}

template<typename T>
void printStr(const T &value) {
  std::cout << "value = " << value << std::endl;
}

int main() {
  MyObject myObject;
  myObject.age = 11;
  myObject.height = 12;
  MyObject myObject1;

  myObject1 = myObject;
  cout << "myObject1.age = " << myObject1.age << " myObject.height = " << myObject1.height << endl;
  cout << "&myObject1 = " << &myObject1 << " &myObject = " << &myObject << endl;

//  auto str = std::string(R"size"s);

//  std::string kk = std::string("asdga");
//  printStr(std::string("size"s));

  float sum = 0.0f;
  for (int i = 0; i < 20000000; i++) {
    float x = 1.0f;
    sum = sum + x;
  }

  std::cout << " sum = " << sum << std::endl;

  for (int i = 0; i < 20; i++) {
    for (int k = 0; k < 10; k++) {
      if (k < 5) {
        std::cout << " i = " << i << "; k = " << k << endl;
      } else {
        break;
      }
    }
  }
  return 0;
}

