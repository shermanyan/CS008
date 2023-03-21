cmake_minimum_required(VERSION 3.23)
project(HeapsPQueue)

set(CMAKE_CXX_STANDARD 14)

add_executable(HeapsPQueue main.cpp Node.h Heap.cpp Heap.h)
