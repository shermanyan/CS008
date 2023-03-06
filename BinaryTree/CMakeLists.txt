cmake_minimum_required(VERSION 3.23)
project(BinaryTree)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(BinaryTree
        A.cpp
        A.h
        Tree.cpp
        Tree.h
        main.cpp
        Node.h)
