//
// Created by Sherman Yan on 3/23/23.
//

#include "WordSuggester.h"

WordSuggester::WordSuggester(){
    getData();
}

WordSuggester::WordSuggester(const std::string &fileName) {
    getData(fileName);
}

void WordSuggester::getData(const std::string &filename) {
    words.clear();
    std::vector<std::string> data = FileReader<std::string>::getData(filename);

    for(const auto &s: data)
        words.push_back(s);
}

float WordSuggester::getHeuristic(const std::string& str, const std::string& ref) {
    float score = 0.0f;

    unsigned long minLength = std::min(str.length(),ref.length());

    for (int i = 0 ; i< minLength; i++) {
        if (tolower(str[i]) == tolower(ref[i]))
            score ++ ;
    }
    return score;
}

std::vector<std::string> WordSuggester::getSuggestion(const std::string &input) {

    Heap<Word> heap;

    for (const auto& w:words) {
        float priority = getHeuristic(w, input);
        if(priority > 0.f) {
            Word word;
            word += w;
            word.setPriority(getHeuristic(w, input));
            heap.push(word);
        }
    }
    std::vector<std::string> out;

    while (!heap.empty() && out.size() < 10){
        out.push_back(heap.front());
        heap.pop();
    }

    return out;
}

void WordSuggester::setDataFileName(const std::string &fileName) {
    getData(fileName);
}
