//
// Created by Sherman Yan on 2/6/23.
//
#ifndef TEMPLATEDLINKEDLIST_LINKEDLIST_CPP
#define TEMPLATEDLINKEDLIST_LINKEDLIST_CPP

#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList() {
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &list) {
//    printf("Copy Constructor\n");
    *this = list;
}

template<typename T>
LinkedList<T>::~LinkedList() {
//    printf("Destructor\n");
    Node<T> *n;
    while (head != nullptr){
        n = head;
        head = head->next;
        delete n;
    }
    head = nullptr;
    tail = nullptr;
}

template<typename T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &list) {
    if(&list == this) {
        return *this;
    }
    this->~LinkedList();

    Node<T> *n = list.head;

    while(n != nullptr) {
        push_back(n->data);
        n = n->next;
    }

    return *this ;
}

template<typename T>
Node<T> *LinkedList<T>::createNode(const T& value, Node<T> *prev, Node<T> *next) {
    return new Node<T>{value,next,prev};
}

template<typename T>
Node<T> *&LinkedList<T>::find(const T& item) {
    if (!empty()) {
        Node<T> *n = head;
        while (n != nullptr) {
            if (n->data == item)
                return n;
            n = n->next;
        }
    }
}

template<typename T>
bool LinkedList<T>::remove(Node<T> *node) {

    Node<T> *target = find(node->data);

    if (target == head)
        pop_front();
    else if(target == tail)
        pop_back();
    else if(target != nullptr) {
        target->prev->next = target->next;
        delete target;
        return true;
    }
    return false;
}

template<typename T>
void LinkedList<T>::insertBefore(Node<T> *insertThis, Node<T> *beforeThis) {

    if(head == beforeThis) {
        push_front(insertThis);
    } else {
        if (insertThis == nullptr)
            return;
        else {
            insertThis->prev = beforeThis->prev;
            insertThis->next = beforeThis;
            beforeThis->prev = insertThis;
        }
    }
}

template<typename T>
void LinkedList<T>::insertAfter(Node<T> *insertThis, Node<T> *afterThis) {

    if(tail == afterThis) {
        push_back(insertThis);
    } else {
        if (insertThis == nullptr)
            return;
        else {
            insertThis->next = afterThis->next;
            afterThis->next = insertThis;
            insertThis->prev = afterThis;
        }
    }
}

template<typename T>
void LinkedList<T>::addFirstNode(Node<T> *node) {

    if (empty()) {
        head = node;
        tail = node;
    }
}

template<typename T>
void LinkedList<T>::push_back(Node<T> *node) {
    if (empty())
        addFirstNode(node);
    else {
        node->prev = tail;
        tail->next = node;
        tail = node;
    }
}

template<typename T>
void LinkedList<T>::push_front(Node<T> *node) {
    if (empty())
        addFirstNode(node);
    else {
        head->prev = node;
        node->next = head;
        head = node;
    }
}

template<typename T>
void LinkedList<T>::push_back(const T &item) {
//    std::cout << "push_back " << item << "\n";

    push_back(createNode(item));
}

template<typename T>
void LinkedList<T>::push_front(const T &item) {
//    std::cout << "push_front " << item << "\n";
    push_front(createNode(item));
}

template<typename T>
void LinkedList<T>::pop_back() {
//    printf("pop_back\n");

    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    else {
        Node<T> *n = tail;
        tail = tail->prev;
        delete n;
        tail->next = nullptr;
    }

}

template<typename T>
void LinkedList<T>::pop_front() {
//    printf("pop_front\n");
    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    else {
        Node<T> *n = head;
        head = head->next;
        delete n;
        head->prev = nullptr;
    }

}

template<typename T>
T &LinkedList<T>::back() {
    assert(!empty() && "empty");
    return tail->data;

}

template<typename T>
T &LinkedList<T>::front() {
    assert(!empty() && "empty");
    return head->data;

}

template<typename T>
int LinkedList<T>::size() const {
    Node<T> *n = head;
    int c = 0;
    while(n != nullptr) {
        n = n->next;
        c++;
    }
    return c;
}

template<typename T>
bool LinkedList<T>::empty() const {
    return head == nullptr;
}

template<typename T>
void LinkedList<T>::insertBefore(const T &givenItem, const T &targetItem) {
//    std::cout << "insert " << givenItem << " before " << targetItem << "\n";
    insertBefore(createNode(givenItem),find(targetItem));
}

template<typename T>
void LinkedList<T>::insertAfter(const T &givenItem, const T &targetItem) {
//    std::cout << "insert " << givenItem << " after " << targetItem << "\n";
    insertAfter(createNode(givenItem),find(targetItem));
}

template<typename T>
bool LinkedList<T>::remove(const T &item) {
//    std::cout << "remove " << item << "\n";
    return remove(find(item));
}

template<typename T>
void LinkedList<T>::clear() {
//    std::cout << "cleared\n";
    this->~LinkedList();
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const LinkedList<T> &list) {
    Node<T> *n = list.head;

    while(n != nullptr){
//        out <<"[p:" << n->prev << "]";
        out <<"[" << n->data << "]";
//        out <<"[n:" << n->next << "] ";
        n = n->next;
    }
    return out;
}




#endif