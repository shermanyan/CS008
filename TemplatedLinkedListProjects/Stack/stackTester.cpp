//
// Created by Sherman Yan on 2/8/23.
//

#include "Stack.h"

int main(){
    Stack<int> stack;

    for (int i = 1; i <= 10; ++i) {
        stack.push(i);
    }

    printf("stack: ");
    while (!stack.empty()) {
        std::cout << '[' << stack.top() << "] ";
        stack.pop();
    }
    printf("\n");

    for (int i = 0; i < 5 ; ++i) {
        stack.push(i + 1);
    }

    printf("\ncopy stack to stack1\n");

    Stack<int> stack1(stack);

    std::cout << "stack size: " << stack.size() << std::endl;
    std::cout << "stack1 size: " << stack1.size() << std::endl;


    printf("\nadd to stack1\n");
    for (int i = 5; i < 10 ; ++i) {
        stack1.push(i + 1);
    }

    printf("\nstack\n");
    std::cout << "top: " << stack.top() << "\n";
    std::cout << "size: " << stack.size() << std::endl;
    while (!stack.empty()) {
        std::cout << '[' << stack.top() << "] ";
        stack.pop();
    }
    printf("\n\nstack1\n");
    std::cout << "top: " << stack1.top() << "\n";
    std::cout << "size: " << stack1.size() << std::endl;
    while (!stack1.empty()) {
        std::cout << '[' << stack1.top() << "] ";
        stack1.pop();
    }


    printf("\n\nseek test\n");
    //fill stack
    for (int i = 1; i <= 15; ++i) {
        stack.push(i);
    }

    std::cout << "seek 5: " << stack.seek(5) <<std::endl;

    printf("stack: ");
    while (!stack.empty()) {
        std::cout << '[' << stack.top() << "] ";
        stack.pop();
    }
    printf("\n");

}