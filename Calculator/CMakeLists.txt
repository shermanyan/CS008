cmake_minimum_required(VERSION 3.23)
project(calculator)

set(CMAKE_CXX_STANDARD 14)

include_directories(SFML_tools)

add_executable(calculator
        SFML_tools/AppComponent.h
        SFML_tools/Application.cpp
        SFML_tools/Application.h
        SFML_tools/EventHandleable.h
        SFML_tools/Fonts.cpp
        SFML_tools/Fonts.h
        SFML_tools/FontsEnum.h
        SFML_tools/MouseEvents.cpp
        SFML_tools/MouseEvents.h
        SFML_tools/Position.cpp
        SFML_tools/Position.h
        SFML_tools/SpriteImage.cpp
        SFML_tools/SpriteImage.h
        SFML_tools/Updatable.h
        Button.cpp
        Button.h
        Calculator.cpp
        Calculator.h
        main.cpp
        Screen.cpp
        Screen.h
        Helper.cpp
        Helper.h
        SFML_tools/Shapes/Squircle.cpp
        SFML_tools/Shapes/Squircle.h
        ButtonColor.cpp ButtonColor.h
        RPN.cpp
        Calculator.cpp
        )

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(calculator sfml-graphics)
