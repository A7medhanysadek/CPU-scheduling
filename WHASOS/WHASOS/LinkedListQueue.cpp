#include <bits/stdc++.h>
#include "LINKEDLISTQUEUE.h"
#include "LinkedList.h"
using namespace std;


void ::Queue::push(process p) {
    list.insert_end(p);
}

void :: Queue::pop() {
    list.delete_first();
}

bool ::Queue::empty() {
    return list.size() == 0;
}

string Queue::front() {
    return list.head->_process.processID;
}


void ::Queue::display() {
    list.Display_List();
}

int :: Queue:: size() {
    return list.size();
}




