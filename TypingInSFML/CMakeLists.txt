cmake_minimum_required(VERSION 3.23)
project(TypingInSFML)

set(CMAKE_CXX_STANDARD 14)
include_directories(MultiText)
include_directories(SFMLTools)

add_executable(TypingInSFML main.cpp MultiText/Letter.cpp MultiText/Letter.h Typing.cpp Typing.h MultiText/MultiText.cpp MultiText/MultiText.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(TypingInSFML sfml-graphics)
