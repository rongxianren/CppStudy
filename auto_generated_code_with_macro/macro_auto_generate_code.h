//
// Created by 唐云 on 2021/3/16.
//

#include <typeinfo>
#include <map>
#include <iostream>

#ifndef UNTITLED_MACRO_AUTO_GENERATE_CODE_H
#define UNTITLED_MACRO_AUTO_GENERATE_CODE_H

#define DEF_CLASS(CLASSNAME) \
    struct CLASSNAME { \
    CLASSNAME(std::map<std::string, int>& map) {\
    _DEF_CLASS_TAIL/*..."curry the arguments"...*/
#define _DEF_CLASS_TAIL(FIELDS) \
        FIELDS \
    }                           \
    void show(int value )                 \
    {                           \
        std::cout << "value = " << value << endl;                                \
    }\
    };
#define CHK_FIELD(TYPE) \
    if (true) \
    { std::cout << "CHK_FIELD" << endl;}

#endif //UNTITLED_MACRO_AUTO_GENERATE_CODE_H
