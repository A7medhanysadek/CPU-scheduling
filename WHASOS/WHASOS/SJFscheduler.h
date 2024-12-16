#pragma once
#include "proces.h"
#include <iostream>
#include <vector>
#include <queue>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
struct sjf
{

	vector<process> processes;
	// readyQueue is a priority queue that sorts the processes based on their remaining burst time, then arrival time, then process ID
	priority_queue<process> readyQueue;
	queue<process> finishedQueue;
	int currentTime;
	int totalWaitTime;
	int totalTurnaroundTime;
	int totalResponseTime;
	int totalProcesses;
	string readyQueueString;
	string finishedQueueString;
	string currentProcessID;
	sjf(vector<process> processes)
	{
		this->processes = processes;
		currentTime = 0;
		totalWaitTime = 0;
		totalTurnaroundTime = 0;
		totalResponseTime = 0;
		totalProcesses = processes.size();
	}
	void run()
	{
		int pointer = 0;
		sort(processes.begin(), processes.end(), [](process a, process b) {
			return a.arrivalTime < b.arrivalTime;
			});
		while (pointer < processes.size() || !readyQueue.empty())
		{
			while (pointer < processes.size() && processes[pointer].arrivalTime <= currentTime)
			{
				readyQueue.push(processes[pointer]);
				pointer++;
			}
			if (!readyQueue.empty())
			{
				process currentProcess = readyQueue.top();
				currentProcessID = currentProcess.processID;
				readyQueueString = printreadyqueue();
				finishedQueueString = printfinishedqueue();
				readyQueue.pop();
				if (currentProcess.startTime == 0)
				{
					currentProcess.startTime = currentTime;
					totalResponseTime += currentProcess.startTime - currentProcess.arrivalTime;
				}
				currentProcess.lastRemainingBurst--;
				currentProcess.pBarValue = 100 - (currentProcess.lastRemainingBurst * 100 / currentProcess.burstTime);
				if (currentProcess.lastRemainingBurst == 0)
				{
					currentProcess.endTime = currentTime + 1;
					currentProcess.waitTime = currentProcess.endTime - currentProcess.arrivalTime - currentProcess.burstTime;
					currentProcess.turnaroundTime = currentProcess.endTime - currentProcess.arrivalTime;
					currentProcess.pBarValue = 100;
					totalWaitTime += currentProcess.waitTime;
					totalTurnaroundTime += currentProcess.turnaroundTime;
					finishedQueue.push(currentProcess);
				}
				else
				{
					readyQueue.push(currentProcess);
				}
				currentTime++;
				this_thread::sleep_for(chrono::milliseconds(50));
			}
		}
		readyQueueString = printreadyqueue();
		finishedQueueString = printfinishedqueue();
	}
	string printreadyqueue()
	{
		string readyQueueString = "";
		priority_queue<process> temp = readyQueue;
		while (!temp.empty())
		{
			readyQueueString += temp.top().processID + " ";
			temp.pop();
		}
		return readyQueueString;
	}
	string printfinishedqueue()
	{
		string finishedQueueString = "";
		queue<process> temp = finishedQueue;
		while (!temp.empty())
		{
			finishedQueueString += temp.front().processID + " ";
			temp.pop();
		}
		return finishedQueueString;
	}

};



