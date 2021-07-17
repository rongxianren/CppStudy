cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp thread_study.h constructor_study.cpp inline_function/inline_test.cpp inline_function/inline_test.h
        copy_constructor/copy_constructor.cpp copy_constructor/copy_constructor.h vector/vector_test.cpp vector/vector_test.h
        operator_test/OperatorTest.cpp operator_test/OperatorTest.h stdmove/stdmove_test.cpp stdmove/stdmove_test.h
        consexpr_const_test/constexpr_test.cpp consexpr_const_test/constexpr_test.h auto_generated_code_with_macro/dynamic_create.cpp
        auto_generated_code_with_macro/macro_auto_generate_code.cpp auto_generated_code_with_macro/macro_auto_generate_code.h
        cpp_reflect/cpp_reflect_test.cpp std_chrono/ChronoTest.cpp extern_test/extern_test.cpp extern_test/extern_test_main.cpp
        concurrent_thread/thread_test.cpp)