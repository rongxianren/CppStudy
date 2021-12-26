//
// Created by 唐云 on 2021/2/19.
//

#ifndef UNTITLED_OPERATORTEST_H
#define UNTITLED_OPERATORTEST_H

#include <iostream>

using namespace std;

class MyObject {
public:
    int age;
    int height;
    string a = "sada"s;
public:
    MyObject();

    MyObject &operator=(const MyObject &myObject);
};

#endif //UNTITLED_OPERATORTEST_H

