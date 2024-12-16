#ifndef QUEUE_H
#define QUEUE_H
#include "process.h"

struct Node {
    process _process;
    Node* next {};
    Node(process p) : _process(p) {}
};

struct LinkedList {
    Node *head {};
    Node *tail {};
    int length = 0;
    string Display_List();
    void insert_end(process p);
    void delete_node(Node *node);
    void delete_end();
    void delete_first();
    int size();
};


#endif //QUEUE_H
