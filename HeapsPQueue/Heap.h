//
// Created by Sherman Yan on 3/21/23.
//

#ifndef HEAPSPQUEUE_HEAP_H
#define HEAPSPQUEUE_HEAP_H
#include <vector>

template<typename T>
class Heap {
private:
    std::vector<T> v;
    void reheapifyUp(int index);
    void reheapifyDown(int index = 0);

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
    int size();
    bool empty();

    const std::vector<T> &getVector() const;

    void operator += (const T& item);

};

#include "Heap.cpp"


#endif //HEAPSPQUEUE_HEAP_H
