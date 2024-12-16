#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

void LinkedList::Display_List() {
    for (Node *cur = head; cur; cur = cur->next) {
        cout << cur->_process.processID << " ";
    }
    cout << endl;
}

void LinkedList::insert_end(process p) {
    Node* item = new Node(p);
    if(head == nullptr) {
        head = tail = item;
    } else {
        tail->next = item;
        tail = item;
    }
    length++;
}

void LinkedList::delete_node(Node* node) {
    --length;
    delete node;
}

void LinkedList::delete_end() {
    if(length <= 1) {
        delete_first();
        return;
    }

    int cnt = 1;
    Node *prev = nullptr;
    for (Node *cur = head; cur; cur = cur->next , cnt++) {
        if(cnt == length - 1) {
            prev = cur;
            break;
        }
    }
    Node *cur = tail;
    delete_node(tail);
    tail = prev;
    tail->next = nullptr;
}

void LinkedList::delete_first() {
    if(head == nullptr) return;
    Node* cur = head;
    head = head->next;
    delete_node(cur);
    if(!head) tail = nullptr;
}

int LinkedList::size() {
    return length;
}



