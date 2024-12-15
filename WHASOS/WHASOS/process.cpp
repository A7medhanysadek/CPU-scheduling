#include "process.h"

process::process() {}; // default constructor

process::process(string processID, long arrivalTime, long burstTime, long startTime) {
    this->processID = processID;
    this->arrivalTime = arrivalTime;
    this->burstTime = burstTime;
    this->startTime = startTime;
    lastRemainingBurst = (int)burstTime;
}
process::process(string processID, long arrivalTime, long burstTime, long startTime, long priority) {
	this->processID = processID;
	this->arrivalTime = arrivalTime;
	this->burstTime = burstTime;
	this->startTime = startTime;
	this->priority = priority;
	lastRemainingBurst = (int)burstTime;
}
