#pragma once
#include <string> 
#include <sstream>
#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int GuessNumber;
		int userNumber;
		int enteredNumber;
		int a = 100;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ðåñòàðòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàê³í÷èòèToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;

		   int movesNumber = 0;
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
	
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ verdictLabel;
	private: System::Windows::Forms::TextBox^ userNumberTextBox;
	private: System::Windows::Forms::TextBox^ enteredNumbertTextBox;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ robotVerdictLabel;

	private: System::Windows::Forms::DataGridView^ historyDataGridView;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->verdictLabel = (gcnew System::Windows::Forms::Label());
			this->userNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enteredNumbertTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->robotVerdictLabel = (gcnew System::Windows::Forms::Label());
			this->historyDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðåñòàðòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàê³í÷èòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historyDataGridView))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(255, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Âãàäàé ìîº ÷èñëî";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(300, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Â³ä 1 äî 100";
			// 
			// verdictLabel
			// 
			this->verdictLabel->AutoSize = true;
			this->verdictLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->verdictLabel->Location = System::Drawing::Point(257, 124);
			this->verdictLabel->Name = L"verdictLabel";
			this->verdictLabel->Size = System::Drawing::Size(0, 23);
			this->verdictLabel->TabIndex = 2;
			// 
			// userNumberTextBox
			// 
			this->userNumberTextBox->Location = System::Drawing::Point(272, 167);
			this->userNumberTextBox->Name = L"userNumberTextBox";
			this->userNumberTextBox->Size = System::Drawing::Size(100, 22);
			this->userNumberTextBox->TabIndex = 3;
			// 
			// enteredNumbertTextBox
			// 
			this->enteredNumbertTextBox->Location = System::Drawing::Point(272, 282);
			this->enteredNumbertTextBox->Name = L"enteredNumbertTextBox";
			this->enteredNumbertTextBox->Size = System::Drawing::Size(100, 22);
			this->enteredNumbertTextBox->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(396, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ïî÷àòè ãðó";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// robotVerdictLabel
			// 
			this->robotVerdictLabel->AutoSize = true;
			this->robotVerdictLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->robotVerdictLabel->Location = System::Drawing::Point(256, 251);
			this->robotVerdictLabel->Name = L"robotVerdictLabel";
			this->robotVerdictLabel->Size = System::Drawing::Size(113, 23);
			this->robotVerdictLabel->TabIndex = 6;
			this->robotVerdictLabel->Text = L"Çàãàäàé ñâîº";
			// 
			// historyDataGridView
			// 
			this->historyDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->historyDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->historyDataGridView->Location = System::Drawing::Point(77, 356);
			this->historyDataGridView->Name = L"historyDataGridView";
			this->historyDataGridView->RowHeadersWidth = 51;
			this->historyDataGridView->RowTemplate->Height = 24;
			this->historyDataGridView->Size = System::Drawing::Size(595, 150);
			this->historyDataGridView->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Íîìåð õîäó";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ââåäåíå ÷èñëî";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Âåðäèêò";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(729, 28);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ðåñòàðòToolStripMenuItem,
					this->çàê³í÷èòèToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ðåñòàðòToolStripMenuItem
			// 
			this->ðåñòàðòToolStripMenuItem->Name = L"ðåñòàðòToolStripMenuItem";
			this->ðåñòàðòToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->ðåñòàðòToolStripMenuItem->Text = L"Ðåñòàðò";
			this->ðåñòàðòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ðåñòàðòToolStripMenuItem_Click);
			// 
			// çàê³í÷èòèToolStripMenuItem
			// 
			this->çàê³í÷èòèToolStripMenuItem->Name = L"çàê³í÷èòèToolStripMenuItem";
			this->çàê³í÷èòèToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->çàê³í÷èòèToolStripMenuItem->Text = L"Çàê³í÷èòè";
			this->çàê³í÷èòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàê³í÷èòèToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(256, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 28);
			this->label3->TabIndex = 10;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 518);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->historyDataGridView);
			this->Controls->Add(this->robotVerdictLabel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->enteredNumbertTextBox);
			this->Controls->Add(this->userNumberTextBox);
			this->Controls->Add(this->verdictLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historyDataGridView))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		GuessNumber = (rand() % 100) + 1;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
	int randomRobot = 50;
	button1->Text = "Âãàäàòè";
	userNumber = int::Parse(userNumberTextBox->Text);
	enteredNumber = int::Parse(enteredNumbertTextBox->Text);
	label3->Text = "Âè çàãàäàëè ÷èñëî " + enteredNumber;
	enteredNumbertTextBox->Hide();
	if (movesNumber == 1)
	{
		if (enteredNumber > 50)
		{
			randomRobot = 75;
		}
		else if (enteredNumber <= 50)
		{
			randomRobot = 25;
		}
	}
	if (movesNumber == 2)
	{
		if (enteredNumber > 50)
		{
			if (enteredNumber > 75)
			{
				randomRobot = 87;
			}
			else
			{
				randomRobot = 62;
			}
		}
		else if (enteredNumber <= 50)
		{
			if (enteredNumber > 25)
			{
				randomRobot = 37;
			}
			else
			{
				randomRobot = 12;
			}
		}
	}
	if (movesNumber == 3)
	{
		if (enteredNumber > 50)
		{
			if (enteredNumber > 75)
			{
				if (enteredNumber > 87)
				{
					randomRobot = 94;
				}
				else
				{
					randomRobot = 81;
				}
			}
			else
			{
				if (enteredNumber > 62)
				{
					randomRobot = 68;
				}
				else
				{
					randomRobot = 56;
				}
			}
		}
		else if (enteredNumber <= 50)
		{
			if (enteredNumber > 25)
			{
				if (enteredNumber > 37)
				{
					randomRobot = 44;
				}
				else
				{
					randomRobot = 31;
				}
			}
			else
			{
				if (enteredNumber > 12)
				{
					randomRobot = 18;
				}
				else
				{
					randomRobot = 6;
				}
			}
		}
	}
	if (movesNumber > 3)
	{
		if (enteredNumber > 50)
		{
			if (enteredNumber > 75)
			{
				if (enteredNumber > 87)
				{
					if (enteredNumber > 94)
					{
						randomRobot = (rand() % 6) + 1+ 94;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 87;
					}
				}
				else
				{
					if (enteredNumber > 81)
					{
						randomRobot = (rand() % 6) + 1 + 81;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 75;
					}
				}
			}
			else
			{
				if (enteredNumber > 62)
				{
					if (enteredNumber > 68)
					{
						randomRobot = (rand() % 6) + 1 + 68;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 62;
					}
				}
				else
				{
					if (enteredNumber > 56)
					{
						randomRobot = (rand() % 6) + 1 + 56;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 50;
					}
				}
			}
		}
		else if (enteredNumber <= 50)
		{
			if (enteredNumber > 25)
			{
				if (enteredNumber > 37)
				{
					if (enteredNumber > 44)
					{
						randomRobot = (rand() % 6) + 1 + 44;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 37;
					}
				}
				else
				{
					if (enteredNumber > 31)
					{
						randomRobot = (rand() % 6) + 1 + 31;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 25;
					}
				}
			}
			else
			{
				if (enteredNumber > 12)
				{
					if (enteredNumber > 18)
					{
						randomRobot = (rand() % 6) + 1 + 18;
					}
					else
					{
						randomRobot = (rand() % 6) + 1 + 12;
					}
				}
				else
				{
					if (enteredNumber > 6)
					{
						randomRobot = (rand() % 6) + 1 + 6;
					}
					else
					{
						randomRobot = (rand() % 6) + 1;
					}
				}
			}
		}
	}
	string path = "history.txt";
	ofstream fout;
	fout.open(path);
	String^ robotVerdict = "Ðîáîò íàçâàâ ÷èñëî " + randomRobot;
	robotVerdictLabel->Text = robotVerdict;

	if (!(userNumber >= 1 && userNumber <= 100))
	{
		MessageBox::Show("×èñëî â ä³àïàçîí³ 1-100");
	}
	if (!(enteredNumber >= 1 && enteredNumber <= 100))
	{
		MessageBox::Show("Çàãàäàíå ÷èñëî ìàº áóòè â ä³àïàçîí³ 1-100");
		Application::Restart();
	}
	movesNumber++;
	String^ verdict;
	if (userNumber == GuessNumber)
	{
		if (randomRobot == enteredNumber)
		{
			MessageBox::Show("Í³÷èÿ!");
			historyDataGridView->Rows->Add(movesNumber, userNumber, "Í³÷èÿ!");
			fout << "Í³÷èÿ!";
		}
		else
		{
			verdict = ("Âè âèãðàëè çà " + movesNumber + " õîä³â!");
			if (movesNumber > 7)
			{
				verdict += "Àëå ìîæíà áóëî âãàäàòè çà 7 êðîê³â";
			}
			else
			{
				verdict += " Âè ãðàëè ïðàâèëüíî";
			}
			historyDataGridView->Rows->Add(movesNumber, userNumber, "Âãàäàâ!");
			historyDataGridView->Rows->Add(movesNumber, randomRobot, "ðîáîò ïîìèëèâñÿ");
			MessageBox::Show(verdict);
		}
	}
	else
	{
		if (randomRobot == enteredNumber)
		{
			MessageBox::Show("Ðîáîò ïåðåì³ã!");
			historyDataGridView->Rows->Add(movesNumber, randomRobot, "ðîáîò ïåðåì³ã!");
		}
		else
		{
			if (GuessNumber > userNumber)
			{
				String^ verdict = "Ìîº ÷èñëî á³ëüøå " + userNumber;
				verdictLabel->Text = verdict;
				historyDataGridView->Rows->Add(movesNumber, userNumber, "á³ëüøå");
				historyDataGridView->Rows->Add(movesNumber, randomRobot, "ðîáîò ïîìèëèâñÿ");
			}
			else
			{
				String^ verdict = "Ìîº ÷èñëî ìåíøå " + userNumber;
				verdictLabel->Text = verdict;
				historyDataGridView->Rows->Add(movesNumber, userNumber, "ìåíøå");
				historyDataGridView->Rows->Add(movesNumber, randomRobot, "ðîáîò ïîìèëèâñÿ");
			}
			userNumberTextBox->Clear();
			userNumberTextBox->Focus();
		}

	}
	for (int j = 0; j < historyDataGridView->RowCount; j++)
	{
		for (int i = 0; i < historyDataGridView->Rows[j]->Cells->Count; i++)
		{
			String^ cell = Convert::ToString(historyDataGridView->Rows[j]->Cells[i]->Value);
			string SCell = msclr::interop::marshal_as<std::string>(cell);
			fout << SCell << " ";
		}
		fout << endl;
	}
	fout.close();
}
private: System::Void ðåñòàðòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void çàê³í÷èòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
