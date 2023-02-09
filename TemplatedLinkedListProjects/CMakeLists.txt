cmake_minimum_required(VERSION 3.23)
project(TemplatedLinkedList)

set(CMAKE_CXX_STANDARD 14)

include_directories(LinkedList)
include_directories(Queue)
include_directories(Stack)

add_executable(TemplatedLinkedlist
        LinkedList/LinkedList.cpp
        LinkedList/LinkedList.h
        LinkedList/linkedlistTester.cpp
        LinkedList/Node.h
        )
add_executable(Stack
        LinkedList/LinkedList.cpp
        LinkedList/LinkedList.h
        LinkedList/Node.h
        Stack/Stack.cpp
        Stack/Stack.h
        Stack/stackTester.cpp)
add_executable(Queue
        LinkedList/LinkedList.cpp
        LinkedList/LinkedList.h
        LinkedList/Node.h
        Queue/Queue.cpp
        Queue/Queue.h
        Queue/queueTester.cpp
        )
