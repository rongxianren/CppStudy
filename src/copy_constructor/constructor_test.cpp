//
// Created by 唐云 on 2021/12/26.
//
#include <iostream>
#include "copy_constructor.h"
using namespace std;

void func(std::shared_ptr<CopyConstructor>& shared_ptr1) { shared_ptr1->Haha(); }

//int main() {
//  int a = 10;
//  int b = 20;
//  CopyConstructor constructor(a);
//  CopyConstructor constructor1 = constructor;
//  CopyConstructor constructor2(b);
//  //  constructor2 = constructor;
//
//  cout << "----CopyConstructor constructor3----" << endl;
//  //  CopyConstructor constructor3(constructor);
//  std::shared_ptr<CopyConstructor> shared_ptr1 = std::make_shared<CopyConstructor>(b);
//  func(shared_ptr1);
//  return 0;
//}