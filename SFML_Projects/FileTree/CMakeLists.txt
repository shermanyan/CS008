cmake_minimum_required(VERSION 3.23)
project(FileTree)

set(CMAKE_CXX_STANDARD 14)

include_directories(SFML_Resources/Components/ScrollableContainer)
include_directories(SFML_Resources/Components/TextInput)
include_directories(SFML_Resources/Components/Typing)
include_directories(SFML_Resources/Tools)
include_directories(SFML_Resources/Tools/App)
include_directories(SFML_Resources/Tools/Enums)
include_directories(SFML_Resources/Tools/Helpers)
include_directories(SFML_Resources/Tools/History)

add_executable(FileTree
        SFML_Resources/Components/ScrollableContainer/ScrollableContainer.cpp
        SFML_Resources/Components/ScrollableContainer/ScrollableContainer.h
        SFML_Resources/Components/ScrollableContainer/ScrollEnum.h
        SFML_Resources/Components/TextInput/Cursor.cpp
        SFML_Resources/Components/TextInput/Cursor.h
        SFML_Resources/Components/TextInput/TextBox.cpp
        SFML_Resources/Components/TextInput/TextBox.h
        SFML_Resources/Components/TextInput/TextboxLabel.cpp
        SFML_Resources/Components/TextInput/TextboxLabel.h
        SFML_Resources/Components/TextInput/TextInput.cpp
        SFML_Resources/Components/TextInput/TextInput.h
        SFML_Resources/Components/Typing/Letter.cpp
        SFML_Resources/Components/Typing/Letter.h
        SFML_Resources/Components/Typing/MultiText.cpp
        SFML_Resources/Components/Typing/MultiText.h
        SFML_Resources/Components/Typing/Typing.cpp
        SFML_Resources/Components/Typing/Typing.h
        SFML_Resources/Tools/App/AppComponent.h
        SFML_Resources/Tools/App/Application.cpp
        SFML_Resources/Tools/App/Application.h
        SFML_Resources/Tools/App/EventHandleable.h
        SFML_Resources/Tools/App/Updatable.h
        SFML_Resources/Tools/Enums/FontsEnum.h
        SFML_Resources/Tools/Enums/StatesEnum.h
        SFML_Resources/Tools/Helpers/KeyboardShortcuts.cpp
        SFML_Resources/Tools/Helpers/KeyboardShortcuts.h
        SFML_Resources/Tools/Helpers/MouseEvents.cpp
        SFML_Resources/Tools/Helpers/MouseEvents.h
        SFML_Resources/Tools/Helpers/Position.cpp
        SFML_Resources/Tools/Helpers/Position.h
        SFML_Resources/Tools/Helpers/States.cpp
        SFML_Resources/Tools/Helpers/States.h
        SFML_Resources/Tools/History/History.cpp
        SFML_Resources/Tools/History/History.h
        SFML_Resources/Tools/History/HistoryNode.h
        SFML_Resources/Tools/History/Snapshot.cpp
        SFML_Resources/Tools/History/Snapshot.h
        SFML_Resources/Tools/History/SnapshotInterface.h
        SFML_Resources/Tools/Fonts.cpp
        SFML_Resources/Tools/Fonts.h
        File.cpp
        File.h
        FileNode.cpp
        FileNode.h
        FileTree.cpp
        FileTree.h
        main.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(FileTree sfml-graphics)
