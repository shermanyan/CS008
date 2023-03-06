//
// Created by Sherman Yan on 2/27/23.
//

#include "Quiz.h"

int adjacentLetters(const std::string& input) {

    std::string l;
    std::stack<char> s;

    for (char c :input) {
        if (!s.empty() && c == s.top()){
            s.pop();
            l.pop_back();
            l.push_back('2');
        }
        else {
            s.push(c);
            l.push_back('1');
        }
    }

    return std::stoi(l);
}

