//
// Created by Sherman Yan on 4/5/23.
//
#ifndef FILETREE_FILENODE_CPP
#define FILETREE_FILENODE_CPP

#include "FileNode.h"

template<typename T>
FileNode<T>::FileNode() {

}

template<typename T>
FileNode<T>::FileNode(T *&data) {

}

template<typename T>
void FileNode<T>::toggleChildrenVisibility() {
    toggleState(ACTIVE);
}

template<typename T>
void FileNode<T>::reposition() const {
    if(!checkStates(ACTIVE) && hasChildren()) {
        Position::center(*children.begin(),data);
        Position::center(*children.begin(),data);
        for (auto & c: children) {
            if(c != children.begin()){
                Position::center(c,std::prev(c));
                Position::bottom(c,std::prev(c));

            }
        }
    }
}


template<typename T>
template<typename S>
std::map<std::string, FileNode<S>*> &FileNode<T>::getChildren() {
    return children;
}

template<typename T>
typename FileNode<T>::iterator FileNode<T>::begin() {
    return children.begin();
}

template<typename T>
typename FileNode<T>::iterator FileNode<T>::end() {
    return children.end();
}

template<typename T>
typename FileNode<T>::iterator FileNode<T>::begin() const {
    return children.begin();
}

template<typename T>
typename FileNode<T>::iterator FileNode<T>::end() const {
    return children.end();
}

template<typename T>
bool FileNode<T>::hasChildren() const {
    return !children.empty();
}

template<typename T>
T &FileNode<T>::getData() {
    return data;
}

template<typename T>
void FileNode<T>::setData(const T &data) {
    this-> data = data;
}

template<typename T>
sf::FloatRect FileNode<T>::getGlobalBounds() const {
    sf::FloatRect bounds;
    bounds.left = data.getPosition.x;
    bounds.top = data.getPosition.y;

    if(hasChildren()){
        bounds.height = (children.end()->getPosition.y + children.end()-> getLocalBounds().height) - bounds.top;
        float childrenRightPos = (children.end()->getPosition.x + children.end()-> getLocalBounds().width);
        float rightPos = data.getLocalBounds().left + data.getLocalBounds().width;
        bounds.width = childrenRightPos > rightPos ? childrenRightPos: rightPos;
        bounds.width -= bounds.left;
    }

    return bounds;

}

template<typename T>
sf::FloatRect FileNode<T>::getLocalBounds() const {
    sf::FloatRect bounds = getGlobalBounds();
    bounds.left = 0;
    bounds.top = 0;
    return bounds;
}

template<typename T>
void FileNode<T>::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    if (MouseEvents::isClick(data))
        toggleChildrenVisibility();
}

template<typename T>
void FileNode<T>::update(const sf::RenderWindow &window) {

}

#endif