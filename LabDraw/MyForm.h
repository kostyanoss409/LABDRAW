#pragma once

namespace LabDraw {

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
		Point P1, P2;
	private: System::Windows::Forms::Button^  button1;
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(533, 587);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 622);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"L6";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_MouseClick);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_MouseClick(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ gr = this->CreateGraphics();
		Pen^ pencil = gcnew Pen(Color::Violet, 3.0f);
		gr->DrawLine(pencil, 400, 200, 40, 35);
		gr->DrawEllipse(pencil, 200, 400, 25, 50);

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ gr = this->CreateGraphics();
		Pen^ pencil1 = gcnew Pen(Color::Green, 3.0f);
		gr->DrawLine(pencil1, 40, 40, 500, 320);
		gr->DrawEllipse(pencil1, 100, 100, 25, 50);
	}
	};
}
