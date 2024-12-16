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

process Queue::front() { // return process
    return list.head->_process;
}

string Queue::display() {
    return list.Display_List();
}


int :: Queue:: size() {
    return list.size();
}




