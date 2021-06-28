//
// Created by 唐云 on 2021/2/5.
//

#ifndef UNTITLED_INLINE_TEST_H
#define UNTITLED_INLINE_TEST_H


class InlineTest {
public:
    inline int add(int a, int b);
};

inline int InlineTest::add(int a, int b) {
    return a + b;
}

#endif //UNTITLED_INLINE_TEST_H
