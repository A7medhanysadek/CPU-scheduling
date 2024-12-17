#pragma once
#include "proces.h"
#include <iostream>
#include <vector>
#include <queue>
#include <thread>
#include <chrono>
#include <algorithm>
#include "MyForm3.h"
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
	fcfs()
	{
		currentTime = 0;
		totalWaitTime = 0;
		totalTurnaroundTime = 0;
		totalResponseTime = 0;
		totalProcesses = 0;
	}
	fcfs(vector<process> processes)
	{
		this->processes = processes;
		currentTime = 0;
		totalWaitTime = 0;
		totalTurnaroundTime = 0;
		totalResponseTime = 0;
		totalProcesses = processes.size();
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



