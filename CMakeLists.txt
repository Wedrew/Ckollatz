cmake_minimum_required(VERSION 3.7)
project(Collatz)

set(CMAKE_CXX_STANDARD 11)

find_package(SDL2 REQUIRED)
include_directories(SDL2Test ${SDL2_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp Collatz.cpp)
add_executable(Collatz ${SOURCE_FILES})
target_link_libraries(Collatz ${SDL2_LIBRARIES})