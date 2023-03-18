//
// Created by Sherman Yan on 3/17/23.
//

#ifndef PP_1_EXPRESSIONTREE_H
#define PP_1_EXPRESSIONTREE_H

#include <string>
#include "Node.h"
#include <stack>
#include <queue>
#include <iostream>

class ExpressionTree {
private:
    Node<char>* root = nullptr;
    std::string toPostFix(const std::string& expression);

    void deleteNode(Node<char>* node);
    int evaluate(Node<char>* node);

public:
    ExpressionTree();
    ExpressionTree(const std::string& expression);
    ~ExpressionTree();

    void clear();
    void enterExpression(const std::string& expression);
    int evaluate();

};


#endif //PP_1_EXPRESSIONTREE_H
