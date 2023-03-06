//
// Created by Sherman Yan on 2/27/23.
//

#include <iostream>
#include "Quiz.h"
int main() {

    std::string a = "hhelloooooo", b = "World",c = "Poppy";

    std::cout << a << " -> " <<  adjacentLetters(a) << std::endl;
    std::cout << b << " -> " <<  adjacentLetters(b) << std::endl;
    std::cout << c << " -> " <<  adjacentLetters(c) << std::endl;

    return 0;

}

/*
Sample Run

Hello -> 1121
World -> 11111
Poppy -> 1121

*/