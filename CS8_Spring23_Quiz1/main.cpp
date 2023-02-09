#include <iostream>
#include "Index.h"
int main()
{
    Index index("key.txt");
    index.addWord("bachus");
    std::cout << index;
    return 0;
}
