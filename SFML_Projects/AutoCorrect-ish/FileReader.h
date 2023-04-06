//
// Created by Sherman Yan on 3/23/23.
//

#ifndef AUTOCORRECT_ISH_FILEREADER_H
#define AUTOCORRECT_ISH_FILEREADER_H

#include <vector>
#include <fstream>

template<typename T>
class FileReader {
public:
    static std::vector<T> getData(const std::string& filename);
};

#include "FileReader.cpp"

#endif //AUTOCORRECT_ISH_FILEREADER_H
