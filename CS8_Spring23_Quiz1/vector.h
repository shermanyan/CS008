//
// Created by Sherman Yan on 10/12/22.
//

#ifndef TEMPLATE_EXAMPLE_BOOTLEGVECTOR_H
#define TEMPLATE_EXAMPLE_BOOTLEGVECTOR_H
#include <iostream>

template <class T>
class vector {
private:
    T *ptr = nullptr;
    int _size, numUsed;
public:
    int size() const;

private:

    void resize();
    T *createVector(int size);
    void copy(T *&temp);
    void fillVector(const T& value);

public:

    vector();
    vector(int size, const T& def);
    vector(const vector<T>& vector);
    ~vector();

    void push_back(const T& value);

    int length() const;

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    template<class S>
    friend vector<S> operator+(const vector<S>& lhs, const vector<S>& rhs);

    template<class S>
    friend bool operator==(const vector<S>& lhs, const vector<S>& rhs);


//    void operator=(const vector<T>& vector);

    vector& operator=(const vector<T>& vector);


    };

#include "vector.cpp"

#endif //TEMPLATE_EXAMPLE_BOOTLEGVECTOR_H
