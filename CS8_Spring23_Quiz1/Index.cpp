//
// Created by Dave Smith on 1/29/23.
//

#include "Index.h"

void Index::addWord(const std::string& word ) {

    std::string s = tolower(removePunctuation(word));
    unsigned int idx = charToIndex(s[0]);
    if(!contains(v[idx],s))
        v[idx].push_back(s);
}

std::ostream& operator<<(std::ostream& outs, const Index& index){
    for (int i = 0; i <= 'Z' - 'A'; ++i) {
        std::cout << char('A' + i) << ": ";
        for (const auto& s:index.v[i])
            std::cout << s << " ";

        std::cout << std::endl;
    }
    return outs;
}

Index::Index(const std::string &filename) {
    v = generateIndex(filename);
}

