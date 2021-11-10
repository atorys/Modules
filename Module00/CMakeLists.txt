cmake_minimum_required(VERSION 3.20)
project(Module00)

include_directories(./)

set(CMAKE_CXX_STANDARD 98)

add_executable(Module00
        ex01/phonebook.cpp
        ex01/phonebook.hpp
        ex01/main.cpp)
