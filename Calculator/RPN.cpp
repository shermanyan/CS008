//
// Created by Sherman Yan on 11/19/22.
//

#include "RPN.h"

const std::string RPN::ops = "+-x/=^()";


int RPN::getPrecedence(char op) {
    switch (op) {
        case '-':
        case '+':
            return 1;
        case '/':
        case 'x':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

bool RPN::isOperator(const char c) {
    return RPN::ops.find(c) != std::string::npos;
}

float RPN::solve(float a, float b, char operation) {
    if (isOperator(operation)) {
        switch (operation) {
            case '-':
                return b - a;
            case '+':
                return b + a;
            case '/':
                return b / a;
            case 'x':
                return b * a;
            case '^':
                return pow(b, a);
            default:
                return 0;
        }
    }
    return 0;
}

std::queue<std::string> RPN::toPostfix(const std::string &infix) {

    std::vector<std::string> v;

    int counter = 0;
    while (infix[counter] != '\0') {
        v.emplace_back("");
        if (isOperator(infix[counter]))
            v[v.size() - 1].push_back(infix[counter++]);
        else
            while (infix[counter] != '\0' && !isOperator(infix[counter]))
                v[v.size() - 1].push_back(infix[counter++]);
    }

    std::stack<std::string> stack;
    std::queue<std::string> postfix;

    for (std::string s: v) {

        if (isdigit(s[0]))
            postfix.push(s);
        else if (s[0] == '(')
            stack.push(s);
        else if (s[0] == ')') {
            while (stack.top() != "(") {
                postfix.push(stack.top());
                stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.empty() && getPrecedence(stack.top()[0]) >= getPrecedence(s[0])) {
                postfix.push(stack.top());
                stack.pop();
            }
            stack.push(s);
        }
    }
    while (!stack.empty()) {
        postfix.push(stack.top());
        stack.pop();
    }

    return postfix;
}

float RPN::evaluate(const std::string &infix) {

    std::queue<std::string> postfix = toPostfix(infix);
    std::stack<float> solution;

    while (!postfix.empty()) {
        if (!isOperator(postfix.front()[0])) {
            solution.push(std::stof(postfix.front()));
            postfix.pop();
        } else {
            float a = solution.top();
            solution.pop();
            float b = solution.top();
            solution.pop();
            solution.push(solve(a, b, postfix.front()[0]));
            postfix.pop();
        }
    }

    return solution.top();
}

