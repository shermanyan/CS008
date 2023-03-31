cmake_minimum_required(VERSION 3.23)
project(AutoCorrect_ish)

set(CMAKE_CXX_STANDARD 14)

include_directories(Tools)
include_directories(Tools/App)
include_directories(Tools/Enums)
include_directories(Tools/Helpers)
include_directories(Tools/History)
include_directories(Typing)
include_directories(Typing/TextInput)
include_directories(Heap)


add_executable(AutoCorrect_ish
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
        Typing/TextInput/Cursor.cpp
        Typing/TextInput/Cursor.h
        main.cpp
        Typing/TextInput/TextBox.cpp
        Typing/TextInput/TextBox.h
        Typing/TextInput/TextboxLabel.cpp
        Typing/TextInput/TextboxLabel.h
        Typing/TextInput/TextInput.cpp
        Typing/TextInput/TextInput.h
        Typing/Letter.cpp
        Typing/Letter.h
        Typing/MultiText.cpp
        Typing/MultiText.h
        Typing/Typing.cpp
        Typing/Typing.h
        Heap/Heap.cpp
        Heap/Heap.h Word.cpp Word.h FileReader.cpp FileReader.h WordSuggester.cpp WordSuggester.h WordSuggestion.cpp WordSuggestion.h)


find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(AutoCorrect_ish sfml-graphics)

