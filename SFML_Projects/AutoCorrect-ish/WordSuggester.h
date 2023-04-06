//
// Created by Sherman Yan on 3/23/23.
//

#ifndef AUTOCORRECT_ISH_WORDSUGGESTER_H
#define AUTOCORRECT_ISH_WORDSUGGESTER_H

#include "FileReader.h"
#include <vector>
#include "Word.h"
#include <SFML/Graphics.hpp>
#include "AppComponent.h"
#include "TextInput.h"
#include "Heap.h"
#include "Position.h"

class WordSuggester{
private:
    std::vector<std::string> words;

    void getData(const std::string& filename = "wordDatabase.txt");
    float getHeuristic(const std::string& str, const std::string& ref);

public:
    WordSuggester();
    WordSuggester(const std::string& fileName);

    void setDataFileName(const std::string& fileName);

    std::vector<std::string> getSuggestion(const std::string& input);

};


#endif //AUTOCORRECT_ISH_WORDSUGGESTER_H
