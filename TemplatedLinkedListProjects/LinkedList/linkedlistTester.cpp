//
// Created by Sherman Yan on 11/2/22.
//
#include <iostream>
#include "LinkedList.h"

int main(){

    LinkedList<int> list;

    std::cout << "list " << "size: " << list.size() << std::endl;
    std::cout << "list " <<"empty: " << list.empty() << std::endl;

    for (int i = 0; i < 3; ++i) {
        list.push_back(i);
        std::cout <<list << "\n\n";
    }

    list.push_front(0);
    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    list.remove(0);
    std::cout << "list " <<"size: " << list.size() << " " << list << "\n\n";


    list.insertAfter(11,list.front());
    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    list.insertBefore(11,0);
    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    list.insertBefore(20,11);
    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    list.clear();
    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    for (int i = 0; i < 3; ++i) {
        list.push_back(i);
        std::cout << "list " <<list << "\n\n";
    }
    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    LinkedList<int> list1(list);

    std::cout << "list1 " << "size: " << list1.size() << " " << list1 << "\n\n";
    list1.push_back(1);
    std::cout << "list1 " << "size: " << list1.size() << " " << list1 << "\n\n";

    std::cout << "list " << "size: " << list.size() << " " << list << "\n\n";

    std::cout << "list " << "front: " << list.front() << "\n";

    std::cout << "list " << "back: " << list.back() << "\n\n";



}

