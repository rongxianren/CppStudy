cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE SRC_FILES
        ${ROOT_PATH}/src/*.cpp)

message("RENDER_TEST_FILES_LENGTH=" ${SRC_FILES})

add_executable(untitled ${SRC_FILES})