
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "Node.h"
#include <queue>
#include <map>
#include <iomanip>

template <typename T>
class BinarySearchTree {
private:
    Node<T>* root = nullptr;
    void deleteNode(Node<T>* node);

    // preorder
    void preorder(Node<T>* node, void (*f)(T&));
    template <typename S, typename R>
    void preorder(Node<T>* node, void (S::*f)(R&), S& obj);

    // postorder
    void postorder(Node<T>* node, void (*f)(T&));
    template <typename S, typename R>
    void postorder(Node<T>* node, void (S::*f)(R&), S& obj);

    // inorder
    void inorder(Node<T>* node, void (*f)(T&));
    template <typename S, typename R>
    void inorder(Node<T>* node, void (S::*f)(R&), S& obj);

    void push(Node<T>* &node, const T& data);


    //default output function
    static void output(T& data);

    void printBinarySearchTree(Node<T> *node, int indent = 0);


public:
    // big 3

    BinarySearchTree();
    BinarySearchTree(const T& data);

    ~BinarySearchTree();

    // Preorder
    void preorder(void (*f)(T&) = output);
    template <typename S, typename R>
    void preorder(void (S::*f)(R&), S& obj);

    // Postorder
    void postorder(void (*f)(T&) = output);
    template <typename S, typename R>
    void postorder(void (S::*f)(R&), S& obj);

    // inorder
    void inorder(void (*f)(T&) = output);
    template <typename S, typename R>
    void inorder(void (S::*f)(R&), S& obj);

    // bfs
    void breadthFirst(void (*f)(T&) = output);
    template <typename S, typename R>
    void breadthFirst(void (S::*f)(R&), S& obj);

    // insert function
    void push(T& data );

    void operator+=(T& data);

    void printBinarySearchTree();

    Node<T> *getRoot() const;
};

#include "BinarySearchTree.cpp"
#endif //BINARYSEARCHTREE_H
