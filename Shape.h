//
// Created by 唐云 on 2021/1/21.
//


#include <iostream>

using namespace std;

class Shape {
public:
    float mWidth, mHeight;
public:
    Shape(float width, float height) {
        this->mWidth = width;
        this->mHeight = height;
    }

    virtual float area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(float width, float height) : Shape(width, height) {}

    float area() {
        if (mWidth <= 0 || mHeight <= 0) {
            throw std::invalid_argument("this width or height of the Rectangle is zero");
        }
        cout << "this is area of Rectangle" << endl;
        return mHeight * mHeight;
    }
};

class Triangle : public Shape {
public:
    Triangle(float width, float height) : Shape(width, height) {}

    float area() override {
        if (mWidth <= 0 || mHeight <= 0) {
            throw std::invalid_argument("this width or height of the Triangle is zero");
        }
        cout << "this is area of Triangle" << endl;
        return mHeight * mHeight / 2;
    }
};
