//
// Created by Sherman Yan on 2/6/23.
//

#ifndef TEMPLATEDLINKEDLIST_NODE_H
#define TEMPLATEDLINKEDLIST_NODE_H

template<typename T>
struct Node{
    T data;
    Node<T>* next = nullptr;
    Node<T>* prev = nullptr;
};
#endif //TEMPLATEDLINKEDLIST_NODE_H
