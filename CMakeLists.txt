cmake_minimum_required(VERSION 3.29)
project(MersenneNumbers)

set(CMAKE_CXX_STANDARD 20)

add_executable(MersenneNumbers main.cpp
        source/numbers.cpp
        source/help.cpp
        source/divisors.cpp
        headers/numbers.h
        headers/help.h
        headers/divisors.h
        headers/test.h
        source/test.cpp)