//
// Created by Sherman Yan on 3/19/23.
//
#ifndef PP_8_FUNCTIONS_CPP
#define PP_8_FUNCTIONS_CPP

#include "functions.h"

template<typename T>
std::list<T> generateListFromBST(BinarySearchTree<T> &bst){

    std::list<T> list;

    bst.inorder(&std::list<T>::push_back,list);

    return list;
}




#endif
