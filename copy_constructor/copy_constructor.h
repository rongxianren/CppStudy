//
// Created by 唐云 on 2021/2/8.
//

#ifndef UNTITLED_COPY_CONSTRUCTOR_H
#define UNTITLED_COPY_CONSTRUCTOR_H

class CopyConstructor {
 public:
  int i = 10;
  explicit CopyConstructor(int value);
  CopyConstructor();
  CopyConstructor(const CopyConstructor &value);

  ~CopyConstructor();
};

class Two {
 public:
  Two(const CopyConstructor &value);
};

#endif //UNTITLED_COPY_CONSTRUCTOR_H
