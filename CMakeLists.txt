cmake_minimum_required(VERSION 3.6)
project(FullStrings)

include_directories(include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp include/file.hpp src/file.cpp)
add_executable(FullStrings ${SOURCE_FILES})