#pragma once
#include <string>
#include <cstdlib>
#include <ctime>

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
		int currentGuessDiff;
		int lastGuessDiff = 10;
		int randomNumber;
	public:
		MyForm(void)
		{
			InitializeComponent();
			srand(time(0));
			randomNumber = (rand() % 10) + 1;
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ mainTitleLabel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->mainTitleLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(226, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(249, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Click me!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// mainTitleLabel
			// 
			this->mainTitleLabel->AutoSize = true;
			this->mainTitleLabel->BackColor = System::Drawing::Color::LightCyan;
			this->mainTitleLabel->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTitleLabel->ForeColor = System::Drawing::Color::Black;
			this->mainTitleLabel->Location = System::Drawing::Point(200, 35);
			this->mainTitleLabel->Name = L"mainTitleLabel";
			this->mainTitleLabel->Size = System::Drawing::Size(172, 23);
			this->mainTitleLabel->TabIndex = 2;
			this->mainTitleLabel->Text = L"Guessing Game";
			this->mainTitleLabel->Click += gcnew System::EventHandler(this, &MyForm::mainTitleLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(265, 364);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Again\?";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(237, 240);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(214, 94);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(144, 91);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"I have a number between 1 and 10. Can you guess my number\?";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(583, 438);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mainTitleLabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mainTitleLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	int myNumber;
	myNumber = Convert::ToInt64(this->textBox1->Text);
	currentGuessDiff = std::abs(randomNumber - myNumber);

	if (myNumber > randomNumber)
	{
		this->textBox2->Text = L"Too high.";
	}
	else {
		this->textBox2->Text = L"Too low.";
	}
	
	if (myNumber != randomNumber)
	 {
		if (currentGuessDiff <= 3)
		{
			this->BackColor = System::Drawing::Color::Red;
		}
		else {
			this->BackColor = System::Drawing::Color::Blue;
		}

	}

	if (myNumber == randomNumber)
	{
		this->BackColor = System::Drawing::Color::Green;
		this->textBox2->Text = L"Correct!";
		this->textBox1->ReadOnly = true;
		this->button2->Visible = true;
		this->label2->Visible = true;
		lastGuessDiff = 10;
	}


}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	// generate a new random number
	randomNumber = rand() % 10 + 1;
	//change background back to default color
	this->BackColor = System::Drawing::SystemColors::ActiveCaption;
	//reset input textbox to editable.
	this->textBox1->ReadOnly = false;
	this->textBox2->Text = L"I have a number between 1 and 10. Can you guess my number\?";
	this->textBox1->Text = "";


}


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
