#include <iostream>
#include "Heap.h"
int main() {

    Heap<int> heap;

    srand(time(0));
    for (int i = 0; i <10 ; ++i) {
        heap.push(i * (rand()%15));
    }

    std::vector<int> v = heap.getVector();

    std::cout << "Heap check: ";

    for(auto i: v)
        std::cout << i << " ";

    std::cout << "-> " <<(std::is_heap(v.begin(),v.end()) ? "valid": "invalid") << std::endl;

    std::cout << "Heap output: ";

    while(heap.size()) {
        std::cout  << heap.top() << " ";
        heap.pop();
    }
    return 0;
}
