//
// Created by Sherman Yan on 2/8/23.
//

#ifndef TEMPLATEDLINKEDLIST_QUEUE_H
#define TEMPLATEDLINKEDLIST_QUEUE_H

#include "LinkedList.h"

template <class T>
class Queue: private LinkedList<T>{
public:
    Queue();
    void push(T item);
    void pop();

    using LinkedList<T>::front;
    T seek(unsigned int pos);

    using LinkedList<T>::size;
    using LinkedList<T>::empty;

};

#include "Queue.cpp"

#endif //TEMPLATEDLINKEDLIST_QUEUE_H
