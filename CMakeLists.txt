cmake_minimum_required(VERSION 3.6)
project(Overloading)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Point.cpp Point.h)
add_executable(Overloading ${SOURCE_FILES})