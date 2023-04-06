//
// Created by Sherman Yan on 2/17/23.
//

#include "Helper.h"

bool Helper::isOperator(const char c) {
    std::string ops = "+-x/=";

    return ops.find(c) != std::string::npos;
}

std::string Helper::removeTrailingZeros(const std::string &number) {
    std::string s = number;

    while (s.back() == '0')
        s.pop_back();
    if (s.back() == '.')
        s.pop_back();

    return s;
}
