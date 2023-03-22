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
    if (size() > index * 2 + 2) {
        int right = getRightChild(index);
        int left = getLeftChild(index);
        int maxChild = v.at(right) > v.at(left) ? right: left;
        return v.at(index) > v.at(maxChild) ? index: maxChild;
    }
    else if (size() > index * 2 + 1){
        int left = getLeftChild(index);
        return v.at(index) > v.at(left) ? index: left;
    }
    return index;
}

template<typename T>
void Heap<T>::reheapifyUp(int index) {
    if (index != 0) {
        int parent = getParent(index);
        int max = getMaxChild(parent);
        if(max != parent){
            swap(parent, index);
            reheapifyUp(parent);
        }
    }
}

template<typename T>
void Heap<T>::reheapifyDown(int index) {
    if(!empty()) {
        int max = getMaxChild(index);
        if (max != index) {
            swap(index,max);
            reheapifyDown(max);
        }
    }
}

template<typename T>
void Heap<T>::swap(int a, int b) {
    std::swap(v.at(a),v.at(b));
}

template<typename T>
void Heap<T>::push(const T &item) {
    v.push_back(item);
    reheapifyUp(size()-1);
}

template<typename T>
void Heap<T>::pop() {
    swap(size() - 1,0);
    v.pop_back();
    reheapifyDown();
}

template<typename T>
T &Heap<T>::top() {
    return v.front() ;
}

template<typename T>
int Heap<T>::size() {
    return v.size();
}

template<typename T>
const std::vector<T> &Heap<T>::getVector() const {
    return v;
}

template<typename T>
bool Heap<T>::empty() {
    return v.empty();
}

template<typename T>
void Heap<T>::operator+=(const T &item) {
    push(item);
}

#endif