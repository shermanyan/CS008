//
// Created by Sherman Yan on 3/23/23.
//
#ifndef AUTOCORRECT_ISH_FILEREADER_CPP
#define AUTOCORRECT_ISH_FILEREADER_CPP

#include "FileReader.h"

template<typename T>
std::vector<T> FileReader<T>::getData(const std::string &filename) {
    std::vector<T> data;

    std::ifstream file;
    file.open(filename);

    if (file.fail())
        exit(10);

    T word;

    while (file >> word)
        data.push_back(word);

    file.close();

    return data;
}
#endif