cmake_minimum_required(VERSION 3.23)
project(CookieJar)

set(CMAKE_CXX_STANDARD 14)

add_executable(CookieJar main.cpp Jar.cpp Jar.h Cookie.h CookieFlavorEnums.h)
