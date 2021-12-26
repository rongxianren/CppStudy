//
// Created by 唐云 on 2021/3/9.
//

#ifndef UNTITLED_CONSTEXPR_TEST_H
#define UNTITLED_CONSTEXPR_TEST_H
class OffsetBase{
public:
    OffsetBase() = default;
    OffsetBase(double x, double y) : x_(x), y_(y) {}
    constexpr double GetX() const { return x_; }
    constexpr double GetY() const { return y_; }

protected:
    double x_;
    double y_;
};
#endif //UNTITLED_CONSTEXPR_TEST_H
