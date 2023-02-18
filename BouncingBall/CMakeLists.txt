cmake_minimum_required(VERSION 3.23)
project(BouncingBall)

set(CMAKE_CXX_STANDARD 14)

add_executable(BouncingBall main.cpp Ball.cpp Ball.h BouncingObject.cpp BouncingObject.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(BouncingBall sfml-graphics)
