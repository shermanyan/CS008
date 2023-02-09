//
// Created by Sherman Yan on 1/17/23.
//

#ifndef COOKIEJAR_JAR_CPP
#define COOKIEJAR_JAR_CPP
#include "Jar.h"

template<class S>
void operator+=(Jar<S>& jar, const S& object){
    jar.push(object);
}

template<class S>
std::ostream& operator<<(std::ostream& out, Jar<S>& jar){
    if(!jar.empty()) {
        out << jar.top();
        jar.pop();
    } else{
        out << "empty";
    }
    return out;
}

template<class S>
bool operator==(const Jar<S>& jar1, const Jar<S>& jar2){
    return jar1.container == jar2.container;
}


template<class T>
void Jar<T>::emptyContainer() {
    if (!this->empty()) {
        this->pop();
        emptyContainer();
    }
}


#endif