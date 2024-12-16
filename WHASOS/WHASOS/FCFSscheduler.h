#include "process.h"
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct fcfs
{
	vector<process> processes;
	queue<process> readyQueue;
	queue<process> finishedQueue;
	int currentTime;
	int totalWaitTime;
	int totalTurnaroundTime;
	int totalResponseTime;
	int totalProcesses;
	string readyQueueString;
	string finishedQueueString;
	string currentProcessID;
	fcfs(vector<process> processes)
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
		while (pointer < processes.size() || !readyQueue.empty())
		{
			while (pointer < processes.size() && processes[pointer].arrivalTime <= currentTime)
			{
				readyQueue.push(processes[pointer]);
				pointer++;
			}
			if (!readyQueue.empty())
			{
				process currentProcess = readyQueue.front();
				currentProcessID = currentProcess.processID;
				readyQueueString = printreadyqueue();
				finishedQueueString = printfinishedqueue();
				if (currentProcess.startTime != 0)
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
					readyQueue.pop();
				}
				else
				{
					readyQueue.front() = currentProcess;
				}
				currentTime++;
				_sleep(50);
			}
		}
	}
	string printreadyqueue()
	{
		string readyQueueString = "";
		queue<process> temp = readyQueue;
		while (!temp.empty())
		{
			readyQueueString += temp.front().processID + " ";
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



