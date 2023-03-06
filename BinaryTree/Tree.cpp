
#ifndef BINARYTREE_TREE_CPP
#define BINARYTREE_TREE_CPP

#include "Tree.h"
#include <iostream>

template<typename T>
Tree<T>::Tree() {

}

template<typename T>
Tree<T>::~Tree() {
    deleteNode(root);
}

template<typename T>
void Tree<T>::deleteNode(Node<T> *node) {

    if (node->left == nullptr && node->right == nullptr)
        delete node;
    else if (node->left)
        deleteNode(node->left);
    else if (node->right)
        deleteNode(node->right);

}

template<typename T>
Tree<T>::Tree(const T &data) {
    root = new Node<T>{data};
}

template<typename T>
void Tree<T>::output(T &data) {

    std::cout << data << " ";

}

template<typename T>
void Tree<T>::push(Node<T> *&node, const T& data) {
    if (node == nullptr) {
        node = new Node<T>{data};
    }
    else if (node->data > data) {
        push(node->left, data);
    }
    else {
        push(node->right, data);
    }
}

template<typename T>
void Tree<T>::push(T &data) {
    push(root,data);
}

template<typename T>
void Tree<T>::operator+=(T &data) {
    push(root,data);
}

// traversals

template<typename T>
void Tree<T>::preorder(Node<T> *node, void (*f)(T &)) {
    if (node) {
        (*f)(node->data);
        preorder(node->left, f);
        preorder(node->right, f);
    }
}

template<typename T>
template<typename S>
void Tree<T>::preorder(Node<T> *node, void (S::*f)(T&), S &obj) {

    if (node) {
        (obj.*f)(node->data);
        preorder(node->left, f,obj);
        preorder(node->right, f,obj);
    }
}

template<typename T>
void Tree<T>::preorder(void (*f)(T &)) {
    preorder(root,f);
}

template<typename T>
template<typename S>
void Tree<T>::preorder(void (S::*f)(T &), S &obj) {
    preorder(root,f,obj);
}
template<typename T>
void Tree<T>::postorder(Node<T> *node, void (*f)(T &)) {
    if (node) {
        postorder(node->left, f);
        postorder(node->right, f);
        (*f)(node->data);
    }
}

template<typename T>
template<typename S>
void Tree<T>::postorder(Node<T> *node, void (S::*f)(T &), S &obj) {
    if (node) {
        postorder(node->left, f,obj);
        postorder(node->right, f,obj);
        (obj.*f)(node->data);
    }
}
template<typename T>
void Tree<T>::postorder(void (*f)(T &)) {
    postorder(root,f);
}

template<typename T>
template<typename S>
void Tree<T>::postorder(void (S::*f)(T &), S &obj) {
    postorder(root,f,obj);
}

template<typename T>
void Tree<T>::inorder(Node<T> *node, void (*f)(T &)) {
    if (node) {
        inorder(node->left, f);
        (*f)(node->data);
        inorder(node->right, f);
    }
}

template<typename T>
template<typename S>
void Tree<T>::inorder(Node<T> *node, void (S::*f)(T &), S &obj) {
    if (node) {
        inorder(node->left, f,obj);
        (obj.*f)(node->data);
        inorder(node->right, f,obj);
    }
}

template<typename T>
void Tree<T>::inorder(void (*f)(T &)) {
    inorder(root,f);
}

template<typename T>
template<typename S>
void Tree<T>::inorder(void (S::*f)(T &), S &obj) {
    inorder(root,f,obj);
}


#endif