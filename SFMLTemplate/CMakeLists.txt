cmake_minimum_required(VERSION 3.23)
project(SFMLTemplate)

set(CMAKE_CXX_STANDARD 14)

add_executable(SFMLTemplate main.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(SFMLTemplate sfml-graphics)
