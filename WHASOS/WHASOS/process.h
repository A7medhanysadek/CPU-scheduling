#include <iostream>
#include <string>
#include <vector>
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
    int pBarValue = 0;
    int priority;
	process(); 
    process(string processID, int arrivalTime, int burstTime, int startTime);
    process(string processID, int arrivalTime, int burstTime, int startTime, int priority);
};

