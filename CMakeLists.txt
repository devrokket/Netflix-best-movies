cmake_minimum_required(VERSION 3.23)
project(kaggleOop)

set(CMAKE_CXX_STANDARD 14)

add_executable(kaggleOop main.cpp cmake-build-debug/Stack.cpp cmake-build-debug/Stack.h Read.cpp Read.h Netflix.cpp Netflix.h)
