#pragma once
#include "FCFSscheduler.h"
#include "proces.h"
#include <vector>
#include <map>
#include <string>
#include <Thread>

namespace WHASOS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		static vector<process> *vv;
		MyForm1(String^ st,vector<process> v)
		{
			InitializeComponent();
			this->textBox2->Text = st;
			vv = new vector<process>(v);
			this->timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}
		static int pointer = 0;
		void run()
		{
			fcfs f(*vv);
			if (pointer < f.processes.size() || !f.readyQueue.empty())
			{
				while (pointer < f.processes.size() && f.processes[pointer].arrivalTime <= f.currentTime)
				{
					f.readyQueue.push(f.processes[pointer]);
					pointer++;
				}
				if (!f.readyQueue.empty())
				{
					process currentProcess = f.readyQueue.front();
					f.currentProcessID = currentProcess.processID;
					f.readyQueueString = f.printreadyqueue();
					f.finishedQueueString = f.printfinishedqueue();
					if (currentProcess.startTime == 0)
					{
						currentProcess.startTime = f.currentTime;
						f.totalResponseTime += currentProcess.startTime - currentProcess.arrivalTime;
					}
					currentProcess.lastRemainingBurst--;
					currentProcess.pBarValue = 100 - (currentProcess.lastRemainingBurst * 100 / currentProcess.burstTime);
					if (currentProcess.processID == "P1")
					{
						this->label18->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar1->Value = currentProcess.pBarValue;

					}
					else if (currentProcess.processID == "P2")
					{
						this->label19->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar2->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P3")
					{
						this->label20->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar3->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P4")
					{
						this->label21->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar4->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P5")
					{
						this->label22->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar5->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P6")
					{
						this->label23->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar6->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P7")
					{
						this->label24->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar7->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P8")
					{
						this->label25->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar8->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P9")
					{
						this->label26->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar9->Value = currentProcess.pBarValue;
					}
					else if (currentProcess.processID == "P10")
					{
						this->label27->Text = currentProcess.lastRemainingBurst.ToString();
						this->progressBar10->Value = currentProcess.pBarValue;
					}
					if (currentProcess.lastRemainingBurst == 0)
					{
						currentProcess.endTime = f.currentTime + 1;
						currentProcess.waitTime = currentProcess.endTime - currentProcess.arrivalTime - currentProcess.burstTime;
						currentProcess.turnaroundTime = currentProcess.endTime - currentProcess.arrivalTime;
						currentProcess.pBarValue = 100;
						f.totalWaitTime += currentProcess.waitTime;
						f.totalTurnaroundTime += currentProcess.turnaroundTime;
						f.finishedQueue.push(currentProcess);
						f.readyQueue.pop();
					}
					else
					{
						f.readyQueue.front() = currentProcess;
					}
					f.currentTime++;
					this_thread::sleep_for(chrono::milliseconds(50));
				}

			}
			else
			{
				this->timer1->Stop();
			}
			f.readyQueueString = f.printreadyqueue();
			f.finishedQueueString = f.printfinishedqueue();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::ProgressBar^ progressBar6;
	private: System::Windows::Forms::ProgressBar^ progressBar7;
	private: System::Windows::Forms::ProgressBar^ progressBar8;
	private: System::Windows::Forms::ProgressBar^ progressBar9;
	private: System::Windows::Forms::ProgressBar^ progressBar10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	public: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
public: System::Windows::Forms::Label^ label41;
public: System::Windows::Forms::Label^ label42;
public: System::Windows::Forms::ProgressBar^ progressBar11;
	private: System::Windows::Forms::Timer^ timer1;
	public:
	private: System::ComponentModel::IContainer^ components;

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar10 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->progressBar11 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 785);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(407, 104);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label1->Location = System::Drawing::Point(151, 742);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ready Queue";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(746, 134);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(248, 23);
			this->progressBar1->TabIndex = 2;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm1::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(746, 177);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(248, 23);
			this->progressBar2->TabIndex = 3;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(746, 217);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(248, 23);
			this->progressBar3->TabIndex = 4;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(746, 256);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(248, 23);
			this->progressBar4->TabIndex = 5;
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(746, 296);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(248, 23);
			this->progressBar5->TabIndex = 6;
			// 
			// progressBar6
			// 
			this->progressBar6->Location = System::Drawing::Point(746, 337);
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(248, 25);
			this->progressBar6->TabIndex = 7;
			// 
			// progressBar7
			// 
			this->progressBar7->Location = System::Drawing::Point(746, 386);
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(248, 23);
			this->progressBar7->TabIndex = 8;
			// 
			// progressBar8
			// 
			this->progressBar8->Location = System::Drawing::Point(746, 432);
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(248, 23);
			this->progressBar8->TabIndex = 9;
			// 
			// progressBar9
			// 
			this->progressBar9->Location = System::Drawing::Point(746, 479);
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(248, 23);
			this->progressBar9->TabIndex = 10;
			// 
			// progressBar10
			// 
			this->progressBar10->Location = System::Drawing::Point(746, 520);
			this->progressBar10->Name = L"progressBar10";
			this->progressBar10->Size = System::Drawing::Size(248, 23);
			this->progressBar10->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label2->Location = System::Drawing::Point(610, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 30);
			this->label2->TabIndex = 12;
			this->label2->Text = L"P1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label3->Location = System::Drawing::Point(610, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 30);
			this->label3->TabIndex = 13;
			this->label3->Text = L"P2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label4->Location = System::Drawing::Point(610, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 30);
			this->label4->TabIndex = 14;
			this->label4->Text = L"P3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label5->Location = System::Drawing::Point(610, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 30);
			this->label5->TabIndex = 15;
			this->label5->Text = L"P4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label6->Location = System::Drawing::Point(610, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 30);
			this->label6->TabIndex = 16;
			this->label6->Text = L"P5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label7->Location = System::Drawing::Point(610, 332);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 30);
			this->label7->TabIndex = 17;
			this->label7->Text = L"P6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label8->Location = System::Drawing::Point(610, 379);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 30);
			this->label8->TabIndex = 18;
			this->label8->Text = L"P7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label9->Location = System::Drawing::Point(610, 425);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 30);
			this->label9->TabIndex = 19;
			this->label9->Text = L"P8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label10->Location = System::Drawing::Point(610, 472);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 30);
			this->label10->TabIndex = 20;
			this->label10->Text = L"P9";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm1::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label11->Location = System::Drawing::Point(610, 513);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 30);
			this->label11->TabIndex = 21;
			this->label11->Text = L"P10";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(27, 27);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 17);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Algorithm :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(30, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 17);
			this->label13->TabIndex = 23;
			this->label13->Text = L"CPU :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 24);
			this->textBox2->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 59);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 24);
			this->textBox3->TabIndex = 25;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label14->Location = System::Drawing::Point(606, 74);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(121, 30);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Processes";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label15->Location = System::Drawing::Point(1057, 74);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(258, 30);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Remaining Burst Time";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label16->Location = System::Drawing::Point(804, 74);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(125, 30);
			this->label16->TabIndex = 28;
			this->label16->Text = L"Stauts bar";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label17->Location = System::Drawing::Point(1361, 74);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(160, 30);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Waiting Time";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1153, 140);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 30;
			this->label18->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1153, 182);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 17);
			this->label19->TabIndex = 31;
			this->label19->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1153, 222);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 17);
			this->label20->TabIndex = 32;
			this->label20->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1153, 261);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 17);
			this->label21->TabIndex = 33;
			this->label21->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1153, 301);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(16, 17);
			this->label22->TabIndex = 34;
			this->label22->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(1153, 337);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(16, 17);
			this->label23->TabIndex = 35;
			this->label23->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(1153, 386);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(16, 17);
			this->label24->TabIndex = 36;
			this->label24->Text = L"0";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1153, 432);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(16, 17);
			this->label25->TabIndex = 37;
			this->label25->Text = L"0";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(1153, 479);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(16, 17);
			this->label26->TabIndex = 38;
			this->label26->Text = L"0";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(1153, 520);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(16, 17);
			this->label27->TabIndex = 39;
			this->label27->Text = L"0";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm1::label27_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(1421, 139);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(16, 17);
			this->label28->TabIndex = 40;
			this->label28->Text = L"0";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(1421, 182);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(16, 17);
			this->label29->TabIndex = 41;
			this->label29->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(1421, 222);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(16, 17);
			this->label30->TabIndex = 42;
			this->label30->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(1421, 261);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(16, 17);
			this->label31->TabIndex = 43;
			this->label31->Text = L"0";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(1421, 302);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(16, 17);
			this->label32->TabIndex = 44;
			this->label32->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(1421, 344);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(16, 17);
			this->label33->TabIndex = 45;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(1421, 386);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(16, 17);
			this->label34->TabIndex = 46;
			this->label34->Text = L"0";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(1421, 437);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(16, 17);
			this->label35->TabIndex = 47;
			this->label35->Text = L"0";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(1421, 479);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(16, 17);
			this->label36->TabIndex = 48;
			this->label36->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(1421, 525);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(16, 17);
			this->label37->TabIndex = 49;
			this->label37->Text = L"0";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label38->Location = System::Drawing::Point(39, 183);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(266, 30);
			this->label38->TabIndex = 50;
			this->label38->Text = L"Average Waiting Time:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label39->Location = System::Drawing::Point(36, 261);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(312, 30);
			this->label39->TabIndex = 51;
			this->label39->Text = L"Average Turnaround Time:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label40->Location = System::Drawing::Point(39, 344);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(247, 30);
			this->label40->TabIndex = 52;
			this->label40->Text = L"Total Execution Time";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(355, 189);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 24);
			this->textBox4->TabIndex = 53;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(355, 266);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 24);
			this->textBox5->TabIndex = 54;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(355, 349);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 24);
			this->textBox6->TabIndex = 55;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(72, 463);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(50, 17);
			this->label41->TabIndex = 56;
			this->label41->Text = L"label41";
			this->label41->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(178, 437);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(50, 17);
			this->label42->TabIndex = 57;
			this->label42->Text = L"label42";
			this->label42->Visible = false;
			// 
			// progressBar11
			// 
			this->progressBar11->Location = System::Drawing::Point(167, 498);
			this->progressBar11->Name = L"progressBar11";
			this->progressBar11->Size = System::Drawing::Size(88, 23);
			this->progressBar11->TabIndex = 58;
			this->progressBar11->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1585, 953);
			this->Controls->Add(this->progressBar11);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressBar10);
			this->Controls->Add(this->progressBar9);
			this->Controls->Add(this->progressBar8);
			this->Controls->Add(this->progressBar7);
			this->Controls->Add(this->progressBar6);
			this->Controls->Add(this->progressBar5);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	run();
}
};
}
