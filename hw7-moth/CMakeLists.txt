cmake_minimum_required(VERSION 3.23)
project(hw7_moth)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw7_moth
        moth.cpp
        moth.h
        moth_main.cpp)
