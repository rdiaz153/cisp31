#pragma once
#include <iomanip>
#include <string>

namespace $safeprojectname$ {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::Label^ startTimeLabel1;
	private: System::Windows::Forms::Label^ endTimeLabel1;
	protected:



	private: System::Windows::Forms::Label^ totalMinutesLabel;
	private: System::Windows::Forms::TextBox^ startTimeTB1;
	private: System::Windows::Forms::TextBox^ endTimeTB1;
	private: System::Windows::Forms::TextBox^ totalHoursTB;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lunchTOLabel1;
	private: System::Windows::Forms::Label^ lunchTILabel1;
	private: System::Windows::Forms::TextBox^ lunchTOTB1;
	private: System::Windows::Forms::TextBox^ lunchTITB1;









	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ day1Label;
	private: System::Windows::Forms::TextBox^ nameTB;

	private: System::Windows::Forms::Label^ wageLabel;
	private: System::Windows::Forms::TextBox^ wageTB;
	private: System::Windows::Forms::Label^ day2Label;
	private: System::Windows::Forms::Label^ startTimeLabel2;
	private: System::Windows::Forms::Label^ lunchTOLabel2;
	private: System::Windows::Forms::Label^ lunchTILabel2;
	private: System::Windows::Forms::Label^ endTimeLabel2;
	private: System::Windows::Forms::TextBox^ startTimeTB2;
	private: System::Windows::Forms::TextBox^ lunchTOTB2;
	private: System::Windows::Forms::TextBox^ lunchTITB2;
	private: System::Windows::Forms::TextBox^ endTimeTB2;
	private: System::Windows::Forms::TextBox^ salaryTB;

	private: System::Windows::Forms::Label^ salaryLabel;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printPreviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;














	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->startTimeLabel1 = (gcnew System::Windows::Forms::Label());
			this->endTimeLabel1 = (gcnew System::Windows::Forms::Label());
			this->totalMinutesLabel = (gcnew System::Windows::Forms::Label());
			this->startTimeTB1 = (gcnew System::Windows::Forms::TextBox());
			this->endTimeTB1 = (gcnew System::Windows::Forms::TextBox());
			this->totalHoursTB = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lunchTOLabel1 = (gcnew System::Windows::Forms::Label());
			this->lunchTILabel1 = (gcnew System::Windows::Forms::Label());
			this->lunchTOTB1 = (gcnew System::Windows::Forms::TextBox());
			this->lunchTITB1 = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->day1Label = (gcnew System::Windows::Forms::Label());
			this->nameTB = (gcnew System::Windows::Forms::TextBox());
			this->wageLabel = (gcnew System::Windows::Forms::Label());
			this->wageTB = (gcnew System::Windows::Forms::TextBox());
			this->day2Label = (gcnew System::Windows::Forms::Label());
			this->startTimeLabel2 = (gcnew System::Windows::Forms::Label());
			this->lunchTOLabel2 = (gcnew System::Windows::Forms::Label());
			this->lunchTILabel2 = (gcnew System::Windows::Forms::Label());
			this->endTimeLabel2 = (gcnew System::Windows::Forms::Label());
			this->startTimeTB2 = (gcnew System::Windows::Forms::TextBox());
			this->lunchTOTB2 = (gcnew System::Windows::Forms::TextBox());
			this->lunchTITB2 = (gcnew System::Windows::Forms::TextBox());
			this->endTimeTB2 = (gcnew System::Windows::Forms::TextBox());
			this->salaryTB = (gcnew System::Windows::Forms::TextBox());
			this->salaryLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"MS PGothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(154, 24);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(166, 21);
			this->titleLabel->TabIndex = 0;
			this->titleLabel->Text = L"Midterm Project";
			// 
			// startTimeLabel1
			// 
			this->startTimeLabel1->AutoSize = true;
			this->startTimeLabel1->Location = System::Drawing::Point(12, 225);
			this->startTimeLabel1->Name = L"startTimeLabel1";
			this->startTimeLabel1->Size = System::Drawing::Size(57, 13);
			this->startTimeLabel1->TabIndex = 1;
			this->startTimeLabel1->Text = L"Start time: ";
			// 
			// endTimeLabel1
			// 
			this->endTimeLabel1->AutoSize = true;
			this->endTimeLabel1->Location = System::Drawing::Point(12, 349);
			this->endTimeLabel1->Name = L"endTimeLabel1";
			this->endTimeLabel1->Size = System::Drawing::Size(51, 13);
			this->endTimeLabel1->TabIndex = 2;
			this->endTimeLabel1->Text = L"End time:";
			// 
			// totalMinutesLabel
			// 
			this->totalMinutesLabel->AutoSize = true;
			this->totalMinutesLabel->Location = System::Drawing::Point(255, 392);
			this->totalMinutesLabel->Name = L"totalMinutesLabel";
			this->totalMinutesLabel->Size = System::Drawing::Size(65, 13);
			this->totalMinutesLabel->TabIndex = 3;
			this->totalMinutesLabel->Text = L"Total Hours:";
			// 
			// startTimeTB1
			// 
			this->startTimeTB1->Location = System::Drawing::Point(75, 222);
			this->startTimeTB1->Name = L"startTimeTB1";
			this->startTimeTB1->Size = System::Drawing::Size(108, 20);
			this->startTimeTB1->TabIndex = 4;
			this->startTimeTB1->Text = L"1:00 pm";
			// 
			// endTimeTB1
			// 
			this->endTimeTB1->Location = System::Drawing::Point(75, 346);
			this->endTimeTB1->Name = L"endTimeTB1";
			this->endTimeTB1->Size = System::Drawing::Size(108, 20);
			this->endTimeTB1->TabIndex = 5;
			this->endTimeTB1->Text = L"5:00 pm";
			// 
			// totalHoursTB
			// 
			this->totalHoursTB->Location = System::Drawing::Point(235, 408);
			this->totalHoursTB->Name = L"totalHoursTB";
			this->totalHoursTB->ReadOnly = true;
			this->totalHoursTB->Size = System::Drawing::Size(107, 20);
			this->totalHoursTB->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 382);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 90);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Click to process timecard";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lunchTOLabel1
			// 
			this->lunchTOLabel1->AutoSize = true;
			this->lunchTOLabel1->Location = System::Drawing::Point(5, 266);
			this->lunchTOLabel1->Name = L"lunchTOLabel1";
			this->lunchTOLabel1->Size = System::Drawing::Size(80, 13);
			this->lunchTOLabel1->TabIndex = 8;
			this->lunchTOLabel1->Text = L"Lunch time out:";
			// 
			// lunchTILabel1
			// 
			this->lunchTILabel1->AutoSize = true;
			this->lunchTILabel1->Location = System::Drawing::Point(5, 307);
			this->lunchTILabel1->Name = L"lunchTILabel1";
			this->lunchTILabel1->Size = System::Drawing::Size(73, 13);
			this->lunchTILabel1->TabIndex = 9;
			this->lunchTILabel1->Text = L"Lunch time in:";
			// 
			// lunchTOTB1
			// 
			this->lunchTOTB1->Location = System::Drawing::Point(86, 263);
			this->lunchTOTB1->Name = L"lunchTOTB1";
			this->lunchTOTB1->Size = System::Drawing::Size(97, 20);
			this->lunchTOTB1->TabIndex = 10;
			// 
			// lunchTITB1
			// 
			this->lunchTITB1->Location = System::Drawing::Point(82, 304);
			this->lunchTITB1->Name = L"lunchTITB1";
			this->lunchTITB1->Size = System::Drawing::Size(101, 20);
			this->lunchTITB1->TabIndex = 11;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(12, 120);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(87, 13);
			this->nameLabel->TabIndex = 12;
			this->nameLabel->Text = L"Enter your name:";
			// 
			// day1Label
			// 
			this->day1Label->AutoSize = true;
			this->day1Label->Location = System::Drawing::Point(72, 191);
			this->day1Label->Name = L"day1Label";
			this->day1Label->Size = System::Drawing::Size(110, 13);
			this->day1Label->TabIndex = 13;
			this->day1Label->Text = L"Enter hours for Day 1:";
			// 
			// nameTB
			// 
			this->nameTB->Location = System::Drawing::Point(105, 117);
			this->nameTB->Name = L"nameTB";
			this->nameTB->Size = System::Drawing::Size(122, 20);
			this->nameTB->TabIndex = 14;
			// 
			// wageLabel
			// 
			this->wageLabel->AutoSize = true;
			this->wageLabel->Location = System::Drawing::Point(276, 123);
			this->wageLabel->Name = L"wageLabel";
			this->wageLabel->Size = System::Drawing::Size(87, 13);
			this->wageLabel->TabIndex = 15;
			this->wageLabel->Text = L"Enter your wage:";
			// 
			// wageTB
			// 
			this->wageTB->Location = System::Drawing::Point(369, 120);
			this->wageTB->Name = L"wageTB";
			this->wageTB->Size = System::Drawing::Size(108, 20);
			this->wageTB->TabIndex = 16;
			// 
			// day2Label
			// 
			this->day2Label->AutoSize = true;
			this->day2Label->Location = System::Drawing::Point(315, 191);
			this->day2Label->Name = L"day2Label";
			this->day2Label->Size = System::Drawing::Size(110, 13);
			this->day2Label->TabIndex = 17;
			this->day2Label->Text = L"Enter hours for Day 2:";
			// 
			// startTimeLabel2
			// 
			this->startTimeLabel2->AutoSize = true;
			this->startTimeLabel2->Location = System::Drawing::Point(261, 225);
			this->startTimeLabel2->Name = L"startTimeLabel2";
			this->startTimeLabel2->Size = System::Drawing::Size(54, 13);
			this->startTimeLabel2->TabIndex = 18;
			this->startTimeLabel2->Text = L"Start time:";
			// 
			// lunchTOLabel2
			// 
			this->lunchTOLabel2->AutoSize = true;
			this->lunchTOLabel2->Location = System::Drawing::Point(232, 268);
			this->lunchTOLabel2->Name = L"lunchTOLabel2";
			this->lunchTOLabel2->Size = System::Drawing::Size(80, 13);
			this->lunchTOLabel2->TabIndex = 19;
			this->lunchTOLabel2->Text = L"Lunch time out:";
			// 
			// lunchTILabel2
			// 
			this->lunchTILabel2->AutoSize = true;
			this->lunchTILabel2->Location = System::Drawing::Point(239, 310);
			this->lunchTILabel2->Name = L"lunchTILabel2";
			this->lunchTILabel2->Size = System::Drawing::Size(73, 13);
			this->lunchTILabel2->TabIndex = 20;
			this->lunchTILabel2->Text = L"Lunch time in:";
			// 
			// endTimeLabel2
			// 
			this->endTimeLabel2->AutoSize = true;
			this->endTimeLabel2->Location = System::Drawing::Point(261, 354);
			this->endTimeLabel2->Name = L"endTimeLabel2";
			this->endTimeLabel2->Size = System::Drawing::Size(51, 13);
			this->endTimeLabel2->TabIndex = 21;
			this->endTimeLabel2->Text = L"End time:";
			// 
			// startTimeTB2
			// 
			this->startTimeTB2->Location = System::Drawing::Point(316, 222);
			this->startTimeTB2->Name = L"startTimeTB2";
			this->startTimeTB2->Size = System::Drawing::Size(131, 20);
			this->startTimeTB2->TabIndex = 22;
			this->startTimeTB2->Text = L"1:00 pm";
			// 
			// lunchTOTB2
			// 
			this->lunchTOTB2->Location = System::Drawing::Point(317, 265);
			this->lunchTOTB2->Name = L"lunchTOTB2";
			this->lunchTOTB2->Size = System::Drawing::Size(129, 20);
			this->lunchTOTB2->TabIndex = 23;
			// 
			// lunchTITB2
			// 
			this->lunchTITB2->Location = System::Drawing::Point(317, 307);
			this->lunchTITB2->Name = L"lunchTITB2";
			this->lunchTITB2->Size = System::Drawing::Size(129, 20);
			this->lunchTITB2->TabIndex = 24;
			// 
			// endTimeTB2
			// 
			this->endTimeTB2->Location = System::Drawing::Point(318, 351);
			this->endTimeTB2->Name = L"endTimeTB2";
			this->endTimeTB2->Size = System::Drawing::Size(128, 20);
			this->endTimeTB2->TabIndex = 25;
			this->endTimeTB2->Text = L"5:00 pm";
			// 
			// salaryTB
			// 
			this->salaryTB->Location = System::Drawing::Point(389, 408);
			this->salaryTB->Name = L"salaryTB";
			this->salaryTB->ReadOnly = true;
			this->salaryTB->Size = System::Drawing::Size(108, 20);
			this->salaryTB->TabIndex = 26;
			// 
			// salaryLabel
			// 
			this->salaryLabel->AutoSize = true;
			this->salaryLabel->Location = System::Drawing::Point(410, 389);
			this->salaryLabel->Name = L"salaryLabel";
			this->salaryLabel->Size = System::Drawing::Size(66, 13);
			this->salaryLabel->TabIndex = 27;
			this->salaryLabel->Text = L"Total Salary:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(509, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->printToolStripMenuItem, this->printPreviewToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// printPreviewToolStripMenuItem
			// 
			this->printPreviewToolStripMenuItem->Name = L"printPreviewToolStripMenuItem";
			this->printPreviewToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->printPreviewToolStripMenuItem->Text = L"Print Preview";
			this->printPreviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printPreviewToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(509, 484);
			this->Controls->Add(this->salaryLabel);
			this->Controls->Add(this->salaryTB);
			this->Controls->Add(this->endTimeTB2);
			this->Controls->Add(this->lunchTITB2);
			this->Controls->Add(this->lunchTOTB2);
			this->Controls->Add(this->startTimeTB2);
			this->Controls->Add(this->endTimeLabel2);
			this->Controls->Add(this->lunchTILabel2);
			this->Controls->Add(this->lunchTOLabel2);
			this->Controls->Add(this->startTimeLabel2);
			this->Controls->Add(this->day2Label);
			this->Controls->Add(this->wageTB);
			this->Controls->Add(this->wageLabel);
			this->Controls->Add(this->nameTB);
			this->Controls->Add(this->day1Label);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->lunchTITB1);
			this->Controls->Add(this->lunchTOTB1);
			this->Controls->Add(this->lunchTILabel1);
			this->Controls->Add(this->lunchTOLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->totalHoursTB);
			this->Controls->Add(this->endTimeTB1);
			this->Controls->Add(this->startTimeTB1);
			this->Controls->Add(this->totalMinutesLabel);
			this->Controls->Add(this->endTimeLabel1);
			this->Controls->Add(this->startTimeLabel1);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double totalHours;
		bool fileExists = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (this->nameTB->Text == "")
			{
				throw;
			}
		}
		catch (Exception^ emptyInput)
		{
			MessageBox::Show("Please enter a name.");
		}
		try {


			DateTime startTime1;
			DateTime endTime1;
			DateTime lunchOut1;
			DateTime lunchIn1;

			startTime1 = Convert::ToDateTime(this->startTimeTB1->Text);
			endTime1 = Convert::ToDateTime(this->endTimeTB1->Text);
			lunchOut1 = Convert::ToDateTime(this->lunchTOTB1->Text);
			lunchIn1 = Convert::ToDateTime(this->lunchTITB1->Text);

			TimeSpan day1FirstHalf = lunchOut1 - startTime1;
			TimeSpan day1SecondHalf = endTime1 - lunchIn1;

TimeSpan day1Total = day1FirstHalf + day1SecondHalf;

DateTime startTime2;
DateTime endTime2;
DateTime lunchOut2;
DateTime lunchIn2;

startTime2 = Convert::ToDateTime(this->startTimeTB2->Text);
endTime2 = Convert::ToDateTime(this->endTimeTB2->Text);
lunchOut2 = Convert::ToDateTime(this->lunchTOTB2->Text);
lunchIn2 = Convert::ToDateTime(this->lunchTITB2->Text);

TimeSpan day2FirstHalf = lunchOut2 - startTime2;
TimeSpan day2SecondHalf = endTime2 - lunchIn2;

TimeSpan day2Total = day2FirstHalf + day2SecondHalf;

TimeSpan totalHoursWorked = day1Total + day2Total;

totalHours = totalHoursWorked.TotalHours;
double wage = Convert::ToDouble(this->wageTB->Text);
double totalSalary = totalHours * wage;

this->totalHoursTB->Text = Convert::ToString(totalHours);
this->salaryTB->Text = Convert::ToString(totalSalary);

this->nameTB->ReadOnly = true;
this->wageTB->ReadOnly = true;
this->startTimeTB1->ReadOnly = true;
this->startTimeTB2->ReadOnly = true;
this->lunchTOTB1->ReadOnly = true;
this->lunchTOTB2->ReadOnly = true;
this->lunchTITB1->ReadOnly = true;
this->lunchTITB2->ReadOnly = true;
this->endTimeTB1->ReadOnly = true;
this->endTimeTB2->ReadOnly = true;

		}
		catch (FormatException^ myException)
		{
			MessageBox::Show("Invalid Format");
		}
		catch (...) // catches all exceptions. good to find other exceptions.
		{
			MessageBox::Show("There is a problem.");
		}

	}


private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fileExists = false;
	this->startTimeTB1->Text = "";
	this->startTimeTB2->Text = "";
	this->lunchTOTB1->Text = "";
	this->lunchTOTB2->Text = "";
	this->lunchTITB1->Text = "";
	this->lunchTITB2->Text = "";
	this->endTimeTB1->Text = "";
	this->endTimeTB2->Text = "";
	this->nameTB->Text = "";
	this->wageTB->Text = "";
	this->totalHoursTB->Text = "";
	this->salaryTB->Text = "";
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	Brush^ myBrush = gcnew SolidBrush(System::Drawing::Color::Black); // create a pen and a font //
	System::Drawing::Font^ myFont = gcnew System::Drawing::Font("Arial", 10);
	// draw the labels and textboxes onto our document // 
	e->Graphics->DrawString(this->titleLabel->Text, myFont, myBrush, this->titleLabel->Location);
	e->Graphics->DrawString(this->nameLabel->Text, myFont, myBrush, this->nameLabel->Location);
	e->Graphics->DrawString(this->nameTB->Text, myFont, myBrush, this->nameTB->Location);
	e->Graphics->DrawString(this->wageLabel->Text, myFont, myBrush, this->wageLabel->Location);
	e->Graphics->DrawString(this->wageTB->Text, myFont, myBrush, this->wageTB->Location);
	e->Graphics->DrawString(this->startTimeTB1->Text, myFont, myBrush, this->startTimeTB1->Location);
	e->Graphics->DrawString(this->startTimeLabel1->Text, myFont, myBrush, this->startTimeLabel1->Location);
	e->Graphics->DrawString(this->startTimeTB2->Text, myFont, myBrush, this->startTimeTB2->Location);
	e->Graphics->DrawString(this->startTimeLabel2->Text, myFont, myBrush, this->startTimeLabel2->Location);
	e->Graphics->DrawString(this->lunchTOLabel1->Text, myFont, myBrush, this->lunchTOLabel1->Location);
	e->Graphics->DrawString(this->lunchTOTB1->Text, myFont, myBrush, this->lunchTOTB1->Location);
	e->Graphics->DrawString(this->lunchTOLabel2->Text, myFont, myBrush, this->lunchTOLabel2->Location);
	e->Graphics->DrawString(this->lunchTOTB2->Text, myFont, myBrush, this->lunchTOTB2->Location);
	e->Graphics->DrawString(this->lunchTILabel1->Text, myFont, myBrush, this->lunchTILabel1->Location);
	e->Graphics->DrawString(this->lunchTITB1->Text, myFont, myBrush, this->lunchTITB1->Location);
	e->Graphics->DrawString(this->lunchTILabel2->Text, myFont, myBrush, this->lunchTILabel2->Location);
	e->Graphics->DrawString(this->lunchTITB2->Text, myFont, myBrush, this->lunchTITB2->Location);
	e->Graphics->DrawString(this->endTimeLabel1->Text, myFont, myBrush, this->endTimeLabel1->Location);
	e->Graphics->DrawString(this->endTimeTB1->Text, myFont, myBrush, this->endTimeTB1->Location);
	e->Graphics->DrawString(this->endTimeLabel2->Text, myFont, myBrush, this->endTimeLabel2->Location);
	e->Graphics->DrawString(this->endTimeTB2->Text, myFont, myBrush, this->endTimeTB2->Location);
	e->Graphics->DrawString(this->totalMinutesLabel->Text, myFont, myBrush, this->totalMinutesLabel->Location);
	e->Graphics->DrawString(this->totalHoursTB->Text, myFont, myBrush, this->totalHoursTB->Location);
	e->Graphics->DrawString(this->salaryLabel->Text, myFont, myBrush, this->salaryLabel->Location);
	e->Graphics->DrawString(this->salaryTB->Text, myFont, myBrush, this->salaryTB->Location);
}
private: System::Void printToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->printDialog1->Document = this->printDocument1;
	if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		printDocument1->Print();
	}
}
private: System::Void printPreviewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->printPreviewDialog1->Document = this->printDocument1;
	if (printPreviewDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		printDocument1->Print();
	}
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Title = "This is a title for the dialog box";
	saveFileDialog1->FileName = "Default name";
	saveFileDialog1->DefaultExt = ".txt";
	saveFileDialog1->Filter = "Text Files|*.txt";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);

		StreamWriter^ outputObject = gcnew StreamWriter(fileName);

		outputObject->WriteLine(this->nameTB->Text);
		outputObject->WriteLine(this->wageTB->Text);
		outputObject->WriteLine(this->startTimeTB1->Text);
		outputObject->WriteLine(this->startTimeTB2->Text);
		outputObject->WriteLine(this->lunchTOTB1->Text);
		outputObject->WriteLine(this->lunchTOTB2->Text);
		outputObject->WriteLine(this->lunchTITB1->Text);
		outputObject->WriteLine(this->lunchTITB2->Text);
		outputObject->WriteLine(this->endTimeTB1->Text);
		outputObject->WriteLine(this->endTimeTB2->Text);
		outputObject->WriteLine(this->totalHoursTB->Text);
		outputObject->WriteLine(this->salaryTB->Text);

		outputObject->Close();
		fileExists = true;
	}
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Title = "This is a title for the dialog box";
	openFileDialog1->FileName = "Default name";
	openFileDialog1->DefaultExt = ".txt";
	openFileDialog1->Filter = "Text Files|*.txt";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileStream^ fileName = gcnew FileStream(openFileDialog1->FileName, FileMode::OpenOrCreate);

		StreamReader^ inputObject = gcnew StreamReader(fileName);

		this->nameTB->Text = inputObject->ReadLine();
		this->wageTB->Text = inputObject->ReadLine();
		this->startTimeTB1->Text = inputObject->ReadLine();
		this->startTimeTB2->Text = inputObject->ReadLine();
		this->lunchTOTB1->Text = inputObject->ReadLine();
		this->lunchTOTB2->Text = inputObject->ReadLine();
		this->lunchTITB1->Text = inputObject->ReadLine();
		this->lunchTITB2->Text = inputObject->ReadLine();
		this->endTimeTB1->Text = inputObject->ReadLine();
		this->endTimeTB2->Text = inputObject->ReadLine();
		this->totalHoursTB->Text = inputObject->ReadLine();
		this->salaryTB->Text = inputObject->ReadLine();

		inputObject->Close();
	}
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fileExists == true) 
	{
		FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::OpenOrCreate);
		StreamWriter^ outputObject = gcnew StreamWriter(fileName);

		outputObject->WriteLine(this->nameTB->Text);
		outputObject->WriteLine(this->wageTB->Text);
		outputObject->WriteLine(this->startTimeTB1->Text);
		outputObject->WriteLine(this->startTimeTB2->Text);
		outputObject->WriteLine(this->lunchTOTB1->Text);
		outputObject->WriteLine(this->lunchTOTB2->Text);
		outputObject->WriteLine(this->lunchTITB1->Text);
		outputObject->WriteLine(this->lunchTITB2->Text);
		outputObject->WriteLine(this->endTimeTB1->Text);
		outputObject->WriteLine(this->endTimeTB2->Text);
		outputObject->WriteLine(this->totalHoursTB->Text);
		outputObject->WriteLine(this->salaryTB->Text);
		outputObject->Close();
	}
	else if (fileExists == false)
	{
		saveFileDialog1->FileName = "";
		saveFileDialog1->FileName = "Default Name";
		saveFileDialog1->DefaultExt = ".txt";
		saveFileDialog1->Filter = "Text Files|*.txt";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);

			StreamWriter^ outputObject = gcnew StreamWriter(fileName);

			outputObject->WriteLine(this->nameTB->Text);
			outputObject->WriteLine(this->wageTB->Text);
			outputObject->WriteLine(this->startTimeTB1->Text);
			outputObject->WriteLine(this->startTimeTB2->Text);
			outputObject->WriteLine(this->lunchTOTB1->Text);
			outputObject->WriteLine(this->lunchTOTB2->Text);
			outputObject->WriteLine(this->lunchTITB1->Text);
			outputObject->WriteLine(this->lunchTITB2->Text);
			outputObject->WriteLine(this->endTimeTB1->Text);
			outputObject->WriteLine(this->endTimeTB2->Text);
			outputObject->WriteLine(this->totalHoursTB->Text);
			outputObject->WriteLine(this->salaryTB->Text);

			outputObject->Close();
			fileExists = true;
		}
	}
}
};
}
