#pragma once
#include <string>
#include "PostfixAlgorithm.h"
#include "stdafx.h"

#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			Function_Index=0;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Num_0;
	protected: 
	private: System::Windows::Forms::Button^  button_operator_equ;
	private: System::Windows::Forms::Button^  button_Num_1;
	private: System::Windows::Forms::Button^  button_Num_2;
	private: System::Windows::Forms::Button^  button_Num_3;
	private: System::Windows::Forms::Button^  button_operator_plus;
	private: System::Windows::Forms::Button^  button_operator_minus;
	private: System::Windows::Forms::Button^  button_Num_4;
	private: System::Windows::Forms::Button^  button_Num_5;
	private: System::Windows::Forms::Button^  button_Num_6;
	private: System::Windows::Forms::Button^  button_operator_product;
	private: System::Windows::Forms::Button^  button_operator_divide;
	private: System::Windows::Forms::Button^  button_Num_7;
	private: System::Windows::Forms::Button^  button_Num_8;
	private: System::Windows::Forms::Button^  button_Num_9;
	private: System::Windows::Forms::Button^  button_instr_delete;
	private: System::Windows::Forms::Button^  button_instr_allclear;
	private: System::Windows::Forms::TextBox^  textBox_function;
	private: System::Windows::Forms::Label^  label_function;
	private: System::Windows::Forms::TextBox^  textBox_answer;
	private: System::Windows::Forms::Label^  label_answer;
	private: System::Windows::Forms::Button^  button_pi;
	private: System::Windows::Forms::Button^  button_exponential;
	private: System::Windows::Forms::Button^  button_dot;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_Num_0 = (gcnew System::Windows::Forms::Button());
			this->button_operator_equ = (gcnew System::Windows::Forms::Button());
			this->button_Num_1 = (gcnew System::Windows::Forms::Button());
			this->button_Num_2 = (gcnew System::Windows::Forms::Button());
			this->button_Num_3 = (gcnew System::Windows::Forms::Button());
			this->button_operator_plus = (gcnew System::Windows::Forms::Button());
			this->button_operator_minus = (gcnew System::Windows::Forms::Button());
			this->button_Num_4 = (gcnew System::Windows::Forms::Button());
			this->button_Num_5 = (gcnew System::Windows::Forms::Button());
			this->button_Num_6 = (gcnew System::Windows::Forms::Button());
			this->button_operator_product = (gcnew System::Windows::Forms::Button());
			this->button_operator_divide = (gcnew System::Windows::Forms::Button());
			this->button_Num_7 = (gcnew System::Windows::Forms::Button());
			this->button_Num_8 = (gcnew System::Windows::Forms::Button());
			this->button_Num_9 = (gcnew System::Windows::Forms::Button());
			this->button_instr_delete = (gcnew System::Windows::Forms::Button());
			this->button_instr_allclear = (gcnew System::Windows::Forms::Button());
			this->textBox_function = (gcnew System::Windows::Forms::TextBox());
			this->label_function = (gcnew System::Windows::Forms::Label());
			this->textBox_answer = (gcnew System::Windows::Forms::TextBox());
			this->label_answer = (gcnew System::Windows::Forms::Label());
			this->button_pi = (gcnew System::Windows::Forms::Button());
			this->button_exponential = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Num_0
			// 
			this->button_Num_0->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_0->Location = System::Drawing::Point(98, 253);
			this->button_Num_0->Name = L"button_Num_0";
			this->button_Num_0->Size = System::Drawing::Size(65, 40);
			this->button_Num_0->TabIndex = 0;
			this->button_Num_0->Text = L"0";
			this->button_Num_0->UseVisualStyleBackColor = true;
			this->button_Num_0->Click += gcnew System::EventHandler(this, &Form1::button_Num_0_Click);
			// 
			// button_operator_equ
			// 
			this->button_operator_equ->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_operator_equ->Location = System::Drawing::Point(356, 253);
			this->button_operator_equ->Name = L"button_operator_equ";
			this->button_operator_equ->Size = System::Drawing::Size(65, 40);
			this->button_operator_equ->TabIndex = 4;
			this->button_operator_equ->Text = L"=";
			this->button_operator_equ->UseVisualStyleBackColor = true;
			this->button_operator_equ->Click += gcnew System::EventHandler(this, &Form1::button_operator_equ_Click);
			// 
			// button_Num_1
			// 
			this->button_Num_1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_1->Location = System::Drawing::Point(12, 201);
			this->button_Num_1->Name = L"button_Num_1";
			this->button_Num_1->Size = System::Drawing::Size(65, 40);
			this->button_Num_1->TabIndex = 5;
			this->button_Num_1->Text = L"1";
			this->button_Num_1->UseVisualStyleBackColor = true;
			this->button_Num_1->Click += gcnew System::EventHandler(this, &Form1::button_Num_1_Click);
			// 
			// button_Num_2
			// 
			this->button_Num_2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_2->Location = System::Drawing::Point(98, 201);
			this->button_Num_2->Name = L"button_Num_2";
			this->button_Num_2->Size = System::Drawing::Size(65, 40);
			this->button_Num_2->TabIndex = 6;
			this->button_Num_2->Text = L"2";
			this->button_Num_2->UseVisualStyleBackColor = true;
			this->button_Num_2->Click += gcnew System::EventHandler(this, &Form1::button_Num_2_Click);
			// 
			// button_Num_3
			// 
			this->button_Num_3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_3->Location = System::Drawing::Point(184, 201);
			this->button_Num_3->Name = L"button_Num_3";
			this->button_Num_3->Size = System::Drawing::Size(65, 40);
			this->button_Num_3->TabIndex = 7;
			this->button_Num_3->Text = L"3";
			this->button_Num_3->UseVisualStyleBackColor = true;
			this->button_Num_3->Click += gcnew System::EventHandler(this, &Form1::button_Num_3_Click);
			// 
			// button_operator_plus
			// 
			this->button_operator_plus->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_operator_plus->Location = System::Drawing::Point(270, 201);
			this->button_operator_plus->Name = L"button_operator_plus";
			this->button_operator_plus->Size = System::Drawing::Size(65, 40);
			this->button_operator_plus->TabIndex = 8;
			this->button_operator_plus->Text = L"+";
			this->button_operator_plus->UseVisualStyleBackColor = true;
			this->button_operator_plus->Click += gcnew System::EventHandler(this, &Form1::button_operator_plus_Click);
			// 
			// button_operator_minus
			// 
			this->button_operator_minus->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_operator_minus->Location = System::Drawing::Point(356, 201);
			this->button_operator_minus->Name = L"button_operator_minus";
			this->button_operator_minus->Size = System::Drawing::Size(65, 40);
			this->button_operator_minus->TabIndex = 9;
			this->button_operator_minus->Text = L"-";
			this->button_operator_minus->UseVisualStyleBackColor = true;
			this->button_operator_minus->Click += gcnew System::EventHandler(this, &Form1::button_operator_minus_Click);
			// 
			// button_Num_4
			// 
			this->button_Num_4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_4->Location = System::Drawing::Point(12, 149);
			this->button_Num_4->Name = L"button_Num_4";
			this->button_Num_4->Size = System::Drawing::Size(65, 40);
			this->button_Num_4->TabIndex = 10;
			this->button_Num_4->Text = L"4";
			this->button_Num_4->UseVisualStyleBackColor = true;
			this->button_Num_4->Click += gcnew System::EventHandler(this, &Form1::button_Num_4_Click);
			// 
			// button_Num_5
			// 
			this->button_Num_5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_5->Location = System::Drawing::Point(98, 149);
			this->button_Num_5->Name = L"button_Num_5";
			this->button_Num_5->Size = System::Drawing::Size(65, 40);
			this->button_Num_5->TabIndex = 11;
			this->button_Num_5->Text = L"5";
			this->button_Num_5->UseVisualStyleBackColor = true;
			this->button_Num_5->Click += gcnew System::EventHandler(this, &Form1::button_Num_5_Click);
			// 
			// button_Num_6
			// 
			this->button_Num_6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_6->Location = System::Drawing::Point(184, 149);
			this->button_Num_6->Name = L"button_Num_6";
			this->button_Num_6->Size = System::Drawing::Size(65, 40);
			this->button_Num_6->TabIndex = 12;
			this->button_Num_6->Text = L"6";
			this->button_Num_6->UseVisualStyleBackColor = true;
			this->button_Num_6->Click += gcnew System::EventHandler(this, &Form1::button_Num_6_Click);
			// 
			// button_operator_product
			// 
			this->button_operator_product->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_operator_product->Location = System::Drawing::Point(270, 149);
			this->button_operator_product->Name = L"button_operator_product";
			this->button_operator_product->Size = System::Drawing::Size(65, 40);
			this->button_operator_product->TabIndex = 13;
			this->button_operator_product->Text = L"×";
			this->button_operator_product->UseVisualStyleBackColor = true;
			this->button_operator_product->Click += gcnew System::EventHandler(this, &Form1::button_operator_product_Click);
			// 
			// button_operator_divide
			// 
			this->button_operator_divide->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_operator_divide->Location = System::Drawing::Point(356, 149);
			this->button_operator_divide->Name = L"button_operator_divide";
			this->button_operator_divide->Size = System::Drawing::Size(65, 40);
			this->button_operator_divide->TabIndex = 14;
			this->button_operator_divide->Text = L"÷";
			this->button_operator_divide->UseVisualStyleBackColor = true;
			this->button_operator_divide->Click += gcnew System::EventHandler(this, &Form1::button_operator_divide_Click);
			// 
			// button_Num_7
			// 
			this->button_Num_7->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_7->Location = System::Drawing::Point(12, 97);
			this->button_Num_7->Name = L"button_Num_7";
			this->button_Num_7->Size = System::Drawing::Size(65, 40);
			this->button_Num_7->TabIndex = 15;
			this->button_Num_7->Text = L"7";
			this->button_Num_7->UseVisualStyleBackColor = true;
			this->button_Num_7->Click += gcnew System::EventHandler(this, &Form1::button_Num_7_Click);
			// 
			// button_Num_8
			// 
			this->button_Num_8->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_8->Location = System::Drawing::Point(98, 97);
			this->button_Num_8->Name = L"button_Num_8";
			this->button_Num_8->Size = System::Drawing::Size(65, 40);
			this->button_Num_8->TabIndex = 16;
			this->button_Num_8->Text = L"8";
			this->button_Num_8->UseVisualStyleBackColor = true;
			this->button_Num_8->Click += gcnew System::EventHandler(this, &Form1::button_Num_8_Click);
			// 
			// button_Num_9
			// 
			this->button_Num_9->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Num_9->Location = System::Drawing::Point(184, 97);
			this->button_Num_9->Name = L"button_Num_9";
			this->button_Num_9->Size = System::Drawing::Size(65, 40);
			this->button_Num_9->TabIndex = 17;
			this->button_Num_9->Text = L"9";
			this->button_Num_9->UseVisualStyleBackColor = true;
			this->button_Num_9->Click += gcnew System::EventHandler(this, &Form1::button_Num_9_Click);
			// 
			// button_instr_delete
			// 
			this->button_instr_delete->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_instr_delete->Location = System::Drawing::Point(270, 97);
			this->button_instr_delete->Name = L"button_instr_delete";
			this->button_instr_delete->Size = System::Drawing::Size(65, 40);
			this->button_instr_delete->TabIndex = 18;
			this->button_instr_delete->Text = L"DEL";
			this->button_instr_delete->UseVisualStyleBackColor = true;
			this->button_instr_delete->Click += gcnew System::EventHandler(this, &Form1::button_cmd_delete_Click);
			// 
			// button_instr_allclear
			// 
			this->button_instr_allclear->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_instr_allclear->Location = System::Drawing::Point(356, 97);
			this->button_instr_allclear->Name = L"button_instr_allclear";
			this->button_instr_allclear->Size = System::Drawing::Size(65, 40);
			this->button_instr_allclear->TabIndex = 19;
			this->button_instr_allclear->Text = L"AC";
			this->button_instr_allclear->UseVisualStyleBackColor = true;
			this->button_instr_allclear->Click += gcnew System::EventHandler(this, &Form1::button_cmd_allclear_Click);
			// 
			// textBox_function
			// 
			this->textBox_function->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox_function->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox_function->Location = System::Drawing::Point(12, 31);
			this->textBox_function->Name = L"textBox_function";
			this->textBox_function->ReadOnly = true;
			this->textBox_function->Size = System::Drawing::Size(323, 36);
			this->textBox_function->TabIndex = 20;
			// 
			// label_function
			// 
			this->label_function->AutoSize = true;
			this->label_function->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label_function->Location = System::Drawing::Point(13, 13);
			this->label_function->Name = L"label_function";
			this->label_function->Size = System::Drawing::Size(63, 16);
			this->label_function->TabIndex = 21;
			this->label_function->Text = L"Function";
			// 
			// textBox_answer
			// 
			this->textBox_answer->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox_answer->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox_answer->Location = System::Drawing::Point(341, 31);
			this->textBox_answer->Name = L"textBox_answer";
			this->textBox_answer->ReadOnly = true;
			this->textBox_answer->Size = System::Drawing::Size(80, 36);
			this->textBox_answer->TabIndex = 22;
			// 
			// label_answer
			// 
			this->label_answer->AutoSize = true;
			this->label_answer->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label_answer->Location = System::Drawing::Point(342, 9);
			this->label_answer->Name = L"label_answer";
			this->label_answer->Size = System::Drawing::Size(56, 16);
			this->label_answer->TabIndex = 23;
			this->label_answer->Text = L"Answer";
			// 
			// button_pi
			// 
			this->button_pi->Font = (gcnew System::Drawing::Font(L"MingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_pi->Location = System::Drawing::Point(184, 253);
			this->button_pi->Name = L"button_pi";
			this->button_pi->Size = System::Drawing::Size(65, 40);
			this->button_pi->TabIndex = 24;
			this->button_pi->Text = L"π";
			this->button_pi->UseVisualStyleBackColor = true;
			this->button_pi->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button_exponential
			// 
			this->button_exponential->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20));
			this->button_exponential->Location = System::Drawing::Point(12, 253);
			this->button_exponential->Name = L"button_exponential";
			this->button_exponential->Size = System::Drawing::Size(65, 40);
			this->button_exponential->TabIndex = 25;
			this->button_exponential->Text = L"e";
			this->button_exponential->UseVisualStyleBackColor = true;
			this->button_exponential->Click += gcnew System::EventHandler(this, &Form1::button_exponential_Click);
			// 
			// button_dot
			// 
			this->button_dot->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20));
			this->button_dot->Location = System::Drawing::Point(270, 253);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(65, 40);
			this->button_dot->TabIndex = 26;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &Form1::button_dot_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 311);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_exponential);
			this->Controls->Add(this->button_pi);
			this->Controls->Add(this->label_answer);
			this->Controls->Add(this->textBox_answer);
			this->Controls->Add(this->label_function);
			this->Controls->Add(this->textBox_function);
			this->Controls->Add(this->button_instr_allclear);
			this->Controls->Add(this->button_instr_delete);
			this->Controls->Add(this->button_Num_9);
			this->Controls->Add(this->button_Num_8);
			this->Controls->Add(this->button_Num_7);
			this->Controls->Add(this->button_operator_divide);
			this->Controls->Add(this->button_operator_product);
			this->Controls->Add(this->button_Num_6);
			this->Controls->Add(this->button_Num_5);
			this->Controls->Add(this->button_Num_4);
			this->Controls->Add(this->button_operator_minus);
			this->Controls->Add(this->button_operator_plus);
			this->Controls->Add(this->button_Num_3);
			this->Controls->Add(this->button_Num_2);
			this->Controls->Add(this->button_Num_1);
			this->Controls->Add(this->button_operator_equ);
			this->Controls->Add(this->button_Num_0);
			this->MaximumSize = System::Drawing::Size(450, 350);
			this->MinimumSize = System::Drawing::Size(450, 350);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int Function_Index;
	

#pragma region BUTTON_NUMBER
	private: void EditFunction(String^ s)
			{
				this->textBox_function->Text=this->textBox_function->Text->Insert(Function_Index,s);
				Function_Index++;
				textBox_function->Focus();
				textBox_function->Select(Function_Index,0);
			}
	private: System::Void button_Num_0_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("0");
			 }
	private: System::Void button_Num_1_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("1");
			 }
	private: System::Void button_Num_2_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("2");
			 }
	private: System::Void button_Num_3_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("3");
			 }
	private: System::Void button_Num_4_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("4");
			 }
	private: System::Void button_Num_5_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("5");
			 }
	private: System::Void button_Num_6_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("6");
			 }
	private: System::Void button_Num_7_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("7");
			 }
	private: System::Void button_Num_8_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("8");
			 }
	private: System::Void button_Num_9_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("9");
			 }
#pragma endregion

#pragma region BUTTON_OPERATOR
	private: System::Void button_operator_dot_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction(".");
			 }
	private: System::Void button_operator_plus_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("+");
			 }
	private: System::Void button_operator_minus_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("-");
			 }
	private: System::Void button_operator_product_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("*");
			 }
	private: System::Void button_operator_divide_Click(System::Object^  sender, System::EventArgs^  e) {
				 EditFunction("/");
			 }

	private: System::Void button_operator_equ_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->textBox_function->Text=textBox_function->Text;

				 Postfix_Algorithm();
			 }
	
#pragma endregion

#pragma region CALCULATOR_COMMAMD
	private: System::Void button_cmd_allclear_Click(System::Object^  sender, System::EventArgs^  e) {
				 Function_Index=0;
				 textBox_function->Clear();
			 }
	private: System::Void button_cmd_delete_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox_function->TextLength>Function_Index-1&&Function_Index>0){
					 textBox_function->Focus();
					 textBox_function->Select(--Function_Index,1);
					 textBox_function->SelectedText="";
				 }
			 }
#pragma endregion

	private: void Postfix_Algorithm()
			 {
				 array<Char>^ func=textBox_function->Text->ToCharArray();

				 int length=func->Length+1;
				 char *c=new char[length];

				 for(int i=0;i<length-1;i++)
						 c[i]=func[i];
				 c[length-1]='\0';

				 textBox_answer->Text=Calculate_PostfixFunction(PostfixAlgorithm(c)).ToString("0.000");
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button_exponential_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button_dot_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}

