cmake_minimum_required(VERSION 3.7)
project(fibonacci)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(fibonacci ${SOURCE_FILES})