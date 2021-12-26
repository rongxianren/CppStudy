//
// Created by 唐云 on 2021/2/8.
//

#include "copy_constructor.h"
#include "../inline_function/inline_test.h"
#include<iostream>
using namespace std;
CopyConstructor::CopyConstructor() {
  cout << "this is default constructor method" << endl;
}

CopyConstructor::CopyConstructor(int value) : i(value) {
  cout << "this is default constructor method" << endl;
}

CopyConstructor::CopyConstructor(const CopyConstructor &value) {
  cout << "this is copy constructor method" << endl;
}

CopyConstructor::~CopyConstructor() {
  cout << "this is destruct method" << endl;
}

Two::Two(const CopyConstructor &value) {
  cout << "Two constructor is called" << endl;
}

void foo(Two two) {
  cout << "function foo is called" << endl;
}

//int main() {
//  cout << " start in main" << endl;
//  CopyConstructor a;
//  CopyConstructor b(a);
//  CopyConstructor *c = new CopyConstructor();
//  CopyConstructor abc{3};
//  cout << c->i << endl;
//  delete c;
//
//  foo(a);
//
//  return 0;
//}