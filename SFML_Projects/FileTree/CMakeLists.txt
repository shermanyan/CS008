cmake_minimum_required(VERSION 3.23)
project(FileTree )

set(CMAKE_CXX_STANDARD 14)

add_executable(FileTree
        File.cpp
        File.h
        FileNode.cpp
        FileNode.h
        FileTree.cpp
        FileTree.h
        main.cpp)


find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(FileTree sfml-graphics)
