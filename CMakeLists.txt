cmake_minimum_required(VERSION 3.26)
project(algo)

set(CMAKE_CXX_STANDARD 17)

add_executable(algo main.cpp)

target_include_directories(algo PRIVATE Codility)