#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H
#include "LinkedList.h"
using namespace std;


struct Queue {
    int length;
    LinkedList list;

    void push(process p);
    void pop();
    process front();
    int size();
    bool empty();
    string display();
};

#endif //LINKEDLISTQUEUE_H
