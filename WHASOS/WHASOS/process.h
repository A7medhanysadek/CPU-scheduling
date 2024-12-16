#include <iostream>
using namespace std;

struct process
{
    int burstTime;
    int arrivalTime;
    string processID;
    int startTime;
    int endTime;
    int waitTime;
    int lastRemainingBurst;
	int turnaroundTime;
    int pBarValue = 0;
    int priority;
	process(); 
    process(string processID, int arrivalTime, int burstTime, int startTime);
    process(string processID, int arrivalTime, int burstTime, int startTime, int priority);
};

