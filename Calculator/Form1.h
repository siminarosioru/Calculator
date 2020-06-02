#pragma once

#include "FunctionsCalculator.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		//variable String holds userInput
		String^ userInput = String::Empty;

		//declaration of variables
		double op1, op2, result;
		char operation;

	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ btnImpartireaLui1Lax;
	private: System::Windows::Forms::Button^ btnSquareRoot;
	private: System::Windows::Forms::Button^ btnCubeRoot;
	private: System::Windows::Forms::TextBox^ userInputTxtBx;
	public:

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn7;
	protected:
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btnPatrat;
	private: System::Windows::Forms::Button^ btnProcent;
	private: System::Windows::Forms::Button^ btnEqual;
	private: System::Windows::Forms::Button^ btnDivision;
	private: System::Windows::Forms::Button^ btnMultiplication;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnPlus;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btnPatrat = (gcnew System::Windows::Forms::Button());
			this->btnProcent = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->userInputTxtBx = (gcnew System::Windows::Forms::TextBox());
			this->btnImpartireaLui1Lax = (gcnew System::Windows::Forms::Button());
			this->btnSquareRoot = (gcnew System::Windows::Forms::Button());
			this->btnCubeRoot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(30, 101);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(95, 39);
			this->btn7->TabIndex = 11;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btnDot
			// 
			this->btnDot->Location = System::Drawing::Point(297, 236);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(95, 39);
			this->btnDot->TabIndex = 12;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &Form1::btnDot_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(161, 236);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(95, 39);
			this->btnReset->TabIndex = 13;
			this->btnReset->Text = L"C";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(30, 236);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(95, 39);
			this->btn0->TabIndex = 20;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(297, 191);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(95, 39);
			this->btn3->TabIndex = 15;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(162, 191);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(95, 39);
			this->btn2->TabIndex = 16;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(30, 191);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(95, 39);
			this->btn1->TabIndex = 17;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(297, 146);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(95, 39);
			this->btn6->TabIndex = 18;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(161, 146);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(95, 39);
			this->btn5->TabIndex = 19;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(30, 146);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(95, 39);
			this->btn4->TabIndex = 20;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(297, 101);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(95, 39);
			this->btn9->TabIndex = 21;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(162, 101);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(95, 39);
			this->btn8->TabIndex = 22;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btnPatrat
			// 
			this->btnPatrat->Location = System::Drawing::Point(162, 279);
			this->btnPatrat->Name = L"btnPatrat";
			this->btnPatrat->Size = System::Drawing::Size(95, 39);
			this->btnPatrat->TabIndex = 23;
			this->btnPatrat->Text = L" x²";
			this->btnPatrat->UseVisualStyleBackColor = true;
			this->btnPatrat->Click += gcnew System::EventHandler(this, &Form1::btnPatrat_Click);
			// 
			// btnProcent
			// 
			this->btnProcent->Location = System::Drawing::Point(30, 281);
			this->btnProcent->Name = L"btnProcent";
			this->btnProcent->Size = System::Drawing::Size(95, 39);
			this->btnProcent->TabIndex = 24;
			this->btnProcent->Text = L"%";
			this->btnProcent->UseVisualStyleBackColor = true;
			this->btnProcent->Click += gcnew System::EventHandler(this, &Form1::btnProcent_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Location = System::Drawing::Point(410, 281);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(95, 39);
			this->btnEqual->TabIndex = 25;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &Form1::btnEqual_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Location = System::Drawing::Point(410, 236);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(95, 39);
			this->btnDivision->TabIndex = 26;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &Form1::btnDivision_Click);
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Location = System::Drawing::Point(410, 191);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(95, 39);
			this->btnMultiplication->TabIndex = 27;
			this->btnMultiplication->Text = L"*";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &Form1::btnMultiplication_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(410, 146);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(95, 39);
			this->btnMinus->TabIndex = 28;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::btnMinus_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(410, 101);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(95, 39);
			this->btnPlus->TabIndex = 29;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Form1::btnPlus_Click);
			// 
			// userInputTxtBx
			// 
			this->userInputTxtBx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInputTxtBx->Location = System::Drawing::Point(30, 12);
			this->userInputTxtBx->Multiline = true;
			this->userInputTxtBx->Name = L"userInputTxtBx";
			this->userInputTxtBx->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->userInputTxtBx->Size = System::Drawing::Size(475, 72);
			this->userInputTxtBx->TabIndex = 30;
			this->userInputTxtBx->Text = L"0";
			this->userInputTxtBx->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnImpartireaLui1Lax
			// 
			this->btnImpartireaLui1Lax->Location = System::Drawing::Point(30, 326);
			this->btnImpartireaLui1Lax->Name = L"btnImpartireaLui1Lax";
			this->btnImpartireaLui1Lax->Size = System::Drawing::Size(95, 39);
			this->btnImpartireaLui1Lax->TabIndex = 31;
			this->btnImpartireaLui1Lax->Text = L" 1/x";
			this->btnImpartireaLui1Lax->UseVisualStyleBackColor = true;
			this->btnImpartireaLui1Lax->Click += gcnew System::EventHandler(this, &Form1::btnImpartireaLui1Lax_Click);
			// 
			// btnSquareRoot
			// 
			this->btnSquareRoot->Location = System::Drawing::Point(162, 326);
			this->btnSquareRoot->Name = L"btnSquareRoot";
			this->btnSquareRoot->Size = System::Drawing::Size(95, 39);
			this->btnSquareRoot->TabIndex = 32;
			this->btnSquareRoot->Text = L"√x";
			this->btnSquareRoot->UseVisualStyleBackColor = true;
			this->btnSquareRoot->Click += gcnew System::EventHandler(this, &Form1::btnSquareRoot_Click);
			// 
			// btnCubeRoot
			// 
			this->btnCubeRoot->Location = System::Drawing::Point(297, 326);
			this->btnCubeRoot->Name = L"btnCubeRoot";
			this->btnCubeRoot->Size = System::Drawing::Size(95, 39);
			this->btnCubeRoot->TabIndex = 33;
			this->btnCubeRoot->Text = L"³√x";
			this->btnCubeRoot->UseVisualStyleBackColor = true;
			this->btnCubeRoot->UseWaitCursor = true;
			this->btnCubeRoot->Click += gcnew System::EventHandler(this, &Form1::btnCubeRoot_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 377);
			this->Controls->Add(this->btnCubeRoot);
			this->Controls->Add(this->btnSquareRoot);
			this->Controls->Add(this->btnImpartireaLui1Lax);
			this->Controls->Add(this->userInputTxtBx);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnProcent);
			this->Controls->Add(this->btnPatrat);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btn7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L" 0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		userInput += "7";
		userInputTxtBx->Text = userInput;
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "0";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "1";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "2";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "3";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "4";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "5";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "6";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "8";
	userInputTxtBx->Text = userInput;
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += "9";
	userInputTxtBx->Text = userInput;
}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	userInput += ".";
	userInputTxtBx->Text = userInput;
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	Clear();
}
//declaration of clear function
void Clear() {
	userInput = String::Empty;
	userInputTxtBx->Text = userInput;
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	operation = '+';

	//convert and store the value from userInput
	op1 = Convert::ToDouble(userInput);

	Clear();
}
private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	operation = '-';
	op1 = Convert::ToDouble(userInput);
	Clear();
}
private: System::Void btnMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	operation = '*';
	op1 = Convert::ToDouble(userInput);
	Clear();
}
private: System::Void btnDivision_Click(System::Object^ sender, System::EventArgs^ e) {
	operation = '/';
	op1 = Convert::ToDouble(userInput);
	Clear();
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	op2 = Convert::ToDouble(userInput);

	switch (operation)
	{
	case '+':
		result = addition(op1, op2);
		userInputTxtBx->Text = Convert::ToString(result);
		break;
	case '-':
		result = minus(op1, op2);
		userInputTxtBx->Text = Convert::ToString(result);
		break;
	case '*':
		result = multiplication(op1, op2);
		userInputTxtBx->Text = Convert::ToString(result);
		break;
	case '/':
		result = division(op1, op2);
		userInputTxtBx->Text = Convert::ToString(result);
		break;
	default:
		userInputTxtBx->Text = "Error";
	}
}
private: System::Void btnPatrat_Click(System::Object^ sender, System::EventArgs^ e) {
	result = patrat(Convert::ToDouble(userInput));
	userInputTxtBx->Text = Convert::ToString(result);
}
private: System::Void btnProcent_Click(System::Object^ sender, System::EventArgs^ e) {
	op2 = Convert::ToDouble(userInputTxtBx->Text);
	result = procent(op1, op2, operation);
	userInputTxtBx->Text = Convert::ToString(result);
}
private: System::Void btnImpartireaLui1Lax_Click(System::Object^ sender, System::EventArgs^ e) {
	result = ImpartireaLui1Lax(Convert::ToDouble(userInput));
	userInputTxtBx->Text = Convert::ToString(result);
}
private: System::Void btnSquareRoot_Click(System::Object^ sender, System::EventArgs^ e) {
	result = SquareRoot(Convert::ToDouble(userInput));
	userInputTxtBx->Text = Convert::ToString(result);
}
private: System::Void btnCubeRoot_Click(System::Object^ sender, System::EventArgs^ e) {
	result = CubeRoot(Convert::ToDouble(userInput));
	userInputTxtBx->Text = Convert::ToString(result);
}
};
}
