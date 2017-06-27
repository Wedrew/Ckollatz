cmake_minimum_required(VERSION 3.7)
project(Collatz)

set(CMAKE_CXX_STANDARD 11)

find_library(SDL2_App ${SDL2_LIBRARY})

set(SOURCE_FILES main.cpp Collatz.h Collatz.cpp)
add_executable(Collatz ${SOURCE_FILES})