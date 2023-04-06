//
// Created by Sherman Yan on 3/23/23.
//

#ifndef AUTOCORRECT_ISH_WORD_H
#define AUTOCORRECT_ISH_WORD_H

#include <SFML/Graphics.hpp>

class Word: public std::string {
private:
    float priority = 0;
public:
    Word();

    void setPriority(float priority);
    float getPriority() const;

    friend bool operator!=(const Word& lhs, const Word& rhs);
    friend bool operator==(const Word& lhs, const Word& rhs);
    friend bool operator>(const Word& lhs, const Word& rhs);
    friend bool operator<(const Word& lhs, const Word& rhs);
    friend bool operator>=(const Word& lhs, const Word& rhs);
    friend bool operator<=(const Word& lhs, const Word& rhs);


};

#endif //AUTOCORRECT_ISH_WORD_H
