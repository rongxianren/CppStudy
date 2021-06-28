//
// Created by 唐云 on 2021/1/26.
//

#ifndef UNTITLED_CONSTRUCTOR_STUDY_H
#define UNTITLED_CONSTRUCTOR_STUDY_H


#include <iostream>
#include "Shape.h"
using namespace std;

int g_constructCount = 0;
int g_copyConstructCount = 0;
int g_destructCount = 0;


class A {
public:
    int i = 0;
//    A() {
//        cout << " construct" << endl;
//    }

    A(int i) : i(i) {
        cout << " construct" << endl;
    }

    A() {}

//    A(const A &a) : m_ptr(new int(*a.m_ptr)) //深拷贝的拷贝构造函数
//    {
//        cout << "copy construct" << endl;
//    }

//    A(A &&a) : m_ptr(a.m_ptr) {
//        a.m_ptr = nullptr;
//        cout << "move construct" << endl;
//    }

//    ~A() { delete m_ptr; }

public:
//    int *m_ptr;
};

class GestureBinding {
public:
    A a;

    void print() {
        cout << "GestureBinding print()" << endl;
    }

//    GestureBinding(A a) : a(a) {
//        this->a = a;
//    }

    GestureBinding(A a) {
        this->a = a;
    }

    ~GestureBinding() = default;

    const GestureBinding &operator=(const GestureBinding &signal);
};

//int main() {
//    A a(1);
//    GestureBinding gestureBinding = GestureBinding(a);
//
//    return 0;
//}
//

#endif //UNTITLED_CONSTRUCTOR_STUDY_H
