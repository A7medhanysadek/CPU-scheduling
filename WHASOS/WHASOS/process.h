#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct process
{
    long burstTime;
    long arrivalTime;
    string processID;
    long startTime;
    long endTime;
    long waitTime;
    int lastRemainingBurst;
    int pBarValue = 0;
    int priority;
	process(); // default constructor
    process(string processID, long arrivalTime, long burstTime, long startTime);
    process(string processID, long arrivalTime, long burstTime, long startTime, long priority);
    // default constructor
};

