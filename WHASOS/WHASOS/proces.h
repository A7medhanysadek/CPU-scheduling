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
	// comrator for priority queue
	bool operator<(const process& p) const
	{
		if (lastRemainingBurst == p.lastRemainingBurst)
		{
			if (arrivalTime == p.arrivalTime)
			{
				return processID > p.processID;
			}
			return arrivalTime > p.arrivalTime;
		}
		return lastRemainingBurst > p.lastRemainingBurst;
	}
	bool operator>(const process& p) const {
		if (lastRemainingBurst == p.lastRemainingBurst) {
			if (arrivalTime == p.arrivalTime) {
				return processID < p.processID; // Reverse of '<' for processID
			}
			return arrivalTime < p.arrivalTime; // Reverse of '<' for arrivalTime
		}
		return lastRemainingBurst < p.lastRemainingBurst; // Reverse of '<' for lastRemainingBurst
	}

};
// custom comparator for priority;
struct comparePriority
{
	bool operator()(process const& p1, process const& p2)
	{
		if (p1.priority == p2.priority)
		{
			if (p1.arrivalTime == p2.arrivalTime)
			{
				return p1.processID > p2.processID;
			}
			return p1.arrivalTime > p2.arrivalTime;
		}
		return p1.priority < p2.priority;
	}
};

