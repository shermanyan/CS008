//
// Created by Sherman Yan on 4/5/23.
//

#ifndef FILETREE_FILENODE_H
#define FILETREE_FILENODE_H
#include "States.h"
#include "Position.h"
#include "AppComponent.h"
#include "MouseEvents.h"

template<typename T>
class FileNode: public AppComponent{
private:
    //This is the data represented in the tree
    T data;

    //this is all the child nodes in the tree, a vector would also work just fine
    std::map<std::string, FileNode<T>*> children;

    //this tells the draw function whether to show the node's children
    //this is done by toggling a state on and off
    void toggleChildrenVisibility();

    //this is called in the draw function to reposition the children so they
    //are indented and below the parent
    void reposition() const;
public:
    // this is so I can use the iterator for the children map publicly
    typedef typename std::map<std::string, FileNode*>::iterator iterator;
    FileNode();
    FileNode(T*& file);

    //this draws the node. This is a recursive function to draw all the children nodes as well
    // this will only draw the node's children when it is in the proper state

    //does nothing now
    //returns true if the node has no children, otherwise false

    bool hasChildren() const;
    //getters and setters

    T &getData();
    void setData(const T &data);

    template<class S>
    std::map<std::string, FileNode<S>*>& getChildren();

    //iterators
    iterator begin();
    iterator end();

    iterator begin() const;
    iterator end() const;

    sf::FloatRect getGlobalBounds() const override;

    sf::FloatRect getLocalBounds() const override;

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;

    void update(const sf::RenderWindow &window) override;


};

#include "FileNode.cpp"



#endif //FILETREE_FILENODE_H
