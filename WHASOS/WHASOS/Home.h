#pragma once
#include "MyForm3.h"
#include "FCFSscheduler.h"
#include <vector>
#include "proces.h"
extern "C" int AddNumbers(int a, int b);
extern "C" int gcd(long long a, long long b);

namespace WHASOS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		static System :: String^ approach;
		
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ sim_btn;
	private: System::Windows::Forms::ComboBox^ comboBoxp1;

	private: System::Windows::Forms::ComboBox^ comboBoxP2;
	private: System::Windows::Forms::ComboBox^ comboBoxp3;
	private: System::Windows::Forms::ComboBox^ comboBoxp4;
	private: System::Windows::Forms::ComboBox^ comboBoxp5;
	private: System::Windows::Forms::ComboBox^ comboBoxp6;
	private: System::Windows::Forms::ComboBox^ comboBoxp7;
	private: System::Windows::Forms::ComboBox^ comboBoxp8;
	private: System::Windows::Forms::ComboBox^ comboBoxp9;
	private: System::Windows::Forms::ComboBox^ comboBoxp10;









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::Label^ lbla;

	private: System::Windows::Forms::Label^ lblp1;

	private: System::Windows::Forms::Label^ lblp2;
	private: System::Windows::Forms::Label^ lblp3;
	private: System::Windows::Forms::Label^ lblp4;
	private: System::Windows::Forms::Label^ lblp5;
	private: System::Windows::Forms::Label^ lblp6;
	private: System::Windows::Forms::Label^ lblp7;
	private: System::Windows::Forms::Label^ lblp8;
	private: System::Windows::Forms::Label^ lblp9;
	private: System::Windows::Forms::Label^ lblp10;
	private: System::Windows::Forms::TextBox^ textBoxAp1;











	private: System::Windows::Forms::TextBox^ textBoxAp2;
	private: System::Windows::Forms::TextBox^ textBoxAp3;
	private: System::Windows::Forms::TextBox^ textBoxAp4;
	private: System::Windows::Forms::TextBox^ textBoxAp5;
	private: System::Windows::Forms::TextBox^ textBoxAp6;
	private: System::Windows::Forms::TextBox^ textBoxAp7;
	private: System::Windows::Forms::TextBox^ textBoxAp8;
	private: System::Windows::Forms::TextBox^ textBoxAp9;
	private: System::Windows::Forms::TextBox^ textBoxAp10;
	private: System::Windows::Forms::Label^ lblt;










	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxBp1;

	private: System::Windows::Forms::TextBox^ textBoxBp2;
	private: System::Windows::Forms::TextBox^ textBoxBp3;
	private: System::Windows::Forms::TextBox^ textBoxBp4;
	private: System::Windows::Forms::TextBox^ textBoxBp5;
	private: System::Windows::Forms::TextBox^ textBoxBp6;
	private: System::Windows::Forms::TextBox^ textBoxBp7;
	private: System::Windows::Forms::TextBox^ textBoxBp8;
	private: System::Windows::Forms::TextBox^ textBoxBp9;
	private: System::Windows::Forms::TextBox^ textBoxBp10;
private: System::Windows::Forms::Label^ lblb;











private: System::Windows::Forms::TextBox^ textBoxI1p1;

	private: System::Windows::Forms::TextBox^ textBoxI1p2;
	private: System::Windows::Forms::TextBox^ textBoxI1p3;
	private: System::Windows::Forms::TextBox^ textBoxI1p4;
	private: System::Windows::Forms::TextBox^ textBoxI1p5;
private: System::Windows::Forms::TextBox^ textBoxI1p6;
private: System::Windows::Forms::TextBox^ textBoxI1p7;
private: System::Windows::Forms::TextBox^ textBoxI1p8;
private: System::Windows::Forms::TextBox^ textBoxI1p9;
private: System::Windows::Forms::TextBox^ textBoxI1p10;
private: System::Windows::Forms::TextBox^ textBoxI2p1;










	private: System::Windows::Forms::TextBox^ textBoxI2p2;
private: System::Windows::Forms::TextBox^ textBoxI2p3;
private: System::Windows::Forms::TextBox^ textBoxI2p4;
private: System::Windows::Forms::TextBox^ textBoxI2p5;
private: System::Windows::Forms::TextBox^ textBoxI2p6;
private: System::Windows::Forms::TextBox^ textBoxI2p7;
private: System::Windows::Forms::TextBox^ textBoxI2p8;
private: System::Windows::Forms::TextBox^ textBoxI2p9;
private: System::Windows::Forms::TextBox^ textBoxI2p10;
private: System::Windows::Forms::Label^ lbli1;
private: System::Windows::Forms::Label^ lbli2;











private: System::Windows::Forms::Button^ buttonp1;

private: System::Windows::Forms::Button^ buttonp2;
private: System::Windows::Forms::Button^ buttonp3;
private: System::Windows::Forms::Button^ buttonp4;
private: System::Windows::Forms::Button^ buttonp5;
private: System::Windows::Forms::Button^ buttonp6;
private: System::Windows::Forms::Button^ buttonp7;
private: System::Windows::Forms::Button^ buttonp8;
private: System::Windows::Forms::Button^ buttonp9;
private: System::Windows::Forms::Label^ lblp;

private: System::Windows::Forms::TextBox^ textBoxp1;
private: System::Windows::Forms::TextBox^ textBoxp2;
private: System::Windows::Forms::TextBox^ textBoxp3;
private: System::Windows::Forms::TextBox^ textBoxp4;
private: System::Windows::Forms::TextBox^ textBoxp5;
private: System::Windows::Forms::TextBox^ textBoxp6;
private: System::Windows::Forms::TextBox^ textBoxp7;
private: System::Windows::Forms::TextBox^ textBoxp8;
private: System::Windows::Forms::TextBox^ textBoxp9;
private: System::Windows::Forms::TextBox^ textBoxp10;
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























	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->sim_btn = (gcnew System::Windows::Forms::Button());
			this->comboBoxp1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxP2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxp10 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->lbla = (gcnew System::Windows::Forms::Label());
			this->lblp1 = (gcnew System::Windows::Forms::Label());
			this->lblp2 = (gcnew System::Windows::Forms::Label());
			this->lblp3 = (gcnew System::Windows::Forms::Label());
			this->lblp4 = (gcnew System::Windows::Forms::Label());
			this->lblp5 = (gcnew System::Windows::Forms::Label());
			this->lblp6 = (gcnew System::Windows::Forms::Label());
			this->lblp7 = (gcnew System::Windows::Forms::Label());
			this->lblp8 = (gcnew System::Windows::Forms::Label());
			this->lblp9 = (gcnew System::Windows::Forms::Label());
			this->lblp10 = (gcnew System::Windows::Forms::Label());
			this->textBoxAp1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAp10 = (gcnew System::Windows::Forms::TextBox());
			this->lblt = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxBp1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBp10 = (gcnew System::Windows::Forms::TextBox());
			this->lblb = (gcnew System::Windows::Forms::Label());
			this->textBoxI1p1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI1p10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2p10 = (gcnew System::Windows::Forms::TextBox());
			this->lbli1 = (gcnew System::Windows::Forms::Label());
			this->lbli2 = (gcnew System::Windows::Forms::Label());
			this->buttonp1 = (gcnew System::Windows::Forms::Button());
			this->buttonp2 = (gcnew System::Windows::Forms::Button());
			this->buttonp3 = (gcnew System::Windows::Forms::Button());
			this->buttonp4 = (gcnew System::Windows::Forms::Button());
			this->buttonp5 = (gcnew System::Windows::Forms::Button());
			this->buttonp6 = (gcnew System::Windows::Forms::Button());
			this->buttonp7 = (gcnew System::Windows::Forms::Button());
			this->buttonp8 = (gcnew System::Windows::Forms::Button());
			this->buttonp9 = (gcnew System::Windows::Forms::Button());
			this->lblp = (gcnew System::Windows::Forms::Label());
			this->textBoxp1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp9 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp10 = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
			// 
			// sim_btn
			// 
			this->sim_btn->Location = System::Drawing::Point(1612, 897);
			this->sim_btn->Name = L"sim_btn";
			this->sim_btn->Size = System::Drawing::Size(116, 48);
			this->sim_btn->TabIndex = 0;
			this->sim_btn->Text = L"Start simulation";
			this->sim_btn->UseVisualStyleBackColor = true;
			this->sim_btn->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// comboBoxp1
			// 
			this->comboBoxp1->FormattingEnabled = true;
			this->comboBoxp1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp1->Location = System::Drawing::Point(1222, 142);
			this->comboBoxp1->Name = L"comboBoxp1";
			this->comboBoxp1->Size = System::Drawing::Size(121, 24);
			this->comboBoxp1->TabIndex = 1;
			this->comboBoxp1->Visible = false;
			// 
			// comboBoxP2
			// 
			this->comboBoxP2->FormattingEnabled = true;
			this->comboBoxP2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxP2->Location = System::Drawing::Point(1222, 192);
			this->comboBoxP2->Name = L"comboBoxP2";
			this->comboBoxP2->Size = System::Drawing::Size(121, 24);
			this->comboBoxP2->TabIndex = 2;
			this->comboBoxP2->Visible = false;
			// 
			// comboBoxp3
			// 
			this->comboBoxp3->FormattingEnabled = true;
			this->comboBoxp3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp3->Location = System::Drawing::Point(1222, 243);
			this->comboBoxp3->Name = L"comboBoxp3";
			this->comboBoxp3->Size = System::Drawing::Size(121, 24);
			this->comboBoxp3->TabIndex = 3;
			this->comboBoxp3->Visible = false;
			// 
			// comboBoxp4
			// 
			this->comboBoxp4->FormattingEnabled = true;
			this->comboBoxp4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp4->Location = System::Drawing::Point(1222, 291);
			this->comboBoxp4->Name = L"comboBoxp4";
			this->comboBoxp4->Size = System::Drawing::Size(121, 24);
			this->comboBoxp4->TabIndex = 4;
			this->comboBoxp4->Visible = false;
			// 
			// comboBoxp5
			// 
			this->comboBoxp5->FormattingEnabled = true;
			this->comboBoxp5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp5->Location = System::Drawing::Point(1222, 334);
			this->comboBoxp5->Name = L"comboBoxp5";
			this->comboBoxp5->Size = System::Drawing::Size(121, 24);
			this->comboBoxp5->TabIndex = 5;
			this->comboBoxp5->Visible = false;
			// 
			// comboBoxp6
			// 
			this->comboBoxp6->FormattingEnabled = true;
			this->comboBoxp6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp6->Location = System::Drawing::Point(1222, 378);
			this->comboBoxp6->Name = L"comboBoxp6";
			this->comboBoxp6->Size = System::Drawing::Size(121, 24);
			this->comboBoxp6->TabIndex = 6;
			this->comboBoxp6->Visible = false;
			// 
			// comboBoxp7
			// 
			this->comboBoxp7->FormattingEnabled = true;
			this->comboBoxp7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp7->Location = System::Drawing::Point(1222, 420);
			this->comboBoxp7->Name = L"comboBoxp7";
			this->comboBoxp7->Size = System::Drawing::Size(121, 24);
			this->comboBoxp7->TabIndex = 7;
			this->comboBoxp7->Visible = false;
			// 
			// comboBoxp8
			// 
			this->comboBoxp8->FormattingEnabled = true;
			this->comboBoxp8->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp8->Location = System::Drawing::Point(1222, 462);
			this->comboBoxp8->Name = L"comboBoxp8";
			this->comboBoxp8->Size = System::Drawing::Size(121, 24);
			this->comboBoxp8->TabIndex = 8;
			this->comboBoxp8->Visible = false;
			// 
			// comboBoxp9
			// 
			this->comboBoxp9->FormattingEnabled = true;
			this->comboBoxp9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp9->Location = System::Drawing::Point(1222, 505);
			this->comboBoxp9->Name = L"comboBoxp9";
			this->comboBoxp9->Size = System::Drawing::Size(121, 24);
			this->comboBoxp9->TabIndex = 9;
			this->comboBoxp9->Visible = false;
			// 
			// comboBoxp10
			// 
			this->comboBoxp10->FormattingEnabled = true;
			this->comboBoxp10->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Adding two numbers", L"convert to base", L"gcd" });
			this->comboBoxp10->Location = System::Drawing::Point(1222, 548);
			this->comboBoxp10->Name = L"comboBoxp10";
			this->comboBoxp10->Size = System::Drawing::Size(121, 24);
			this->comboBoxp10->TabIndex = 10;
			this->comboBoxp10->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(284, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 41);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Algorithm";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"FCFS", L"RR", L"SJF", L"PQ" });
			this->comboBox11->Location = System::Drawing::Point(452, 186);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(139, 24);
			this->comboBox11->TabIndex = 12;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox11_SelectedIndexChanged);
			// 
			// lbla
			// 
			this->lbla->AutoSize = true;
			this->lbla->Location = System::Drawing::Point(1078, 105);
			this->lbla->Name = L"lbla";
			this->lbla->Size = System::Drawing::Size(75, 17);
			this->lbla->TabIndex = 13;
			this->lbla->Text = L"Arrival time";
			this->lbla->Visible = false;
			// 
			// lblp1
			// 
			this->lblp1->AutoSize = true;
			this->lblp1->BackColor = System::Drawing::Color::Transparent;
			this->lblp1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp1->Location = System::Drawing::Point(711, 136);
			this->lblp1->Name = L"lblp1";
			this->lblp1->Size = System::Drawing::Size(41, 30);
			this->lblp1->TabIndex = 14;
			this->lblp1->Text = L"P1";
			this->lblp1->Visible = false;
			// 
			// lblp2
			// 
			this->lblp2->AutoSize = true;
			this->lblp2->BackColor = System::Drawing::Color::Transparent;
			this->lblp2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp2->Location = System::Drawing::Point(711, 184);
			this->lblp2->Name = L"lblp2";
			this->lblp2->Size = System::Drawing::Size(41, 30);
			this->lblp2->TabIndex = 15;
			this->lblp2->Text = L"P2";
			this->lblp2->Visible = false;
			// 
			// lblp3
			// 
			this->lblp3->AutoSize = true;
			this->lblp3->BackColor = System::Drawing::Color::Transparent;
			this->lblp3->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp3->Location = System::Drawing::Point(711, 237);
			this->lblp3->Name = L"lblp3";
			this->lblp3->Size = System::Drawing::Size(41, 30);
			this->lblp3->TabIndex = 16;
			this->lblp3->Text = L"P3";
			this->lblp3->Visible = false;
			// 
			// lblp4
			// 
			this->lblp4->AutoSize = true;
			this->lblp4->BackColor = System::Drawing::Color::Transparent;
			this->lblp4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp4->Location = System::Drawing::Point(711, 285);
			this->lblp4->Name = L"lblp4";
			this->lblp4->Size = System::Drawing::Size(41, 30);
			this->lblp4->TabIndex = 17;
			this->lblp4->Text = L"P4";
			this->lblp4->Visible = false;
			// 
			// lblp5
			// 
			this->lblp5->AutoSize = true;
			this->lblp5->BackColor = System::Drawing::Color::Transparent;
			this->lblp5->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp5->Location = System::Drawing::Point(711, 328);
			this->lblp5->Name = L"lblp5";
			this->lblp5->Size = System::Drawing::Size(41, 30);
			this->lblp5->TabIndex = 18;
			this->lblp5->Text = L"P5";
			this->lblp5->Visible = false;
			// 
			// lblp6
			// 
			this->lblp6->AutoSize = true;
			this->lblp6->BackColor = System::Drawing::Color::Transparent;
			this->lblp6->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp6->Location = System::Drawing::Point(711, 369);
			this->lblp6->Name = L"lblp6";
			this->lblp6->Size = System::Drawing::Size(41, 30);
			this->lblp6->TabIndex = 19;
			this->lblp6->Text = L"P6";
			this->lblp6->Visible = false;
			this->lblp6->Click += gcnew System::EventHandler(this, &Home::label8_Click);
			// 
			// lblp7
			// 
			this->lblp7->AutoSize = true;
			this->lblp7->BackColor = System::Drawing::Color::Transparent;
			this->lblp7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp7->Location = System::Drawing::Point(711, 410);
			this->lblp7->Name = L"lblp7";
			this->lblp7->Size = System::Drawing::Size(41, 30);
			this->lblp7->TabIndex = 20;
			this->lblp7->Text = L"P7";
			this->lblp7->Visible = false;
			// 
			// lblp8
			// 
			this->lblp8->AutoSize = true;
			this->lblp8->BackColor = System::Drawing::Color::Transparent;
			this->lblp8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp8->Location = System::Drawing::Point(711, 453);
			this->lblp8->Name = L"lblp8";
			this->lblp8->Size = System::Drawing::Size(41, 30);
			this->lblp8->TabIndex = 21;
			this->lblp8->Text = L"P8";
			this->lblp8->Visible = false;
			// 
			// lblp9
			// 
			this->lblp9->AutoSize = true;
			this->lblp9->BackColor = System::Drawing::Color::Transparent;
			this->lblp9->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp9->Location = System::Drawing::Point(711, 498);
			this->lblp9->Name = L"lblp9";
			this->lblp9->Size = System::Drawing::Size(41, 30);
			this->lblp9->TabIndex = 22;
			this->lblp9->Text = L"P9";
			this->lblp9->Visible = false;
			// 
			// lblp10
			// 
			this->lblp10->AutoSize = true;
			this->lblp10->BackColor = System::Drawing::Color::Transparent;
			this->lblp10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->lblp10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblp10->Location = System::Drawing::Point(711, 538);
			this->lblp10->Name = L"lblp10";
			this->lblp10->Size = System::Drawing::Size(55, 30);
			this->lblp10->TabIndex = 23;
			this->lblp10->Text = L"P10";
			this->lblp10->Visible = false;
			// 
			// textBoxAp1
			// 
			this->textBoxAp1->Location = System::Drawing::Point(1064, 139);
			this->textBoxAp1->Name = L"textBoxAp1";
			this->textBoxAp1->Size = System::Drawing::Size(100, 24);
			this->textBoxAp1->TabIndex = 24;
			this->textBoxAp1->Visible = false;
			// 
			// textBoxAp2
			// 
			this->textBoxAp2->Location = System::Drawing::Point(1064, 192);
			this->textBoxAp2->Name = L"textBoxAp2";
			this->textBoxAp2->Size = System::Drawing::Size(100, 24);
			this->textBoxAp2->TabIndex = 25;
			this->textBoxAp2->Visible = false;
			// 
			// textBoxAp3
			// 
			this->textBoxAp3->Location = System::Drawing::Point(1064, 243);
			this->textBoxAp3->Name = L"textBoxAp3";
			this->textBoxAp3->Size = System::Drawing::Size(100, 24);
			this->textBoxAp3->TabIndex = 26;
			this->textBoxAp3->Visible = false;
			// 
			// textBoxAp4
			// 
			this->textBoxAp4->Location = System::Drawing::Point(1064, 290);
			this->textBoxAp4->Name = L"textBoxAp4";
			this->textBoxAp4->Size = System::Drawing::Size(100, 24);
			this->textBoxAp4->TabIndex = 27;
			this->textBoxAp4->Visible = false;
			// 
			// textBoxAp5
			// 
			this->textBoxAp5->Location = System::Drawing::Point(1064, 333);
			this->textBoxAp5->Name = L"textBoxAp5";
			this->textBoxAp5->Size = System::Drawing::Size(100, 24);
			this->textBoxAp5->TabIndex = 28;
			this->textBoxAp5->Visible = false;
			// 
			// textBoxAp6
			// 
			this->textBoxAp6->Location = System::Drawing::Point(1064, 377);
			this->textBoxAp6->Name = L"textBoxAp6";
			this->textBoxAp6->Size = System::Drawing::Size(100, 24);
			this->textBoxAp6->TabIndex = 29;
			this->textBoxAp6->Visible = false;
			// 
			// textBoxAp7
			// 
			this->textBoxAp7->Location = System::Drawing::Point(1064, 420);
			this->textBoxAp7->Name = L"textBoxAp7";
			this->textBoxAp7->Size = System::Drawing::Size(100, 24);
			this->textBoxAp7->TabIndex = 30;
			this->textBoxAp7->Visible = false;
			// 
			// textBoxAp8
			// 
			this->textBoxAp8->Location = System::Drawing::Point(1064, 461);
			this->textBoxAp8->Name = L"textBoxAp8";
			this->textBoxAp8->Size = System::Drawing::Size(100, 24);
			this->textBoxAp8->TabIndex = 31;
			this->textBoxAp8->Visible = false;
			// 
			// textBoxAp9
			// 
			this->textBoxAp9->Location = System::Drawing::Point(1064, 505);
			this->textBoxAp9->Name = L"textBoxAp9";
			this->textBoxAp9->Size = System::Drawing::Size(100, 24);
			this->textBoxAp9->TabIndex = 32;
			this->textBoxAp9->Visible = false;
			// 
			// textBoxAp10
			// 
			this->textBoxAp10->Location = System::Drawing::Point(1064, 548);
			this->textBoxAp10->Name = L"textBoxAp10";
			this->textBoxAp10->Size = System::Drawing::Size(100, 24);
			this->textBoxAp10->TabIndex = 33;
			this->textBoxAp10->Visible = false;
			// 
			// lblt
			// 
			this->lblt->AutoSize = true;
			this->lblt->Location = System::Drawing::Point(1253, 105);
			this->lblt->Name = L"lblt";
			this->lblt->Size = System::Drawing::Size(39, 17);
			this->lblt->TabIndex = 34;
			this->lblt->Text = L"Type";
			this->lblt->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 49);
			this->button1->TabIndex = 35;
			this->button1->Text = L"-->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click_1);
			// 
			// textBoxBp1
			// 
			this->textBoxBp1->Location = System::Drawing::Point(914, 139);
			this->textBoxBp1->Name = L"textBoxBp1";
			this->textBoxBp1->Size = System::Drawing::Size(100, 24);
			this->textBoxBp1->TabIndex = 36;
			this->textBoxBp1->Text = L"0";
			this->textBoxBp1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp1->Visible = false;
			// 
			// textBoxBp2
			// 
			this->textBoxBp2->Location = System::Drawing::Point(914, 191);
			this->textBoxBp2->Name = L"textBoxBp2";
			this->textBoxBp2->Size = System::Drawing::Size(100, 24);
			this->textBoxBp2->TabIndex = 37;
			this->textBoxBp2->Text = L"0";
			this->textBoxBp2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp2->Visible = false;
			// 
			// textBoxBp3
			// 
			this->textBoxBp3->Location = System::Drawing::Point(914, 241);
			this->textBoxBp3->Name = L"textBoxBp3";
			this->textBoxBp3->Size = System::Drawing::Size(100, 24);
			this->textBoxBp3->TabIndex = 38;
			this->textBoxBp3->Text = L"0";
			this->textBoxBp3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp3->Visible = false;
			// 
			// textBoxBp4
			// 
			this->textBoxBp4->Location = System::Drawing::Point(914, 290);
			this->textBoxBp4->Name = L"textBoxBp4";
			this->textBoxBp4->Size = System::Drawing::Size(100, 24);
			this->textBoxBp4->TabIndex = 39;
			this->textBoxBp4->Text = L"0";
			this->textBoxBp4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp4->Visible = false;
			// 
			// textBoxBp5
			// 
			this->textBoxBp5->Location = System::Drawing::Point(914, 333);
			this->textBoxBp5->Name = L"textBoxBp5";
			this->textBoxBp5->Size = System::Drawing::Size(100, 24);
			this->textBoxBp5->TabIndex = 40;
			this->textBoxBp5->Text = L"0";
			this->textBoxBp5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp5->Visible = false;
			// 
			// textBoxBp6
			// 
			this->textBoxBp6->Location = System::Drawing::Point(914, 377);
			this->textBoxBp6->Name = L"textBoxBp6";
			this->textBoxBp6->Size = System::Drawing::Size(100, 24);
			this->textBoxBp6->TabIndex = 41;
			this->textBoxBp6->Text = L"0";
			this->textBoxBp6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp6->Visible = false;
			// 
			// textBoxBp7
			// 
			this->textBoxBp7->Location = System::Drawing::Point(914, 419);
			this->textBoxBp7->Name = L"textBoxBp7";
			this->textBoxBp7->Size = System::Drawing::Size(100, 24);
			this->textBoxBp7->TabIndex = 42;
			this->textBoxBp7->Text = L"0";
			this->textBoxBp7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp7->Visible = false;
			// 
			// textBoxBp8
			// 
			this->textBoxBp8->Location = System::Drawing::Point(914, 462);
			this->textBoxBp8->Name = L"textBoxBp8";
			this->textBoxBp8->Size = System::Drawing::Size(100, 24);
			this->textBoxBp8->TabIndex = 43;
			this->textBoxBp8->Text = L"0";
			this->textBoxBp8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp8->Visible = false;
			// 
			// textBoxBp9
			// 
			this->textBoxBp9->Location = System::Drawing::Point(914, 507);
			this->textBoxBp9->Name = L"textBoxBp9";
			this->textBoxBp9->Size = System::Drawing::Size(100, 24);
			this->textBoxBp9->TabIndex = 44;
			this->textBoxBp9->Text = L"0";
			this->textBoxBp9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp9->Visible = false;
			// 
			// textBoxBp10
			// 
			this->textBoxBp10->Location = System::Drawing::Point(914, 547);
			this->textBoxBp10->Name = L"textBoxBp10";
			this->textBoxBp10->Size = System::Drawing::Size(100, 24);
			this->textBoxBp10->TabIndex = 45;
			this->textBoxBp10->Text = L"0";
			this->textBoxBp10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxBp10->Visible = false;
			// 
			// lblb
			// 
			this->lblb->AutoSize = true;
			this->lblb->Location = System::Drawing::Point(929, 105);
			this->lblb->Name = L"lblb";
			this->lblb->Size = System::Drawing::Size(73, 17);
			this->lblb->TabIndex = 46;
			this->lblb->Text = L"Burst Time";
			this->lblb->Visible = false;
			// 
			// textBoxI1p1
			// 
			this->textBoxI1p1->Location = System::Drawing::Point(1391, 141);
			this->textBoxI1p1->Name = L"textBoxI1p1";
			this->textBoxI1p1->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p1->TabIndex = 47;
			this->textBoxI1p1->Visible = false;
			// 
			// textBoxI1p2
			// 
			this->textBoxI1p2->Location = System::Drawing::Point(1391, 191);
			this->textBoxI1p2->Name = L"textBoxI1p2";
			this->textBoxI1p2->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p2->TabIndex = 48;
			this->textBoxI1p2->Visible = false;
			// 
			// textBoxI1p3
			// 
			this->textBoxI1p3->Location = System::Drawing::Point(1391, 242);
			this->textBoxI1p3->Name = L"textBoxI1p3";
			this->textBoxI1p3->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p3->TabIndex = 49;
			this->textBoxI1p3->Visible = false;
			// 
			// textBoxI1p4
			// 
			this->textBoxI1p4->Location = System::Drawing::Point(1391, 290);
			this->textBoxI1p4->Name = L"textBoxI1p4";
			this->textBoxI1p4->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p4->TabIndex = 50;
			this->textBoxI1p4->Visible = false;
			// 
			// textBoxI1p5
			// 
			this->textBoxI1p5->Location = System::Drawing::Point(1391, 333);
			this->textBoxI1p5->Name = L"textBoxI1p5";
			this->textBoxI1p5->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p5->TabIndex = 51;
			this->textBoxI1p5->Visible = false;
			// 
			// textBoxI1p6
			// 
			this->textBoxI1p6->Location = System::Drawing::Point(1391, 377);
			this->textBoxI1p6->Name = L"textBoxI1p6";
			this->textBoxI1p6->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p6->TabIndex = 52;
			this->textBoxI1p6->Visible = false;
			// 
			// textBoxI1p7
			// 
			this->textBoxI1p7->Location = System::Drawing::Point(1391, 419);
			this->textBoxI1p7->Name = L"textBoxI1p7";
			this->textBoxI1p7->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p7->TabIndex = 53;
			this->textBoxI1p7->Visible = false;
			// 
			// textBoxI1p8
			// 
			this->textBoxI1p8->Location = System::Drawing::Point(1391, 461);
			this->textBoxI1p8->Name = L"textBoxI1p8";
			this->textBoxI1p8->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p8->TabIndex = 54;
			this->textBoxI1p8->Visible = false;
			// 
			// textBoxI1p9
			// 
			this->textBoxI1p9->Location = System::Drawing::Point(1391, 503);
			this->textBoxI1p9->Name = L"textBoxI1p9";
			this->textBoxI1p9->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p9->TabIndex = 55;
			this->textBoxI1p9->Visible = false;
			// 
			// textBoxI1p10
			// 
			this->textBoxI1p10->Location = System::Drawing::Point(1391, 547);
			this->textBoxI1p10->Name = L"textBoxI1p10";
			this->textBoxI1p10->Size = System::Drawing::Size(100, 24);
			this->textBoxI1p10->TabIndex = 56;
			this->textBoxI1p10->Visible = false;
			// 
			// textBoxI2p1
			// 
			this->textBoxI2p1->Location = System::Drawing::Point(1551, 142);
			this->textBoxI2p1->Name = L"textBoxI2p1";
			this->textBoxI2p1->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p1->TabIndex = 57;
			this->textBoxI2p1->Visible = false;
			// 
			// textBoxI2p2
			// 
			this->textBoxI2p2->Location = System::Drawing::Point(1551, 191);
			this->textBoxI2p2->Name = L"textBoxI2p2";
			this->textBoxI2p2->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p2->TabIndex = 58;
			this->textBoxI2p2->Visible = false;
			// 
			// textBoxI2p3
			// 
			this->textBoxI2p3->Location = System::Drawing::Point(1551, 243);
			this->textBoxI2p3->Name = L"textBoxI2p3";
			this->textBoxI2p3->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p3->TabIndex = 59;
			this->textBoxI2p3->Visible = false;
			// 
			// textBoxI2p4
			// 
			this->textBoxI2p4->Location = System::Drawing::Point(1551, 290);
			this->textBoxI2p4->Name = L"textBoxI2p4";
			this->textBoxI2p4->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p4->TabIndex = 60;
			this->textBoxI2p4->Visible = false;
			// 
			// textBoxI2p5
			// 
			this->textBoxI2p5->Location = System::Drawing::Point(1551, 333);
			this->textBoxI2p5->Name = L"textBoxI2p5";
			this->textBoxI2p5->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p5->TabIndex = 61;
			this->textBoxI2p5->Visible = false;
			// 
			// textBoxI2p6
			// 
			this->textBoxI2p6->Location = System::Drawing::Point(1551, 377);
			this->textBoxI2p6->Name = L"textBoxI2p6";
			this->textBoxI2p6->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p6->TabIndex = 62;
			this->textBoxI2p6->Visible = false;
			// 
			// textBoxI2p7
			// 
			this->textBoxI2p7->Location = System::Drawing::Point(1551, 419);
			this->textBoxI2p7->Name = L"textBoxI2p7";
			this->textBoxI2p7->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p7->TabIndex = 63;
			this->textBoxI2p7->Visible = false;
			// 
			// textBoxI2p8
			// 
			this->textBoxI2p8->Location = System::Drawing::Point(1551, 461);
			this->textBoxI2p8->Name = L"textBoxI2p8";
			this->textBoxI2p8->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p8->TabIndex = 64;
			this->textBoxI2p8->Visible = false;
			// 
			// textBoxI2p9
			// 
			this->textBoxI2p9->Location = System::Drawing::Point(1551, 503);
			this->textBoxI2p9->Name = L"textBoxI2p9";
			this->textBoxI2p9->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p9->TabIndex = 65;
			this->textBoxI2p9->Visible = false;
			// 
			// textBoxI2p10
			// 
			this->textBoxI2p10->Location = System::Drawing::Point(1551, 547);
			this->textBoxI2p10->Name = L"textBoxI2p10";
			this->textBoxI2p10->Size = System::Drawing::Size(100, 24);
			this->textBoxI2p10->TabIndex = 66;
			this->textBoxI2p10->Visible = false;
			// 
			// lbli1
			// 
			this->lbli1->AutoSize = true;
			this->lbli1->Location = System::Drawing::Point(1413, 105);
			this->lbli1->Name = L"lbli1";
			this->lbli1->Size = System::Drawing::Size(53, 17);
			this->lbli1->TabIndex = 67;
			this->lbli1->Text = L"Input 1";
			this->lbli1->Visible = false;
			// 
			// lbli2
			// 
			this->lbli2->AutoSize = true;
			this->lbli2->Location = System::Drawing::Point(1576, 105);
			this->lbli2->Name = L"lbli2";
			this->lbli2->Size = System::Drawing::Size(53, 17);
			this->lbli2->TabIndex = 68;
			this->lbli2->Text = L"Input 2";
			this->lbli2->Visible = false;
			// 
			// buttonp1
			// 
			this->buttonp1->Location = System::Drawing::Point(1681, 142);
			this->buttonp1->Name = L"buttonp1";
			this->buttonp1->Size = System::Drawing::Size(75, 23);
			this->buttonp1->TabIndex = 69;
			this->buttonp1->Text = L"New";
			this->buttonp1->UseVisualStyleBackColor = true;
			this->buttonp1->Visible = false;
			this->buttonp1->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// buttonp2
			// 
			this->buttonp2->Location = System::Drawing::Point(1681, 191);
			this->buttonp2->Name = L"buttonp2";
			this->buttonp2->Size = System::Drawing::Size(75, 23);
			this->buttonp2->TabIndex = 70;
			this->buttonp2->Text = L"New";
			this->buttonp2->UseVisualStyleBackColor = true;
			this->buttonp2->Visible = false;
			this->buttonp2->Click += gcnew System::EventHandler(this, &Home::buttonp2_Click);
			// 
			// buttonp3
			// 
			this->buttonp3->Location = System::Drawing::Point(1681, 241);
			this->buttonp3->Name = L"buttonp3";
			this->buttonp3->Size = System::Drawing::Size(75, 23);
			this->buttonp3->TabIndex = 71;
			this->buttonp3->Text = L"New";
			this->buttonp3->UseVisualStyleBackColor = true;
			this->buttonp3->Visible = false;
			this->buttonp3->Click += gcnew System::EventHandler(this, &Home::buttonp3_Click);
			// 
			// buttonp4
			// 
			this->buttonp4->Location = System::Drawing::Point(1681, 291);
			this->buttonp4->Name = L"buttonp4";
			this->buttonp4->Size = System::Drawing::Size(75, 23);
			this->buttonp4->TabIndex = 72;
			this->buttonp4->Text = L"New";
			this->buttonp4->UseVisualStyleBackColor = true;
			this->buttonp4->Visible = false;
			this->buttonp4->Click += gcnew System::EventHandler(this, &Home::buttonp4_Click);
			// 
			// buttonp5
			// 
			this->buttonp5->Location = System::Drawing::Point(1681, 333);
			this->buttonp5->Name = L"buttonp5";
			this->buttonp5->Size = System::Drawing::Size(75, 23);
			this->buttonp5->TabIndex = 73;
			this->buttonp5->Text = L"New";
			this->buttonp5->UseVisualStyleBackColor = true;
			this->buttonp5->Visible = false;
			this->buttonp5->Click += gcnew System::EventHandler(this, &Home::buttonp5_Click);
			// 
			// buttonp6
			// 
			this->buttonp6->Location = System::Drawing::Point(1681, 378);
			this->buttonp6->Name = L"buttonp6";
			this->buttonp6->Size = System::Drawing::Size(75, 23);
			this->buttonp6->TabIndex = 74;
			this->buttonp6->Text = L"New";
			this->buttonp6->UseVisualStyleBackColor = true;
			this->buttonp6->Visible = false;
			this->buttonp6->Click += gcnew System::EventHandler(this, &Home::buttonp6_Click);
			// 
			// buttonp7
			// 
			this->buttonp7->Location = System::Drawing::Point(1681, 420);
			this->buttonp7->Name = L"buttonp7";
			this->buttonp7->Size = System::Drawing::Size(75, 23);
			this->buttonp7->TabIndex = 75;
			this->buttonp7->Text = L"New";
			this->buttonp7->UseVisualStyleBackColor = true;
			this->buttonp7->Visible = false;
			this->buttonp7->Click += gcnew System::EventHandler(this, &Home::buttonp7_Click);
			// 
			// buttonp8
			// 
			this->buttonp8->Location = System::Drawing::Point(1681, 462);
			this->buttonp8->Name = L"buttonp8";
			this->buttonp8->Size = System::Drawing::Size(75, 23);
			this->buttonp8->TabIndex = 76;
			this->buttonp8->Text = L"New";
			this->buttonp8->UseVisualStyleBackColor = true;
			this->buttonp8->Visible = false;
			this->buttonp8->Click += gcnew System::EventHandler(this, &Home::buttonp8_Click);
			// 
			// buttonp9
			// 
			this->buttonp9->Location = System::Drawing::Point(1681, 505);
			this->buttonp9->Name = L"buttonp9";
			this->buttonp9->Size = System::Drawing::Size(75, 23);
			this->buttonp9->TabIndex = 77;
			this->buttonp9->Text = L"New";
			this->buttonp9->UseVisualStyleBackColor = true;
			this->buttonp9->Visible = false;
			this->buttonp9->Click += gcnew System::EventHandler(this, &Home::buttonp9_Click);
			// 
			// lblp
			// 
			this->lblp->AutoSize = true;
			this->lblp->Location = System::Drawing::Point(794, 105);
			this->lblp->Name = L"lblp";
			this->lblp->Size = System::Drawing::Size(51, 17);
			this->lblp->TabIndex = 78;
			this->lblp->Text = L"Priority";
			this->lblp->Visible = false;
			// 
			// textBoxp1
			// 
			this->textBoxp1->Location = System::Drawing::Point(771, 139);
			this->textBoxp1->Name = L"textBoxp1";
			this->textBoxp1->Size = System::Drawing::Size(100, 24);
			this->textBoxp1->TabIndex = 79;
			this->textBoxp1->Text = L"0";
			this->textBoxp1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp1->Visible = false;
			// 
			// textBoxp2
			// 
			this->textBoxp2->Location = System::Drawing::Point(771, 191);
			this->textBoxp2->Name = L"textBoxp2";
			this->textBoxp2->Size = System::Drawing::Size(100, 24);
			this->textBoxp2->TabIndex = 80;
			this->textBoxp2->Text = L"0";
			this->textBoxp2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp2->Visible = false;
			// 
			// textBoxp3
			// 
			this->textBoxp3->Location = System::Drawing::Point(771, 242);
			this->textBoxp3->Name = L"textBoxp3";
			this->textBoxp3->Size = System::Drawing::Size(100, 24);
			this->textBoxp3->TabIndex = 81;
			this->textBoxp3->Text = L"0";
			this->textBoxp3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp3->Visible = false;
			// 
			// textBoxp4
			// 
			this->textBoxp4->Location = System::Drawing::Point(771, 290);
			this->textBoxp4->Name = L"textBoxp4";
			this->textBoxp4->Size = System::Drawing::Size(100, 24);
			this->textBoxp4->TabIndex = 82;
			this->textBoxp4->Text = L"0";
			this->textBoxp4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp4->Visible = false;
			// 
			// textBoxp5
			// 
			this->textBoxp5->Location = System::Drawing::Point(771, 333);
			this->textBoxp5->Name = L"textBoxp5";
			this->textBoxp5->Size = System::Drawing::Size(100, 24);
			this->textBoxp5->TabIndex = 83;
			this->textBoxp5->Text = L"0";
			this->textBoxp5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp5->Visible = false;
			// 
			// textBoxp6
			// 
			this->textBoxp6->Location = System::Drawing::Point(771, 377);
			this->textBoxp6->Name = L"textBoxp6";
			this->textBoxp6->Size = System::Drawing::Size(100, 24);
			this->textBoxp6->TabIndex = 84;
			this->textBoxp6->Text = L"0";
			this->textBoxp6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp6->Visible = false;
			// 
			// textBoxp7
			// 
			this->textBoxp7->Location = System::Drawing::Point(771, 419);
			this->textBoxp7->Name = L"textBoxp7";
			this->textBoxp7->Size = System::Drawing::Size(100, 24);
			this->textBoxp7->TabIndex = 85;
			this->textBoxp7->Text = L"0";
			this->textBoxp7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp7->Visible = false;
			// 
			// textBoxp8
			// 
			this->textBoxp8->Location = System::Drawing::Point(771, 461);
			this->textBoxp8->Name = L"textBoxp8";
			this->textBoxp8->Size = System::Drawing::Size(100, 24);
			this->textBoxp8->TabIndex = 86;
			this->textBoxp8->Text = L"0";
			this->textBoxp8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp8->Visible = false;
			// 
			// textBoxp9
			// 
			this->textBoxp9->Location = System::Drawing::Point(771, 506);
			this->textBoxp9->Name = L"textBoxp9";
			this->textBoxp9->Size = System::Drawing::Size(100, 24);
			this->textBoxp9->TabIndex = 87;
			this->textBoxp9->Text = L"0";
			this->textBoxp9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp9->Visible = false;
			// 
			// textBoxp10
			// 
			this->textBoxp10->Location = System::Drawing::Point(771, 547);
			this->textBoxp10->Name = L"textBoxp10";
			this->textBoxp10->Size = System::Drawing::Size(100, 24);
			this->textBoxp10->TabIndex = 88;
			this->textBoxp10->Text = L"0";
			this->textBoxp10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxp10->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1685, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 17);
			this->label2->TabIndex = 89;
			this->label2->Text = L"output";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1685, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 17);
			this->label3->TabIndex = 90;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1688, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 17);
			this->label4->TabIndex = 91;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1681, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 17);
			this->label5->TabIndex = 92;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1681, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 17);
			this->label6->TabIndex = 93;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1681, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 17);
			this->label7->TabIndex = 94;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1688, 384);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 95;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1685, 427);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 17);
			this->label9->TabIndex = 96;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1681, 468);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 17);
			this->label10->TabIndex = 97;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1680, 508);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 17);
			this->label11->TabIndex = 98;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1681, 548);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 17);
			this->label12->TabIndex = 99;
			this->label12->Text = L"label12";
			this->label12->Visible = false;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1790, 985);
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
			this->Controls->Add(this->textBoxp10);
			this->Controls->Add(this->textBoxp9);
			this->Controls->Add(this->textBoxp8);
			this->Controls->Add(this->textBoxp7);
			this->Controls->Add(this->textBoxp6);
			this->Controls->Add(this->textBoxp5);
			this->Controls->Add(this->textBoxp4);
			this->Controls->Add(this->textBoxp3);
			this->Controls->Add(this->textBoxp2);
			this->Controls->Add(this->textBoxp1);
			this->Controls->Add(this->lblp);
			this->Controls->Add(this->buttonp9);
			this->Controls->Add(this->buttonp8);
			this->Controls->Add(this->buttonp7);
			this->Controls->Add(this->buttonp6);
			this->Controls->Add(this->buttonp5);
			this->Controls->Add(this->buttonp4);
			this->Controls->Add(this->buttonp3);
			this->Controls->Add(this->buttonp2);
			this->Controls->Add(this->buttonp1);
			this->Controls->Add(this->lbli2);
			this->Controls->Add(this->lbli1);
			this->Controls->Add(this->textBoxI2p10);
			this->Controls->Add(this->textBoxI2p9);
			this->Controls->Add(this->textBoxI2p8);
			this->Controls->Add(this->textBoxI2p7);
			this->Controls->Add(this->textBoxI2p6);
			this->Controls->Add(this->textBoxI2p5);
			this->Controls->Add(this->textBoxI2p4);
			this->Controls->Add(this->textBoxI2p3);
			this->Controls->Add(this->textBoxI2p2);
			this->Controls->Add(this->textBoxI2p1);
			this->Controls->Add(this->textBoxI1p10);
			this->Controls->Add(this->textBoxI1p9);
			this->Controls->Add(this->textBoxI1p8);
			this->Controls->Add(this->textBoxI1p7);
			this->Controls->Add(this->textBoxI1p6);
			this->Controls->Add(this->textBoxI1p5);
			this->Controls->Add(this->textBoxI1p4);
			this->Controls->Add(this->textBoxI1p3);
			this->Controls->Add(this->textBoxI1p2);
			this->Controls->Add(this->textBoxI1p1);
			this->Controls->Add(this->lblb);
			this->Controls->Add(this->textBoxBp10);
			this->Controls->Add(this->textBoxBp9);
			this->Controls->Add(this->textBoxBp8);
			this->Controls->Add(this->textBoxBp7);
			this->Controls->Add(this->textBoxBp6);
			this->Controls->Add(this->textBoxBp5);
			this->Controls->Add(this->textBoxBp4);
			this->Controls->Add(this->textBoxBp3);
			this->Controls->Add(this->textBoxBp2);
			this->Controls->Add(this->textBoxBp1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblt);
			this->Controls->Add(this->textBoxAp10);
			this->Controls->Add(this->textBoxAp9);
			this->Controls->Add(this->textBoxAp8);
			this->Controls->Add(this->textBoxAp7);
			this->Controls->Add(this->textBoxAp6);
			this->Controls->Add(this->textBoxAp5);
			this->Controls->Add(this->textBoxAp4);
			this->Controls->Add(this->textBoxAp3);
			this->Controls->Add(this->textBoxAp2);
			this->Controls->Add(this->textBoxAp1);
			this->Controls->Add(this->lblp10);
			this->Controls->Add(this->lblp9);
			this->Controls->Add(this->lblp8);
			this->Controls->Add(this->lblp7);
			this->Controls->Add(this->lblp6);
			this->Controls->Add(this->lblp5);
			this->Controls->Add(this->lblp4);
			this->Controls->Add(this->lblp3);
			this->Controls->Add(this->lblp2);
			this->Controls->Add(this->lblp1);
			this->Controls->Add(this->lbla);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxp10);
			this->Controls->Add(this->comboBoxp9);
			this->Controls->Add(this->comboBoxp8);
			this->Controls->Add(this->comboBoxp7);
			this->Controls->Add(this->comboBoxp6);
			this->Controls->Add(this->comboBoxp5);
			this->Controls->Add(this->comboBoxp4);
			this->Controls->Add(this->comboBoxp3);
			this->Controls->Add(this->comboBoxP2);
			this->Controls->Add(this->comboBoxp1);
			this->Controls->Add(this->sim_btn);
			this->Name = L"Home";
			this->Text = L"Home";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label3->Visible = lblp1->Visible;
		this->label4->Visible = lblp2->Visible;
		this->label5->Visible = lblp3->Visible;
		this->label6->Visible = lblp4->Visible;
		this->label7->Visible = lblp5->Visible;
		this->label8->Visible = lblp6->Visible;
		this->label9->Visible = lblp7->Visible;
		this->label10->Visible = lblp8->Visible;
		this->label11->Visible = lblp9->Visible;
		this->label12->Visible = lblp10->Visible;
		/*MyForm1 ^ form1 = gcnew MyForm1(this->comboBox11->Text);
		form1->Show();*/
		vector<process> v;
		fcfs ff(v);
		ff.run();
	}
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBoxp1->Text=="Adding two numbers")
	{
		label3->Text = AddNumbers(Int32::Parse(this->textBoxI1p1->Text), Int32::Parse(this->textBoxI2p1->Text)).ToString();
	}
	else if (this->comboBoxp1->Text=="gcd")
	{
		label3->Text = gcd(Int32::Parse(this->textBoxI1p1->Text), Int32::Parse(this->textBoxI2p1->Text)).ToString();
	}
	
	this->textBoxp2->Visible = true;
	this->textBoxAp2->Visible = true;
	this->textBoxBp2->Visible = true;
	this->textBoxI1p2->Visible = true;
	this->textBoxI2p2->Visible = true;
	this->lblp2->Visible = true;
	this->comboBoxP2->Visible = true;
	this->buttonp2->Visible = true;
	this->buttonp1->Visible = false;
}
private: System::Void buttonp2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp3->Visible = true;
	this->textBoxAp3->Visible = true;
	this->textBoxBp3->Visible = true;
	this->textBoxI1p3->Visible = true;
	this->textBoxI2p3->Visible = true;
	this->lblp3->Visible = true;
	this->comboBoxp3->Visible = true;
	this->buttonp3->Visible = true;
	this->buttonp2->Visible = false;
}
private: System::Void buttonp3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp4->Visible = true;
	this->textBoxAp4->Visible = true;
	this->textBoxBp4->Visible = true;
	this->textBoxI1p4->Visible = true;
	this->textBoxI2p4->Visible = true;
	this->lblp4->Visible = true;
	this->comboBoxp4->Visible = true;
	this->buttonp4->Visible = true;
	this->buttonp3->Visible = false;
}
private: System::Void buttonp4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp5->Visible = true;
	this->textBoxAp5->Visible = true;
	this->textBoxBp5->Visible = true;
	this->textBoxI1p5->Visible = true;
	this->textBoxI2p5->Visible = true;
	this->lblp5->Visible = true;
	this->comboBoxp5->Visible = true;
	this->buttonp5->Visible = true;
	this->buttonp4->Visible = false;
}
private: System::Void buttonp5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp6->Visible = true;
	this->textBoxAp6->Visible = true;
	this->textBoxBp6->Visible = true;
	this->textBoxI1p6->Visible = true;
	this->textBoxI2p6->Visible = true;
	this->lblp6->Visible = true;
	this->comboBoxp6->Visible = true;
	this->buttonp6->Visible = true;
	this->buttonp5->Visible = false;
}
private: System::Void buttonp6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp7->Visible = true;
	this->textBoxAp7->Visible = true;
	this->textBoxBp7->Visible = true;
	this->textBoxI1p7->Visible = true;
	this->textBoxI2p7->Visible = true;
	this->lblp7->Visible = true;
	this->comboBoxp7->Visible = true;
	this->buttonp7->Visible = true;
	this->buttonp6->Visible = false;
}
private: System::Void buttonp7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp8->Visible = true;
	this->textBoxAp8->Visible = true;
	this->textBoxBp8->Visible = true;
	this->textBoxI1p8->Visible = true;
	this->textBoxI2p8->Visible = true;
	this->lblp8->Visible = true;
	this->comboBoxp8->Visible = true;
	this->buttonp8->Visible = true;
	this->buttonp7->Visible = false;
}
private: System::Void buttonp8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp9->Visible = true;
	this->textBoxAp9->Visible = true;
	this->textBoxBp9->Visible = true;
	this->textBoxI1p9->Visible = true;
	this->textBoxI2p9->Visible = true;
	this->lblp9->Visible = true;
	this->comboBoxp9->Visible = true;
	this->buttonp9->Visible = true;
	this->buttonp8->Visible = false;
}
private: System::Void buttonp9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxp10->Visible = true;
	this->textBoxAp10->Visible = true;
	this->textBoxBp10->Visible = true;
	this->textBoxI1p10->Visible = true;
	this->textBoxI2p10->Visible = true;
	this->lblp10->Visible = true;
	this->comboBoxp10->Visible = true;
	this->buttonp9->Visible = false;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->lblp1->Visible = true;
	this->lbla->Visible = true;
	this->lblt->Visible = true;
	this->lblb->Visible = true;
	this->lblp->Visible = true;
	this->lbli1->Visible = true;
	this->lbli2->Visible = true;
	this->textBoxp1->Visible = true;
	this->textBoxAp1->Visible = true;
	this->textBoxBp1->Visible = true;
	this->textBoxI1p1->Visible = true;
	this->textBoxI2p1->Visible = true;
	this->comboBoxp1->Visible = true;
	this->buttonp1->Visible = true;
	this->comboBox11->Visible = false;
	this->label1->Visible = false;
	this->button1->Visible = false;
}
private: System::Void comboBox11_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
