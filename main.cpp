#include <iostream>
#include <zconf.h>
#include <csignal>
#include "Shape.h"

using namespace std;

class Box {
public:
    Box() {
        cout << "构造函数被调用" << endl;
    }

    ~Box() {
        cout << "析构函数被调用" << endl;
    }
};

template<class T>
T const &Max(T const &a, T const &b) {
    return a < b ? b : a;
}


void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);

}

// 线程的运行函数
void *say_hello(void *args) {
    cout << "Hello Nowcoder！" << endl;
    return 0;
}


void *PrintHello(void *threadid) {
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int *) threadid);
    cout << "Hello Nowcoder! 线程 ID, " << tid << endl;
    pthread_exit(NULL);
}

class MyClass {
public:
    int i = 10;
};

void Fun(MyClass m) {}

#define NUM_THREADS 5
#define TRIANGLE 0

//int main() {
//
//    Rectangle rectangle(10,20);
//    cout << "sizeOf(rectangle) = " << sizeof(rectangle) << endl;
//    cout << "rectangle.mWidth = " << rectangle.mWidth << " rectangle.mHeight = "<<rectangle.mHeight << endl;
//
//    int *pRectangle = (int *) &rectangle;
//    cout << "pRectangle = " << *pRectangle << endl;
//
//    MyClass myClass;
//    cout << "sizeOf(myClass) = " << sizeof(myClass) << endl;
//    cout << "myClass.i = " << myClass.i << endl;
//    int *p = (int *) &myClass;
//    cout << "p = " << *p << endl;
//    *p = 100;
//    cout << "myClass.i = " << myClass.i << endl;
//
////    cout<< typeid(nullptr).name() <<endl;
////    cout<< typeid(NULL).name() <<endl;
//}

