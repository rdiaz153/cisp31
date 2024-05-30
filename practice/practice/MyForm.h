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


	private: System::Windows::Forms::TextBox^ totalMinutesTB;

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
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->startTimeLabel1 = (gcnew System::Windows::Forms::Label());
			this->endTimeLabel1 = (gcnew System::Windows::Forms::Label());
			this->totalMinutesLabel = (gcnew System::Windows::Forms::Label());
			this->startTimeTB1 = (gcnew System::Windows::Forms::TextBox());
			this->endTimeTB1 = (gcnew System::Windows::Forms::TextBox());
			this->totalMinutesTB = (gcnew System::Windows::Forms::TextBox());
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
			// 
			// endTimeTB1
			// 
			this->endTimeTB1->Location = System::Drawing::Point(75, 346);
			this->endTimeTB1->Name = L"endTimeTB1";
			this->endTimeTB1->Size = System::Drawing::Size(108, 20);
			this->endTimeTB1->TabIndex = 5;
			// 
			// totalMinutesTB
			// 
			this->totalMinutesTB->Location = System::Drawing::Point(235, 408);
			this->totalMinutesTB->Name = L"totalMinutesTB";
			this->totalMinutesTB->ReadOnly = true;
			this->totalMinutesTB->Size = System::Drawing::Size(107, 20);
			this->totalMinutesTB->TabIndex = 6;
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
			this->Controls->Add(this->totalMinutesTB);
			this->Controls->Add(this->endTimeTB1);
			this->Controls->Add(this->startTimeTB1);
			this->Controls->Add(this->totalMinutesLabel);
			this->Controls->Add(this->endTimeLabel1);
			this->Controls->Add(this->startTimeLabel1);
			this->Controls->Add(this->titleLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double totalHours;
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

			this->totalMinutesTB->Text = Convert::ToString(totalHours);
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


};
}
