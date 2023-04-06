cmake_minimum_required(VERSION 3.23)
project(DropShadow)

set(CMAKE_CXX_STANDARD 14)

add_executable(DropShadow main.cpp DropShadow.cpp DropShadow.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(DropShadow sfml-graphics)
