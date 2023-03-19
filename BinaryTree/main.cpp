#include <iostream>
#include "Tree.h"
#include "A.h"

int main() {
    A a;
    int b[10] = {1,2,6,5,3,9,0,4,7,0};
    Tree<int> t(8);

    for (int i = 1; i <10; ++i) {
        t.push(b[i]);
    }

    std::cout << "Preorder: ";
    t.preorder();
    std::cout<<std::endl;

    std::cout << "Postorder: ";
    t.postorder();
    std::cout<<std::endl;

    std::cout << "Inorder: ";
    t.inorder(&A::print, a);
    std::cout<<std::endl;

    std::cout << "Breadth First: ";
    t.breadthFirst(&A::print, a);
    std::cout<<std::endl;

    t.printTree();



    return 0;
}

/* sample run&
Preorder: 8 2 0 0 6 5 3 4 7 9
Postorder: 0 0 4 3 5 7 6 2 9 8
Inorder: 0 0 2 3 4 5 6 7 8 9
Breadth First: 8 2 9 0 6 0 5 7 3 4
  9
8
        7
     6
        5
              4
           3
  2
        0
     0
 */
