//
// Created by Sherman Yan on 3/21/23.
//

#ifndef HEAPSPQUEUE_HEAP_CPP
#define HEAPSPQUEUE_HEAP_CPP
#include "Heap.h"
#include <iostream>

template<typename T>
Heap<T>::Heap() {

}

template<typename T>
int Heap<T>::getParent(int index) {
    return (index - 1) / 2;
}

template<typename T>
int Heap<T>::getLeftChild(int index) {
    return index * 2 + 1;
}

template<typename T>
int Heap<T>::getRightChild(int index) {
    return index * 2 + 2;
}

template<typename T>
int Heap<T>::getMaxChild(int index) {
    if (this->size() > index * 2 + 2) {
        int right = getRightChild(index);
        int left = getLeftChild(index);
        int maxChild = this->at(right) > this->at(left) ? right: left;
        return this->at(index) > this->at(maxChild) ? index: maxChild;
    }
    else if (this->size() > index * 2 + 1){
        int left = getLeftChild(index);
        return this->at(index) > this->at(left) ? index: left;
    }
    return index;
}

template<typename T>
void Heap<T>::heapifyUp(int index) {
    if (index != 0) {
        int parent = getParent(index);
        int max = getMaxChild(parent);
        if(max == index){
            swap(parent, index);
            heapifyUp(parent);
        }
    }
}

template<typename T>
void Heap<T>::heapifyDown(int index) {
    if(!this->empty()) {
        int max = getMaxChild(index);
        if (max != index) {
            swap(index,max);
            heapifyDown(max);
        }
    }
}

template<typename T>
void Heap<T>::swap(int a, int b) {
    std::swap(this->at(a),this->at(b));
}

template<typename T>
void Heap<T>::push(const T &item) {
    this->push_back(item);
    heapifyUp(this->size()-1);
}

template<typename T>
void Heap<T>::pop() {
    swap(this->size() - 1,0);
    this->pop_back();
    heapifyDown();
}

template<typename T>
T &Heap<T>::top() {
    return this->front() ;
}


template<typename T>
const std::vector<T> &Heap<T>::getVector() const {
    return *this;
}

template<typename T>
void Heap<T>::operator+=(const T &item) {
    push(item);
}




#endif