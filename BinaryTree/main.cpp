#include <iostream>
#include "Tree.h"
#include "A.h"

int main() {
    A a;
    Tree<int> t(5);

    for (int i = 1; i <=10; ++i) {
        t.push(i);
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


    return 0;
}

/* sample run
Preorder: 5 1 2 3 4 5 6 7 8 9 10
Postorder: 4 3 2 1 10 9 8 7 6 5 5
Inorder: 1 2 3 4 5 5 6 7 8 9 10
 */
