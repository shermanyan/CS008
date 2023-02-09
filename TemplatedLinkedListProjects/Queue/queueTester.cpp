//
// Created by Sherman Yan on 2/8/23.
//
#include "Queue.h"
#include <queue>


int main() {
    Queue<int> queue;

    for (int i = 1; i <= 10; ++i) {
        queue.push(i);
    }

    printf("queue: ");
    while (!queue.empty()) {
        std::cout << '[' << queue.front() << "] ";
        queue.pop();
    }
    printf("\n");

    for (int i = 0; i < 5 ; ++i) {
        queue.push(i + 1);
    }

    printf("\ncopy queue to queue1\n");

    Queue<int> queue1(queue);

    std::cout << "queue size: " << queue.size() << std::endl;
    std::cout << "queue1 size: " << queue1.size() << std::endl;


    printf("\nadd to queue1\n");
    for (int i = 5; i < 10 ; ++i) {
        queue1.push(i + 1);
    }

    printf("\nqueue\n");
    std::cout << "top: " << queue.front() << "\n";
    std::cout << "size: " << queue.size() << std::endl;
    while (!queue.empty()) {
        std::cout << '[' << queue.front() << "] ";
        queue.pop();
    }
    printf("\n\nqueue1\n");
    std::cout << "top: " << queue1.front() << "\n";
    std::cout << "size: " << queue1.size() << std::endl;
    while (!queue1.empty()) {
        std::cout << '[' << queue1.front() << "] ";
        queue1.pop();
    }

    printf("\n\nseek test\n");
    //fill queue
    for (int i = 1; i <= 15; ++i) {
        queue.push(i);
    }

    std::cout << "seek 5: " << queue.seek(5) <<std::endl;

    printf("queue: ");
    while (!queue.empty()) {
        std::cout << '[' << queue.front() << "] ";
        queue.pop();
    }
    printf("\n");

    return 0;
}