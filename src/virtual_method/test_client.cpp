//
// Created by 唐云 on 2022/1/28.
//

#include <iostream>
#include <string>

using namespace std;

class SubDeriveClass;
class DeriveClass;
// class BaseClass {
//  public:
//   BaseClass() {}
//   virtual ~BaseClass() { std::cout << "BaseClass Destructor called" << endl; }
// };
//
// class DeriveClass : public BaseClass {
//  public:
//   DeriveClass() {}
//
//   ~DeriveClass() override { std::cout << "DeriveClass Destructor called" << endl; }
// };
//
// class SubDeriveClass : public DeriveClass {
//  public:
//   SubDeriveClass() {}
//
//   ~SubDeriveClass() override { std::cout << "SubDeriveClass Destructor called" << endl; }
// };

//int main() {
//  SubDeriveClass* obj = nullptr;
//  DeriveClass* base = nullptr;
//  delete base;
//  return 0;
//}