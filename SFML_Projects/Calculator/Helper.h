//
// Created by Sherman Yan on 2/17/23.
//

#ifndef CALCULATOR_HELPER_H
#define CALCULATOR_HELPER_H

#include <string>

class Helper {
public:
    static bool isOperator(const char c);

    static std::string removeTrailingZeros(const std::string &number);
};


#endif //CALCULATOR_HELPER_H
