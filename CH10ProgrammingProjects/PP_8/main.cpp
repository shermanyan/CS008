#include <iostream>
#include "functions.h"
int main() {

    BinarySearchTree<int> bst;

    int root = 4;

    bst.push(root);

    for (int i = 0; i < 10 ; ++i) {
        bst.push(i);
    }

    std::list<int> list = generateListFromBST(bst);

    std::cout<< "List: ";

    for (int &i :list) {
        std::cout << i << " ";
    }
    return 0;
}
