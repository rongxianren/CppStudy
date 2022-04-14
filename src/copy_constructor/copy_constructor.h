//
// Created by 唐云 on 2021/2/8.
//

#ifndef UNTITLED_COPY_CONSTRUCTOR_H
#define UNTITLED_COPY_CONSTRUCTOR_H

class CopyConstructor {
 public:
  int& i;
  explicit CopyConstructor(int& value);
//  CopyConstructor(int& i);
//  CopyConstructor(const CopyConstructor& value);
  ~CopyConstructor();
//  CopyConstructor& operator=(const CopyConstructor& rhs);
  void Haha();
};

class Two {
 public:
  Two(const CopyConstructor& value);
};

#endif  // UNTITLED_COPY_CONSTRUCTOR_H
