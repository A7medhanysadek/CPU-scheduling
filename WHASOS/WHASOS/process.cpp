#include "process.h"

process::process() {
	processID = "";
	arrivalTime = 0;
	burstTime = 0;
	startTime = 0;
	endTime = 0;
	waitTime = 0;
	lastRemainingBurst = 0;
	pBarValue = 0;
	priority = 0;
	turnaroundTime = 0;
}
process::process(string processID, int arrivalTime, int burstTime, int startTime, int priority)
{
	this->processID = processID;
	this->arrivalTime = arrivalTime;
	this->burstTime = burstTime;
	this->startTime = startTime;
	this->priority = priority;
	lastRemainingBurst = burstTime;
}
process::process(string processID, int arrivalTime, int burstTime, int startTime)
{
	this->processID = processID;
	this->arrivalTime = arrivalTime;
	this->burstTime = burstTime;
	this->startTime = startTime;
	lastRemainingBurst = burstTime;
}
