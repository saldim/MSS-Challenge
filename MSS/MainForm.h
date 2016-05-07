#pragma once
#include "MSS.h"
#include "AboutForm.h"

namespace MSS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		Graphics^ draw;
		MainForm(void)
		{
			InitializeComponent();
			MeasureGV->Rows[0]->Cells[0]->Value = 1;
			bmp = gcnew Bitmap(CanvasPB->Width, CanvasPB->Height);
			draw = Graphics::FromImage(bmp);
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
	private: Bitmap^ bmp;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  MeanLevelCB;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  SysErrLabel;
	private: System::Windows::Forms::PictureBox^  CanvasPB;

	private: System::Windows::Forms::Button^  SolveButton;


	private: System::Windows::Forms::DataGridView^  MeasureGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Measure;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MeanLevelCB = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SysErrLabel = (gcnew System::Windows::Forms::Label());
			this->CanvasPB = (gcnew System::Windows::Forms::PictureBox());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->MeasureGV = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Measure = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CanvasPB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->BeginInit();
			this->SuspendLayout();
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
			// MeanLevelCB
			// 
			this->MeanLevelCB->FormattingEnabled = true;
			this->MeanLevelCB->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0.01", L"0.05" });
			this->MeanLevelCB->Location = System::Drawing::Point(184, 36);
			this->MeanLevelCB->Name = L"MeanLevelCB";
			this->MeanLevelCB->Size = System::Drawing::Size(111, 21);
			this->MeanLevelCB->TabIndex = 5;
			this->MeanLevelCB->Text = L"0.01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(181, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Уровень значимости q";
			// 
			// SysErrLabel
			// 
			this->SysErrLabel->AutoSize = true;
			this->SysErrLabel->Location = System::Drawing::Point(181, 60);
			this->SysErrLabel->Name = L"SysErrLabel";
			this->SysErrLabel->Size = System::Drawing::Size(171, 39);
			this->SysErrLabel->TabIndex = 7;
			this->SysErrLabel->Text = L"*при данном уровне значимости\r\nв измерениях присутствует \r\nсистематическая погреш"
				L"ность";
			this->SysErrLabel->Visible = false;
			// 
			// CanvasPB
			// 
			this->CanvasPB->BackColor = System::Drawing::Color::White;
			this->CanvasPB->Location = System::Drawing::Point(184, 125);
			this->CanvasPB->Name = L"CanvasPB";
			this->CanvasPB->Size = System::Drawing::Size(205, 204);
			this->CanvasPB->TabIndex = 8;
			this->CanvasPB->TabStop = false;
			// 
			// SolveButton
			// 
			this->SolveButton->Location = System::Drawing::Point(18, 288);
			this->SolveButton->Name = L"SolveButton";
			this->SolveButton->Size = System::Drawing::Size(147, 27);
			this->SolveButton->TabIndex = 10;
			this->SolveButton->Text = L"Расчитать";
			this->SolveButton->UseVisualStyleBackColor = true;
			this->SolveButton->Click += gcnew System::EventHandler(this, &MainForm::SolveButton_Click);
			// 
			// MeasureGV
			// 
			this->MeasureGV->AllowUserToResizeColumns = false;
			this->MeasureGV->AllowUserToResizeRows = false;
			this->MeasureGV->BackgroundColor = System::Drawing::Color::White;
			this->MeasureGV->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MeasureGV->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->MeasureGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MeasureGV->ColumnHeadersVisible = false;
			this->MeasureGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Id, this->Measure });
			this->MeasureGV->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->MeasureGV->Location = System::Drawing::Point(18, 23);
			this->MeasureGV->MultiSelect = false;
			this->MeasureGV->Name = L"MeasureGV";
			this->MeasureGV->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->MeasureGV->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->MeasureGV->RowHeadersVisible = false;
			this->MeasureGV->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->MeasureGV->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MeasureGV->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->MeasureGV->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->MeasureGV->ShowEditingIcon = false;
			this->MeasureGV->ShowRowErrors = false;
			this->MeasureGV->Size = System::Drawing::Size(147, 259);
			this->MeasureGV->TabIndex = 9;
			this->MeasureGV->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::MeasureGV_CellEndEdit);
			this->MeasureGV->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::MeasureGV_RowsAdded);
			// 
			// Id
			// 
			this->Id->Frozen = true;
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Id->Width = 30;
			// 
			// Measure
			// 
			this->Measure->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Measure->Frozen = true;
			this->Measure->HeaderText = L"Измерения";
			this->Measure->Name = L"Measure";
			this->Measure->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Measure->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Measure->Width = 120;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(181, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"График:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"О программе";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 27);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Справочная информация";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 395);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->MeasureGV);
			this->Controls->Add(this->CanvasPB);
			this->Controls->Add(this->SysErrLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MeanLevelCB);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MSS";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CanvasPB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void UnderConstructionBox()
	{
		MessageBox::Show(this, "Функция будет доступна в следующих версиях приложения", "Информация");
	}	

	private: System::Void SolveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Globalization::CultureInfo^ culture = gcnew System::Globalization::CultureInfo("en-Us", false);
		int n = MeasureGV->RowCount-1;
		if (n < 4) {
			MessageBox::Show("Данные методы не применимы при количестве измерений меньше чем 4");
			return;
		}
		if (n > 20) {
			MessageBox::Show("Извените в следующей версии. Спасибо за понимание!");
			return;
		}
		double* measures = new double[n];
		for (int i = 0; i < n; i++) {
			//Получаем измерения
			measures[i] = System::Convert::ToDouble(MeasureGV->Rows[i]->Cells[1]->Value, culture);
			//Заливаем белым цветом ячейки
			MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::White;
			MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::White;
		}
		//Обнаруживаем систематическую погрешность
		if (IsSystematicError(measures, n, MeanLevelCB->Text)) {
			SysErrLabel->Visible = true;
			System::Windows::Forms::DialogResult r;
			r = MessageBox::Show(nullptr, "При данном уровне значимости в измерениях присутствует систематическая погрешность. Продолжить?", "Обнаруженна систематическая погрешность!", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
			if (r == System::Windows::Forms::DialogResult::Cancel) return;
		}
		else {
			SysErrLabel->Visible = false;
		}
		//Смотрим промахи критерием Романовского
		for (int i = 0; i < n; i++) {
			try {
				if (IsFailByRomanovsky(measures, i, n, MeanLevelCB->Text)) {
					MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
					MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
				}
			}
			catch (Exception^ e) {
				Debug::WriteLine("В таблице `Abbe` не найдено значение при `n` = "+n+" и `q` = "+MeanLevelCB->Text);
				break;
			}
		}
		//Определяем граничные значения доверительного интервала
		//TODO: Переписать это дерьмо
		double P = (1 - System::Convert::ToDouble(MeanLevelCB->Text, culture)) / 2;
		double z;
		if (P == 0.495) { //Q = 0.01
			z = 2.6;
		}
		if (P == 0.475) { //Q = 0.05
			z = 1.95;
		}
		double bottom = Average(measures, n) - z*MeanSquareError(measures, n);
		double top = Average(measures, n) + z*MeanSquareError(measures, n);
		Debug::WriteLine("Доверительный интервал: (" + bottom + "," + top + ")");
		//Смотрим промахи критерием Лапласа
		for (int i = 0; i < n; i++) {
			if (!(bottom <= measures[i] && measures[i] <= top)) {
				MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
				MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
			}
		}
	}

	private: System::Void MeasureGV_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		MeasureGV->Rows[e->RowIndex]->Cells[0]->Value = e->RowIndex + 1;
	}

	delegate void DeleteRowDelegate(int index);
	private: System::Void MeasureGV_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (MeasureGV->RowCount != 1 && MeasureGV->Rows[e->RowIndex]->Cells[1]->Value == nullptr) {
			DeleteRowDelegate^ action = gcnew DeleteRowDelegate(this,&MainForm::DeleteRow);
			this->BeginInvoke(action,e->RowIndex);
		}
	}

	private: void DeleteRow(int index) {
		MeasureGV->Rows->RemoveAt(index);
		int count = MeasureGV->RowCount;
		for (int i = index; i < count; i++) {
			MeasureGV->Rows[i]->Cells[0]->Value = i+1;
		}
	}
			 
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//							x1 y1 x2 y2 
		draw->DrawLine(Pens::Black, 20, 10, 20, 190);
		draw->DrawLine(Pens::Black, 10, 180, 180, 180);
		CanvasPB->Image = bmp;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutForm^ form = gcnew AboutForm();
	form->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	UnderConstructionBox();
}
};
}
