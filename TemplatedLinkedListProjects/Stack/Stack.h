//
// Created by Sherman Yan on 2/8/23.
//

#ifndef TEMPLATEDLINKEDLIST_STACK_H
#define TEMPLATEDLINKEDLIST_STACK_H

#include "LinkedList.h"

template<class T>
class Stack : protected LinkedList<T> {
public:
    Stack();

    void push(T item);
    void pop();

    T top();
    T seek(unsigned int pos);

    using LinkedList<T>::size;
    using LinkedList<T>::empty;

};

#include "Stack.cpp"


#endif //TEMPLATEDLINKEDLIST_STACK_H
