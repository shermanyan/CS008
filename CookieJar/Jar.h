//
// Created by Sherman Yan on 1/17/23.
//

#ifndef COOKIEJAR_JAR_H
#define COOKIEJAR_JAR_H
#include "stack"
#include "CookieFlavorEnums.h"
#include "iostream"

template <class T>
class Jar: private std::stack<T>{

public:
    using std::stack<T>::size;
    using std::stack<T>::empty;
    void emptyContainer();

    template<class S>
    friend void operator+=(Jar<S>& jar, const S& object);

    template<class S>
    friend std::ostream& operator<<(std::ostream& out, Jar<S>& jar);

    template<class S>
    friend bool operator==(const Jar<S>& jar1, const Jar<S>& jar2);



};
#include "Jar.cpp"


#endif //COOKIEJAR_JAR_H
