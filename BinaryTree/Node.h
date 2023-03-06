#ifndef BINARYTREE_NODE_H
#define BINARYTREE_NODE_H

template<typename T>
struct Node {
    T data;
    Node<T> *left = nullptr, *right = nullptr;
};


#endif //BINARYTREE_NODE_H
