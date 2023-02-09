//
// Created by Sherman Yan on 2/6/23.
//

#ifndef TEMPLATEDLINKEDLIST_LINKEDLIST_H
#define TEMPLATEDLINKEDLIST_LINKEDLIST_H
#include "Node.h"
#include <iostream>
#include <cassert>

template<typename T>
class LinkedList {
private:
    Node<T>* head = nullptr, *tail = nullptr;

    Node<T>* createNode(const T& value, Node<T>* prev = nullptr, Node<T>* next = nullptr);
    Node<T>*& find(const T& item);
    bool remove(Node<T>* node);
    void push_back(Node<T>* node);
    void push_front(Node<T>* node);
    void insertBefore(Node<T>* insertThis, Node<T>* beforeThis);
    void insertAfter(Node<T>* insertThis, Node<T>* afterThis);

    void addFirstNode(Node<T>* node);

public:
    LinkedList();
    LinkedList(const LinkedList<T>& list);
    ~LinkedList();
    LinkedList<T>& operator = (const LinkedList<T>& list);

    // add item to the end of the list
    void push_back(const T& item);

    // add item to the front of the list
    void push_front(const T& item);

    // remove the last item of the list
    void pop_back();

    // removes the first item in the list
    void pop_front();

    // returns the last item in the list ( item can be modified )
    T& back();

    // returns the first item in the list ( item can be modified )
    T& front();

    // returns the number of items in the list
    int size() const;

    // returns true if the list has no items, otherwise false
    bool empty() const;

    // clear list
    void clear();

    // insert the given item before a node containing the target containing the target item
    void insertBefore(const T& givenItem, const T& targetItem);

    // insert the given item after a node containing the target containing the target item
    void insertAfter(const T& givenItem, const T& targetItem);

    // removes the first instance of the item, true if successful
    bool remove(const T& item);

    template<typename S>
    friend std::ostream& operator << (std::ostream& out, const LinkedList<S>& list);

};



#include "LinkedList.cpp"
#endif //TEMPLATEDLINKEDLIST_LINKEDLIST_H
