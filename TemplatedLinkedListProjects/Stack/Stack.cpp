//
// Created by Sherman Yan on 2/8/23.
//

#ifndef TEMPLATEDLINKEDLIST_STACK_CPP
#define TEMPLATEDLINKEDLIST_STACK_CPP

#include "Stack.h"

template<class T>
Stack<T>::Stack():LinkedList<T>() {
}

template<class T>
void Stack<T>::push(T item) {
    LinkedList<T>::push_front(item);
}

template<class T>
void Stack<T>::pop() {
    return LinkedList<T>::pop_front();
}

template<class T>
T Stack<T>::top() {
    return LinkedList<T>::front();
}

template<class T>
T Stack<T>::seek(unsigned int pos) {

    //temp stack
    Stack<T> temp;

    //push into temp stack
    for (int i = 0; i < pos - 1; ++i) {
        temp.push(top());
        pop();
    }
    // store item at pos
    T item = top();

    //push temp stack back
    while(!temp.empty()) {
        push(temp.top());
        temp.pop();
    }

    return item;

}

#endif