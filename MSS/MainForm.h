#pragma once
#include "MSS.h"

namespace MSS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button5;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 23);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(154, 173);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 228);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Внесите измерения:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"О программе";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 29);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Справочная информация";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0.01", L"0.05" });
			this->comboBox1->Location = System::Drawing::Point(191, 23);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(111, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"0.01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Уровень значимости q";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(188, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 39);
			this->label3->TabIndex = 7;
			this->label3->Text = L"*при данном уровне значимости\r\nв измерениях присутствует \r\nсистематическая погреш"
				L"ность";
			this->label3->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(191, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 204);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(219, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 26);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Это график-хуяфик, \r\nя не дизигнер :D";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(101, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(29, 20);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(83, 20);
			this->textBox1->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(136, 202);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(29, 20);
			this->button5->TabIndex = 13;
			this->button5->Text = L"У";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(387, 337);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MainForm";
			this->Text = L"MSS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void UnderConstructionBox()
	{
		MessageBox::Show(this, L"Under construction", L"Информация");
	}	

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Globalization::CultureInfo^ culture = gcnew System::Globalization::CultureInfo("en-Us", false);
		int count = listBox1->Items->Count;
		double* measures = new double[count];
		//Получаем измерения
		for (int i = 0; i < count; i++) {
			measures[i] = System::Convert::ToDouble(listBox1->Items[i], culture);
		}
		//Если есть систематическая погрешность отображаем информацию
		label3->Visible = IsSystematicError(measures, count, comboBox1->Text);
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		UnderConstructionBox();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		UnderConstructionBox();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//TODO: Написать проверку на валиднось значения
		listBox1->Items->Add(textBox1->Text);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < listBox1->SelectedItems->Count; i++) {
			listBox1->Items->Remove(listBox1->SelectedItems[i]);
		}
		listBox1->ClearSelected();
	}
};
}
