#include <iostream>
#include "ExpressionTree.h"
int main() {

    ExpressionTree t;

    t.enterExpression("1*4+5*6+7");

    std::cout << std::endl;
    std::cout << "answer: " << t.evaluate();
    return 0;
}
