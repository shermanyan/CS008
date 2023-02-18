//
// Created by Sherman Yan on 11/19/22.
//

#ifndef CALCULATOR_RPN_H
#define CALCULATOR_RPN_H

#include <stack>
#include <queue>
#include <string>
#include <vector>
#include <cmath>

class RPN {

private:
    static const std::string ops;

    static int getPrecedence(char op);

    static bool isOperator(const char c);

    static float solve(float a, float b, char operation);

    static std::queue<std::string> toPostfix(const std::string &infix);

public:
    static float evaluate(const std::string &infix);

};

#endif //CALCULATOR_RPN_H
