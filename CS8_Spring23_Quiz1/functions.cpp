//
// Created by Dave Smith on 1/28/23.
//

#include "functions.h"

std::vector<std::vector<std::string>> generateIndex(const std::string& filename)
{
    std::vector<std::string> strings = split(getFileContent(filename), " ");
    std::vector<std::vector<std::string>> index(26, std::vector<std::string>());
    for(auto& s : strings)
    {
        s = tolower(removePunctuation(s));
        if(!contains(index[charToIndex(s[0])], s))
            index[charToIndex(s[0])].push_back(s);
    }
    return index;
}
int charToIndex(char c)
{
    return toupper(c) - 'A';
}
bool openFile(std::ifstream& fin, const std::string& filename)
{
    fin.open(filename);
    return !(fin.fail());
}
std::vector<std::string> getIndex(char c, const std::vector<std::vector<std::string>>& index)
{
    return index[charToIndex(c)];
}

bool contains(const std::vector<std::string>& vector, const std::string& string)
{
    if (!vector.empty() && !string.empty())
        for(const std::string& s : vector)
            if(tolower(s) == tolower(string))
                return true;
    return false;
}
std::string tolower(const std::string& string)
{
    std::string s;
    for(char c : string)
        s.push_back(tolower(c));
    return s;
}


std::string removePunctuation(const std::string& string)
{
    int i = string.size() -1;
    if(!isalpha(string[i]))
        return string.substr(0, i);
    else
        return string;
}


std::string getFileContent(const std::string &filename)
{
    std::ifstream fin;
    std::string s, next;
    if(!openFile(fin, filename))
        exit(28);
    while(getline(fin, next))
        s += next + " ";
    fin.close();
    return s;
}

std::vector<std::string> split(const std::string& string, const std::string& delimiter)
{
    std::vector<std::string> v;
    std::string s = string;
    while(s.size() > 0)
    {
        int idx = s.find(delimiter);
        if(idx != std::string::npos)
        {
            v.push_back(s.substr(0, idx));
            s = s.substr(idx+1);
        }
        else
            break;
    }
    if(!s.empty())
        v.push_back(s);
    return v;
}

