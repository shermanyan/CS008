#include <iostream>
#include <list>

int main() {


    std::list<int> l;

    for (int i = 0; i < 10 ; ++i) {
        l.push_back(i);
    }

    for (const int& i : l) {
        std::cout << i << " ";
    }



return 0;
}
