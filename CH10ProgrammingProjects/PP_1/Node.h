//
// Created by Sherman Yan on 3/17/23.
//

#ifndef PP_1_NODE_H
#define PP_1_NODE_H

template<typename T>
struct Node {
    T data;
    Node<T>* left = nullptr, *right = nullptr;
};


#endif //PP_1_NODE_H
