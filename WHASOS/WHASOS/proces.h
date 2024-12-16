#pragma once
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
	int turnaroundTime;
    int pBarValue = 0;
    int priority;
    process()
    {
		processID = "";
		arrivalTime = 0;
		burstTime = 0;
		priority = 0;
		startTime = 0;
		endTime = 0;
		waitTime = 0;
		lastRemainingBurst = burstTime;
    };
	process(string processID, int arrivalTime, int burstTime)
	{
		this->processID = processID;
		this->arrivalTime = arrivalTime;
		this->burstTime = burstTime;
		priority = 0;
		startTime = 0;
		endTime = 0;
		waitTime = 0;
		lastRemainingBurst = burstTime;
	};
	process(string processID, int arrivalTime, int burstTime, int priority)
	{
		this->processID = processID;
		this->arrivalTime = arrivalTime;
		this->burstTime = burstTime;
		this->priority = priority;
		startTime = 0;
		endTime = 0;
		waitTime = 0;
		lastRemainingBurst = burstTime;
	};
};

