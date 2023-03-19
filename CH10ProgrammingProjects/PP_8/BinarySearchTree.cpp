
#ifndef BINARYSEARCHTREE_CPP
#define BINARYSEARCHTREE_CPP

#include "BinarySearchTree.h"
#include <iostream>

template<typename T>
BinarySearchTree<T>::BinarySearchTree() {

}

template<typename T>
BinarySearchTree<T>::~BinarySearchTree() {
    deleteNode(root);
}

template<typename T>
void BinarySearchTree<T>::deleteNode(Node<T> *node) {
    if (node) {
        deleteNode(node->left);
        deleteNode(node->right);
        delete node;
    }
}

template<typename T>
BinarySearchTree<T>::BinarySearchTree(const T &data) {
    root = new Node<T>{data};
}

template<typename T>
void BinarySearchTree<T>::output(T &data) {

    std::cout << data << " ";

}

template<typename T>
void BinarySearchTree<T>::push(Node<T> *&node, const T& data) {
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
void BinarySearchTree<T>::push(T &data) {
    push(root,data);
}

template<typename T>
void BinarySearchTree<T>::operator+=(T &data) {
    push(root,data);
}

// traversals

template<typename T>
void BinarySearchTree<T>::preorder(Node<T> *node, void (*f)(T &)) {
    if (node) {
        (*f)(node->data);
        preorder(node->left, f);
        preorder(node->right, f);
    }
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::preorder(Node<T> *node, void (S::*f)(R&), S &obj) {

    if (node) {
        (obj.*f)(node->data);
        preorder(node->left, f,obj);
        preorder(node->right, f,obj);
    }
}

template<typename T>
void BinarySearchTree<T>::preorder(void (*f)(T &)) {
    preorder(root,f);
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::preorder(void (S::*f)(R &), S &obj) {
    preorder(root,f,obj);
}
template<typename T>
void BinarySearchTree<T>::postorder(Node<T> *node, void (*f)(T &)) {
    if (node) {
        postorder(node->left, f);
        postorder(node->right, f);
        (*f)(node->data);
    }
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::postorder(Node<T> *node, void (S::*f)(R &), S &obj) {
    if (node) {
        postorder(node->left, f,obj);
        postorder(node->right, f,obj);
        (obj.*f)(node->data);
    }
}
template<typename T>
void BinarySearchTree<T>::postorder(void (*f)(T &)) {
    postorder(root,f);
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::postorder(void (S::*f)(R &), S &obj) {
    postorder(root,f,obj);
}

template<typename T>
void BinarySearchTree<T>::inorder(Node<T> *node, void (*f)(T &)) {
    if (node) {
        inorder(node->left, f);
        (*f)(node->data);
        inorder(node->right, f);
    }
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::inorder(Node<T> *node, void (S::*f)(R &), S &obj) {
    if (node) {
        inorder(node->left, f,obj);
        (obj.*f)(node->data);
        inorder(node->right, f,obj);
    }
}

template<typename T>
void BinarySearchTree<T>::inorder(void (*f)(T &)) {
    inorder(root,f);
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::inorder(void (S::*f)(R &), S &obj) {
    inorder(root,f,obj);
}

template<typename T>
void BinarySearchTree<T>::breadthFirst(void (*f)(T &)) {
    std::queue<Node<T>*> q;

    q.push(root);

    while (!q.empty()) {
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);

        (*f)(q.front());

        q.pop();
    }
}

template<typename T>
template<typename S, typename R>
void BinarySearchTree<T>::breadthFirst(void (S::*f)(R &), S &obj) {
    std::queue<Node<T>*> q;

    q.push(root);

    while (!q.empty()){
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);

        (obj.*f)(q.front()->data);

        q.pop();
    }
}

template<typename T>
void BinarySearchTree<T>::printBinarySearchTree(Node<T>* node, int indent){

    indent += 3;
    if (node) {
        printBinarySearchTree(node->right, indent);
        std::cout << std::setw(indent-3) << node->data << "\n";
        printBinarySearchTree(node->left, indent);
    }
}

template<typename T>
void BinarySearchTree<T>::printBinarySearchTree() {

    printBinarySearchTree(root);
}

template<typename T>
Node<T> *BinarySearchTree<T>::getRoot() const {
    return root;
}


#endif