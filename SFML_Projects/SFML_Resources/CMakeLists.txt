cmake_minimum_required(VERSION 3.23)
project(SFML_Resources)

set(CMAKE_CXX_STANDARD 14)

include_directories(Components/ScrollableContainer)
include_directories(Components/TextInput)
include_directories(Components/Typing)

include_directories(Tools)
include_directories(Tools/App)
include_directories(Tools/Enums)
include_directories(Tools/Helpers)
include_directories(Tools/History)

add_executable(SFML_Resources
        Components/ScrollableContainer/ScrollableContainer.cpp
        Components/ScrollableContainer/ScrollableContainer.h
        Components/ScrollableContainer/ScrollEnum.h
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
        Components/TextInput/Cursor.cpp
        Components/TextInput/Cursor.h
        Components/TextInput/TextBox.cpp
        Components/TextInput/TextBox.h
        Components/TextInput/TextboxLabel.cpp
        Components/TextInput/TextboxLabel.h
        Components/TextInput/TextInput.cpp
        Components/TextInput/TextInput.h
        Components/Typing/Letter.cpp
        Components/Typing/Letter.h
        Components/Typing/MultiText.cpp
        Components/Typing/MultiText.h
        Components/Typing/Typing.cpp
        Components/Typing/Typing.h)



find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(SFML_Resources sfml-graphics)
