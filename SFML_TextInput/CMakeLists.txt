cmake_minimum_required(VERSION 3.23)
project(TextInput)

set(CMAKE_CXX_STANDARD 14)

include_directories(Tools)
include_directories(Tools/App)
include_directories(Tools/Enums)
include_directories(Tools/Helpers)
include_directories(Tools/History)
include_directories(Typing)

add_executable(TextInput
        Tools/App/AppComponent.h
        Tools/App/Application.cpp
        Tools/App/Application.h
        Tools/App/EventHandleable.h
        Tools/App/Updatable.h
        Tools/Enums/FontsEnum.h
        Tools/Enums/StatesEnum.h
        Tools/Helpers/KeyboardShortcuts.cpp
        Tools/Helpers/KeyboardShortcuts.h
        Tools/Helpers/MouseEvents.cpp
        Tools/Helpers/MouseEvents.h
        Tools/Helpers/Position.cpp
        Tools/Helpers/Position.h
        Tools/Helpers/States.cpp
        Tools/Helpers/States.h
        Tools/History/History.cpp
        Tools/History/History.h
        Tools/History/HistoryNode.h
        Tools/History/Snapshot.cpp
        Tools/History/Snapshot.h
        Tools/History/SnapshotInterface.h
        Tools/Fonts.cpp
        Tools/Fonts.h
        Typing/Letter.cpp
        Typing/Letter.h
        Typing/MultiText.cpp
        Typing/MultiText.h
        Typing/Typing.cpp
        Typing/Typing.h
        main.cpp TextInput.cpp TextInput.h TextBox.cpp TextBox.h Cursor.cpp Cursor.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(TextInput sfml-graphics)
