//
// Created by Sherman Yan on 3/17/23.
//

#include "ExpressionTree.h"

ExpressionTree::ExpressionTree() {

}

ExpressionTree::ExpressionTree(const std::string &expression) {
    enterExpression(expression);
}

ExpressionTree::~ExpressionTree() {
    deleteNode(root);
}

void ExpressionTree::deleteNode(Node<char>* node) {
    if (node) {
        deleteNode(node->left);
        deleteNode(node->right);
        delete node;
    }
}

void ExpressionTree::enterExpression(const std::string &expression) {
    if (root != nullptr)
        clear();

    if(expression.length() != 0) {
        std::string exp = toPostFix(expression);
        std::stack<Node<char> *> q;
        for (char c: exp) {
            if (isdigit(c)) {
                q.push(new Node<char>{c});
            } else {
                Node<char> *n = new Node<char>{c};

                n->left = q.top();
                q.pop();
                n->right = q.top();
                q.pop();

                q.push(n);
            }
        }
        root = q.top();
    }

}

std::string ExpressionTree::toPostFix(const std::string &expression) {

    std::string str;
    std::stack<char> s;

    for (char c: expression) {
        if (!(c == '*' || c =='+')) {
            str.push_back(c);
        } else {
            while (!s.empty() && c >= s.top()) {
                str.push_back(s.top());
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        str.push_back(s.top());
        s.pop();
    }

    std::cout << "infix: "<< expression << " -> postFix: " << str;
    return str;
}

int ExpressionTree::evaluate() {
    return evaluate(root);
}

int ExpressionTree::evaluate(Node<char> *node) {

    if(!node)
        return 0;

    if(!node->left && !node->right)
        return node->data - 48;


    int l = evaluate(node->left);

    // Evaluate right subtree
    int r = evaluate(node->right);

    // Check which operator to apply
    if (node->data=='+')
        return l+r;

    else if (node->data=='*')
        return l*r;

}

void ExpressionTree::clear() {

    this->~ExpressionTree();

    root = nullptr;
}
