#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>

bool readStringArrayFromFile(array<System::Int32, 2>^ twoDArray, int& number_read);

namespace Homework2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(32, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(442, 296);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 379);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		int number;
		using namespace System;
		array<Int32, 2>^ twoDArray = gcnew array<Int32, 2>(9, 9);
		readStringArrayFromFile(twoDArray, number);
	}
	
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		



		

		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//create graphic object
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		//create a pen
		Pen^ pen = gcnew Pen(Color::Red);
		//Create a 9*9 Board with each cell a size of 30
		int numOfCandR = 9;
		int cellSize = 30;
		for (int i = 0; i <= numOfCandR; i++)
		{
			// Vertical lines
			g->DrawLine(pen, i * cellSize, 0, i * cellSize, numOfCandR * cellSize);
			// Horizontal lines
			g->DrawLine(pen, 0, i * cellSize, numOfCandR * cellSize, i * cellSize);
		}

		//Bitmap^ bmp = gcnew Bitmap(L"sparky.bmp");
		//Drawing the image on the position 0,0 (up-left corner)
		//g->DrawImage(bmp, 0, 0);


	}
};
}
