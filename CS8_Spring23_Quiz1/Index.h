//
// Created by Dave Smith on 1/29/23.
//

#ifndef CS8_SPRING23_QUIZ1_INDEX_H
#define CS8_SPRING23_QUIZ1_INDEX_H
#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include <fstream>

class Index
{
private:
    std::vector<std::vector<std::string>> v;
public:
    Index(const std::string& filename);
    void addWord(const std::string& word);
    friend std::ostream& operator<<(std::ostream& outs, const Index& index);
};


#endif //CS8_SPRING23_QUIZ1_INDEX_H
