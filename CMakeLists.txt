cmake_minimum_required(VERSION 3.9)
project(Lab4Ex1)

set(CMAKE_CXX_STANDARD 11)

include_directories(${LIBRARY_OUTPUT_PATH}Lib)
add_executable(Lab4Ex1 main.cpp Lib/IntegerSet.cpp Lib/IntegerSet.h)