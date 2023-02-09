cmake_minimum_required(VERSION 3.17)
project(ucs8_spring23_review_stubs_and_drivers)

set(CMAKE_CXX_STANDARD 14)

add_executable(ucs8_spring23_review_stubs_and_drivers main.cpp Hangman.cpp Hangman.h Wordbank.cpp Wordbank.h Word.cpp Word.h Visuals.cpp Visuals.h Accuracy.cpp Accuracy.h UserInput.cpp UserInput.h NoWordException.cpp NoWordException.h Tests.h Tests.cpp)

target_link_libraries(ucs8_spring23_review_stubs_and_drivers sfml-graphics sfml-audio)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)