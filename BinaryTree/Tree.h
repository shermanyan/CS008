
#ifndef BINARYTREE_TREE_H
#define BINARYTREE_TREE_H

#include "Node.h"
#include <queue>
#include <map>
#include <iomanip>

template <typename T>
class Tree {
private:
    Node<T>* root = nullptr;
    void deleteNode(Node<T>* node);

    // preorder
    void preorder(Node<T>* node, void (*f)(T&));
    template <typename S>
    void preorder(Node<T>* node, void (S::*f)(T&), S& obj);

    // postorder
    void postorder(Node<T>* node, void (*f)(T&));
    template <typename S>
    void postorder(Node<T>* node, void (S::*f)(T&), S& obj);

    // inorder
    void inorder(Node<T>* node, void (*f)(T&));
    template <typename S>
    void inorder(Node<T>* node, void (S::*f)(T&), S& obj);

    void push(Node<T>* &node, const T& data);


    //default output function
    static void output(T& data);

    void printTree(Node<T> *node, int indent = 0);


public:
    // big 3

    Tree();
    Tree(const T& data);

    ~Tree();

    // Preorder
    void preorder(void (*f)(T&) = output);
    template <typename S>
    void preorder(void (S::*f)(T&), S& obj);

    // Postorder
    void postorder(void (*f)(T&) = output);
    template <typename S>
    void postorder(void (S::*f)(T&), S& obj);

    // inorder
    void inorder(void (*f)(T&) = output);
    template <typename S>
    void inorder(void (S::*f)(T&), S& obj);

    // bfs
    void breadthFirst(void (*f)(T&) = output);
    template <typename S>
    void breadthFirst(void (S::*f)(T&), S& obj);

    // insert function
    void push(T& data );

    void operator+=(T& data);

    void printTree();
};

#include "Tree.cpp"
#endif //BINARYTREE_TREE_H
