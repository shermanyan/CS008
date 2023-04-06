//
// Created by Sherman Yan on 3/21/23.
//

#ifndef HEAPSPQUEUE_HEAP_H
#define HEAPSPQUEUE_HEAP_H
#include <vector>

template<typename T>
class Heap: public std::vector<T>  {
private:
    void heapifyUp(int index);
    void heapifyDown(int index = 0);

    int getMaxChild(int index);
    int getParent(int index);
    int getLeftChild(int index);
    int getRightChild(int index);
    void swap(int a, int b);

public:
    Heap();
    void push(const T& item);
    void pop();
    T& top();

    const std::vector<T> &getVector() const;

    void sort();

    void operator += (const T& item);

};

#include "Heap.cpp"


#endif //HEAPSPQUEUE_HEAP_H
