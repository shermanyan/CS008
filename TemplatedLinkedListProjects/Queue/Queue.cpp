//
// Created by Sherman Yan on 2/8/23.
//
#ifndef TEMPLATEDLINKEDLIST_QUEUE_CPP
#define TEMPLATEDLINKEDLIST_QUEUE_CPP

#include "Queue.h"

template<class T>
Queue<T>::Queue():LinkedList<T>() {
}

template<class T>
void Queue<T>::push(T item) {
    LinkedList<T>::push_back(item);
}

template<class T>
void Queue<T>::pop() {
    return LinkedList<T>::pop_front();
}

template<class T>
T Queue<T>::seek(unsigned int pos) {

    // create new queue
    Queue<T> q;

    //move items to new queue
    for (int i = 0; i < pos - 1; ++i) {
        q.push(front());
        pop();

    }
    // save the item seeked
    T item = front();

    // move the rest of the queue to new queue
    while(!empty()) {
        q.push(front());
        pop();
    }

    //delete and set object to new queue
    this->~Queue();
    *this = q;

    return item;
}

#endif