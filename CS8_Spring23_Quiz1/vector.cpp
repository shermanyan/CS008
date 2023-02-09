//
// Created by Dave R. Smith on 9/28/22.
//

#ifndef TEMPLATE_EXAMPLE_BOOTLEGVECTOR_CPP
#define TEMPLATE_EXAMPLE_BOOTLEGVECTOR_CPP

#include "vector.h"
template<class T>
vector<T>::vector(): vector(1, 0){
}

template<class T>
vector<T>::vector(int size, const T& def) : _size(size), numUsed(size) {
    ptr = createVector(size);
    fillVector(def);
}

template<class T>
vector<T>::vector(const vector<T>& vector){
    std::cout << "Copy Constructor called.\n";
    *this = vector;
}

template<class T>
vector<T>::~vector<T>(){
    std::cout << "Destructor called.\n";
    delete[] ptr;
    ptr = nullptr;
}

template<class T>
void vector<T>::push_back(const T& value) {
    if (numUsed == _size)
        resize();
    *(ptr + numUsed++) = value;
}

template<class T>
void vector<T>::fillVector(const T& value){
    for(int i = 0 ; i<_size ;i++){
        *(ptr + i) = value;
    }
    numUsed = _size;
}

template<class T>
void vector<T>::resize() {
    T* temp = new T[_size *2];
    copy(temp);
    delete[] ptr;
    ptr = temp;
    _size *= 2;
}

template<class T>
T* vector<T>::createVector(int size) {
    T *p = new T[size];
    return p;
}

template<class T>
void vector<T>::copy(T *&temp) {
    for (int i = 0; i < _size; i++)
        *(temp + i) = *(ptr + i);
}

template<class T>
int vector<T>::length()const {
    return numUsed;
}

template<class T>
T& vector<T>::operator[](unsigned int index){

   return *(ptr + index);
}

template<class T>
const T& vector<T>::operator[](unsigned int index)const{

    return *(ptr + index);
}

template <class T>
vector<T> operator+(const vector<T>& lhs, const vector<T>& rhs){
    vector<T> v;
    for (int i = 0; i < lhs.length(); ++i)
    {
        v.push_back(lhs[i]);
    }
    for (int i = 0; i < rhs.length(); ++i)
    {
        v.push_back(rhs[i]);
    }
    return v;
}

template<class T>
vector<T>& vector<T>::operator=(const vector<T>& vector){

    std::cout << "Assignment operator called.\n";
    if(&vector == this)
        return *this;

    this->~vector();

    _size = vector.length(), numUsed = 0;
    ptr = new T[_size];
    for (int i = 0; i < vector.length(); ++i) {
        push_back(vector[i]);
    }
    return *this;

}

template <class S>
bool operator==(const vector<S>& lhs, const vector<S>& rhs){

    if(lhs.size != rhs.size)
        return false;

    for (int i = 0; i<lhs.size; i++){
        if(rhs[i] != lhs[i])
            return false;
    }
    return true;
}

template<class T>
int vector<T>::size() const {
    return _size;
}


#endif //TEMPLATE_EXAMPLE_BOOTLEGVECTOR_CPP


