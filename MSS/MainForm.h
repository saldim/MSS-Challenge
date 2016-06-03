#pragma once
#include "MSS.h"
#include "AboutForm.h"
#include "HelpForm.h"

namespace MSS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;
	
	/**
	 * Класс главной формы приложения
	 * Авторы: Ардесов Вячеслав, Салихов Дмитрий
	 */
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		System::Globalization::CultureInfo ^ culture;

		/**
		 * Конструктор класса (нужен для инициализации формы)
		 * Автор: Ардесов Вячеслав
		 */
		MainForm(void)
		{
			InitializeComponent();
			MeasureGV->Rows[0]->Cells[0]->Value = 1;
			AverageLabel->Text = "";
			StdDivLabel->Text = "";
			MseLabel->Text = "";
			IntervalLabel->Text = "";
			CountLabel->Text = "";
			FailCountLabel->Text = "";
			ResultLabel->Text = "";
			LaplasLabel->Text = "";
			culture = gcnew System::Globalization::CultureInfo("ru", false);
		}

	protected:

		/**
		 * Деструтор формы - отчистка памяти после выгрузки формы
		 * Автор: Ардесов Вячеслав
		 */
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  MeanLevelCB;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  SysErrLabel;
	private: System::Windows::Forms::Button^  SolveButton;
	private: System::Windows::Forms::DataGridView^  MeasureGV;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  ClearButton;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  Chart;
	private: System::Windows::Forms::Button^  DeleteFailButton;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Label^  AverageLabel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  MseLabel;
	private: System::Windows::Forms::Label^  StdDivLabel;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  FailCountLabel;
	private: System::Windows::Forms::Label^  CountLabel;
	private: System::Windows::Forms::Label^  IntervalLabel;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  EmiTextBox;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  LaplasLabel;



	private: System::Windows::Forms::Label^  ResultLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Measure;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  B;
	protected:
	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/**
		 * Код для построения формы, инициализации компонетов, их размещения и внешнего вида.
		 * Автор: Салихов Дмитрий
		 */
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MeanLevelCB = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SysErrLabel = (gcnew System::Windows::Forms::Label());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->MeasureGV = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->DeleteFailButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->AverageLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->MseLabel = (gcnew System::Windows::Forms::Label());
			this->StdDivLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->FailCountLabel = (gcnew System::Windows::Forms::Label());
			this->CountLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->IntervalLabel = (gcnew System::Windows::Forms::Label());
			this->LaplasLabel = (gcnew System::Windows::Forms::Label());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->EmiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Measure = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Внесите измерения:";
			// 
			// MeanLevelCB
			// 
			this->MeanLevelCB->FormattingEnabled = true;
			this->MeanLevelCB->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0,01", L"0,05" });
			this->MeanLevelCB->Location = System::Drawing::Point(384, 9);
			this->MeanLevelCB->Name = L"MeanLevelCB";
			this->MeanLevelCB->Size = System::Drawing::Size(111, 21);
			this->MeanLevelCB->TabIndex = 5;
			this->MeanLevelCB->Text = L"0,01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(255, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Уровень значимости: ";
			// 
			// SysErrLabel
			// 
			this->SysErrLabel->AutoSize = true;
			this->SysErrLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SysErrLabel->ForeColor = System::Drawing::Color::Maroon;
			this->SysErrLabel->Location = System::Drawing::Point(252, 33);
			this->SysErrLabel->Name = L"SysErrLabel";
			this->SysErrLabel->Size = System::Drawing::Size(539, 13);
			this->SysErrLabel->TabIndex = 7;
			this->SysErrLabel->Text = L"При данном уровне значимости в измерениях присутствует систематическая погрешност"
				L"ь";
			this->SysErrLabel->Visible = false;
			// 
			// SolveButton
			// 
			this->SolveButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->SolveButton->Location = System::Drawing::Point(6, 531);
			this->SolveButton->Name = L"SolveButton";
			this->SolveButton->Size = System::Drawing::Size(229, 27);
			this->SolveButton->TabIndex = 10;
			this->SolveButton->Text = L"Расчитать";
			this->SolveButton->UseVisualStyleBackColor = true;
			this->SolveButton->Click += gcnew System::EventHandler(this, &MainForm::SolveButton_Click);
			// 
			// MeasureGV
			// 
			this->MeasureGV->AllowUserToResizeColumns = false;
			this->MeasureGV->AllowUserToResizeRows = false;
			this->MeasureGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->MeasureGV->BackgroundColor = System::Drawing::Color::White;
			this->MeasureGV->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MeasureGV->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->MeasureGV->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->MeasureGV->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->MeasureGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->MeasureGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->Measure,
					this->B
			});
			this->MeasureGV->EnableHeadersVisualStyles = false;
			this->MeasureGV->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->MeasureGV->Location = System::Drawing::Point(6, 23);
			this->MeasureGV->MultiSelect = false;
			this->MeasureGV->Name = L"MeasureGV";
			this->MeasureGV->RowHeadersVisible = false;
			this->MeasureGV->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->MeasureGV->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MeasureGV->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->MeasureGV->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->MeasureGV->ShowEditingIcon = false;
			this->MeasureGV->ShowRowErrors = false;
			this->MeasureGV->Size = System::Drawing::Size(231, 502);
			this->MeasureGV->TabIndex = 9;
			this->MeasureGV->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::MeasureGV_CellEndEdit);
			this->MeasureGV->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::MeasureGV_RowsAdded);
			this->MeasureGV->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MeasureGV_KeyDown);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(6, 561);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(229, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"О программе";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Location = System::Drawing::Point(6, 591);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(229, 27);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Справочная информация";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.68354F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.31646F)));
			this->tableLayoutPanel1->Controls->Add(this->ClearButton, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->Chart, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->DeleteFailButton, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(252, 49);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.86047F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.13953F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(569, 569);
			this->tableLayoutPanel1->TabIndex = 24;
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ClearButton->Location = System::Drawing::Point(3, 541);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(276, 25);
			this->ClearButton->TabIndex = 24;
			this->ClearButton->Text = L"Очистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MainForm::ClearButton_Click);
			// 
			// Chart
			// 
			this->Chart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->AxisX->Minimum = 1;
			chartArea1->AxisY->LabelStyle->Format = L"0.00";
			chartArea1->Name = L"Area";
			this->Chart->ChartAreas->Add(chartArea1);
			this->tableLayoutPanel1->SetColumnSpan(this->Chart, 2);
			this->Chart->Location = System::Drawing::Point(3, 3);
			this->Chart->Name = L"Chart";
			series1->ChartArea = L"Area";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Red;
			series1->CustomProperties = L"IsXAxisQuantitative=False";
			series1->Name = L"line";
			series1->YValuesPerPoint = 2;
			this->Chart->Series->Add(series1);
			this->Chart->Size = System::Drawing::Size(563, 273);
			this->Chart->TabIndex = 18;
			this->Chart->Text = L"Chart";
			title1->Name = L"Title1";
			title1->Text = L"Измерения";
			this->Chart->Titles->Add(title1);
			// 
			// DeleteFailButton
			// 
			this->DeleteFailButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DeleteFailButton->Location = System::Drawing::Point(285, 541);
			this->DeleteFailButton->Name = L"DeleteFailButton";
			this->DeleteFailButton->Size = System::Drawing::Size(281, 25);
			this->DeleteFailButton->TabIndex = 25;
			this->DeleteFailButton->Text = L"Удалить промахи";
			this->DeleteFailButton->UseVisualStyleBackColor = true;
			this->DeleteFailButton->Click += gcnew System::EventHandler(this, &MainForm::DeleteFailButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->SetColumnSpan(this->groupBox1, 2);
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Location = System::Drawing::Point(3, 282);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(563, 253);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация:";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->AverageLabel, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->MseLabel, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->StdDivLabel, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label11, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->FailCountLabel, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->CountLabel, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->label6, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->IntervalLabel, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->LaplasLabel, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->ResultLabel, 0, 8);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 9;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(557, 234);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// AverageLabel
			// 
			this->AverageLabel->AutoSize = true;
			this->AverageLabel->Location = System::Drawing::Point(281, 0);
			this->AverageLabel->Name = L"AverageLabel";
			this->AverageLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->AverageLabel->Size = System::Drawing::Size(47, 16);
			this->AverageLabel->TabIndex = 35;
			this->AverageLabel->Text = L"Average";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label3->Size = System::Drawing::Size(145, 16);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Среднее арифметическое: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 32);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label7->Size = System::Drawing::Size(186, 16);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Среднеквадратичная погрешность:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 16);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label8->Size = System::Drawing::Size(179, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Среднеквадратичное отклонение:";
			// 
			// MseLabel
			// 
			this->MseLabel->AutoSize = true;
			this->MseLabel->Location = System::Drawing::Point(281, 32);
			this->MseLabel->Name = L"MseLabel";
			this->MseLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->MseLabel->Size = System::Drawing::Size(20, 16);
			this->MseLabel->TabIndex = 38;
			this->MseLabel->Text = L"S_";
			// 
			// StdDivLabel
			// 
			this->StdDivLabel->AutoSize = true;
			this->StdDivLabel->Location = System::Drawing::Point(281, 16);
			this->StdDivLabel->Name = L"StdDivLabel";
			this->StdDivLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->StdDivLabel->Size = System::Drawing::Size(14, 16);
			this->StdDivLabel->TabIndex = 39;
			this->StdDivLabel->Text = L"S";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 112);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(0, 6, 0, 0);
			this->label11->Size = System::Drawing::Size(62, 19);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Результат:";
			// 
			// FailCountLabel
			// 
			this->FailCountLabel->AutoSize = true;
			this->FailCountLabel->Location = System::Drawing::Point(281, 96);
			this->FailCountLabel->Name = L"FailCountLabel";
			this->FailCountLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->FailCountLabel->Size = System::Drawing::Size(51, 16);
			this->FailCountLabel->TabIndex = 31;
			this->FailCountLabel->Text = L"FailCount";
			// 
			// CountLabel
			// 
			this->CountLabel->AutoSize = true;
			this->CountLabel->Location = System::Drawing::Point(281, 80);
			this->CountLabel->Name = L"CountLabel";
			this->CountLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->CountLabel->Size = System::Drawing::Size(35, 16);
			this->CountLabel->TabIndex = 33;
			this->CountLabel->Text = L"Count";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 96);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label6->Size = System::Drawing::Size(121, 16);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Количество промахов:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 80);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label5->Size = System::Drawing::Size(128, 16);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Количество измерений:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 64);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label4->Size = System::Drawing::Size(211, 16);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Доверительный интервал погрешности:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 48);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label10->Size = System::Drawing::Size(189, 16);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Доверительный интервал Лапласа:";
			// 
			// IntervalLabel
			// 
			this->IntervalLabel->AutoSize = true;
			this->IntervalLabel->Location = System::Drawing::Point(281, 64);
			this->IntervalLabel->Name = L"IntervalLabel";
			this->IntervalLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->IntervalLabel->Size = System::Drawing::Size(42, 16);
			this->IntervalLabel->TabIndex = 34;
			this->IntervalLabel->Text = L"Interval";
			// 
			// LaplasLabel
			// 
			this->LaplasLabel->AutoSize = true;
			this->LaplasLabel->Location = System::Drawing::Point(281, 48);
			this->LaplasLabel->Name = L"LaplasLabel";
			this->LaplasLabel->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->LaplasLabel->Size = System::Drawing::Size(38, 16);
			this->LaplasLabel->TabIndex = 43;
			this->LaplasLabel->Text = L"Laplas";
			// 
			// ResultLabel
			// 
			this->tableLayoutPanel2->SetColumnSpan(this->ResultLabel, 2);
			this->ResultLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResultLabel->Location = System::Drawing::Point(3, 132);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(551, 102);
			this->ResultLabel->TabIndex = 44;
			this->ResultLabel->Text = L"A = .... ±  ∆..., 0,95;";
			this->ResultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(501, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Погрешность СИ:";
			// 
			// EmiTextBox
			// 
			this->EmiTextBox->Location = System::Drawing::Point(603, 9);
			this->EmiTextBox->Name = L"EmiTextBox";
			this->EmiTextBox->Size = System::Drawing::Size(111, 20);
			this->EmiTextBox->TabIndex = 26;
			this->EmiTextBox->Text = L"0,01";
			// 
			// Id
			// 
			this->Id->Frozen = true;
			this->Id->HeaderText = L"№";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Id->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Id->Width = 30;
			// 
			// Measure
			// 
			this->Measure->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Measure->HeaderText = L"Измерение";
			this->Measure->Name = L"Measure";
			this->Measure->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Measure->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// B
			// 
			this->B->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->B->HeaderText = L"β";
			this->B->Name = L"B";
			this->B->ReadOnly = true;
			this->B->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->B->ToolTipText = L"Коэффициент Романовского";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 623);
			this->Controls->Add(this->EmiTextBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->MeasureGV);
			this->Controls->Add(this->SysErrLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MeanLevelCB);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(740, 500);
			this->Name = L"MainForm";
			this->Text = L"MSS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/**
	 * Функция вызывающая окно с данной функции в текущей версии приложения
	 * Автор: Салихов Дмитрий
	 */
	private: void UnderConstructionBox()
	{
		MessageBox::Show(this, "Функция будет доступна в следующих версиях приложения", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}	
	
	/**
	 * Главная функция приложения: в ней идут основные расчеты и обработка данных
	 * Вызывается при нажатии на кнопку "Расчитать"
	 * Автор: Ардесов Вячеслав
	 */
	private: System::Void SolveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Stopwatch ^ sw = gcnew Stopwatch(); 
		sw->Start(); //Запускаем контроль времени		
		double *measures;
		try {
			/*Инициализация: */	  
			double q = Convert::ToDouble(MeanLevelCB->Text, culture); //Уровень значимости
			int n = MeasureGV->RowCount - 1;						  //Кол-во измерений
			
			/*Проверка на валидность:*/
			for (int i = 0; i < n; i++) {
				if (MeasureGV->Rows[i]->Cells[0]->Style->BackColor == Color::Red) {
					throw gcnew FormatException("Резльтат измерения №" + (i + 1) + " имеет неверный формат!");
				}
			}
			if (n < 4) throw gcnew NotSupportedException("Данные методы не применимы при количестве измерений меньше чем 4");
			if (n > 100) throw gcnew NotSupportedException("Для данного количества измерений нет данных");

			/*Парсинг значений:*/
			measures = new double[n];		//Массив измерений
			for (int i = 0; i < n; i++) {
				measures[i] = Convert::ToDouble(MeasureGV->Rows[i]->Cells[1]->Value, culture); //Получаем измерение
				MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::White;
				MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::White;
				MeasureGV->Rows[i]->Cells[2]->Style->BackColor = Color::White;
			}

			/*Обнаруживаем систематическую погрешность:*/
			if (IsSystematicError(measures, q, n)) {
				SysErrLabel->Visible = true;
				System::Windows::Forms::DialogResult r;
				r = MessageBox::Show(this, "При данном уровне значимости в измерениях присутствует систематическая погрешность. Продолжить?", "Обнаруженна систематическая погрешность!", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
				if (r == System::Windows::Forms::DialogResult::Cancel) throw gcnew OperationCanceledException();
			}
			else {
				SysErrLabel->Visible = false;
			}

			/*Смотрим промахи критерием Романовского:*/
			int fails = 0;							//Кол-во промахов
			double beta;							//Значение B
			double betaq = GetRomanovsky(q, n);     //Порогове значение B
			try {
				for (int i = 0; i < n; i++) {
					beta = abs(Average(measures, n) - measures[i]) / StdDeviation(measures, n); //Расчет значения B
					MeasureGV->Rows[i]->Cells[2]->Value = String::Format("{0:0.0000}", beta);   //Вывод B в таблицу
					if (beta > betaq){
						MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::Orange; 
						MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::Orange;
						MeasureGV->Rows[i]->Cells[2]->Style->BackColor = Color::Orange;
						fails++;
					}
				}
			}
			catch (Exception^) {
				throw gcnew DataException("В таблице `Romanovsky` не найдено значение при `n` = " + n + " и `q` = " + MeanLevelCB->Text->ToString(gcnew System::Globalization::CultureInfo("en",false)));
			}
			/*Вычисляем границы доверительного интервала Лапласа*/
			double z = GetLaplasArgument((1 - q) / 2);
			double laplas_bottom = Average(measures, n) - MeanSquareError(measures, n)*z;
			double laplas_top = Average(measures, n) + MeanSquareError(measures, n)*z;

			/*Вычисляем границы доверительной погрешности интервала Стьюдента: */									
			double e = MeanSquareError(measures,n)*GetStudent(q, n - 1); //e = S_*t
			Debug::WriteLine("e = " + e);
			double emi = Convert::ToDouble(EmiTextBox->Text, culture);      //Погрешность средства измерения
			double delta = sqrt(pow(e,2) + pow(0.6533*emi,2));				//Результатирующая погрешность
			double student_bottom = Average(measures, n - fails) - delta;	//Нижнее значение интервала
			double student_top = Average(measures, n - fails) + delta;		//Верхнее значение интервала

			/*Строим график:*/
			double min = Min(measures, n); //Находим минимальные и максимальные значения
			double max = Max(measures, n);
			Chart->Series["line"]->Points->Clear(); //Чистим график, от старой информации
			double distance = max - min; //Размах графика
			if (distance == 0) distance = 1;
			Chart->ChartAreas["Area"]->AxisY->Minimum = Average(measures, n) - distance; //Располагаем среднее арифметическое в центре графика
			Chart->ChartAreas["Area"]->AxisY->Maximum = Average(measures, n) + distance;
			for (int i = 0; i < n; i++) { //Рисуем график
				Chart->Series["line"]->Points->Add(measures[i]);
			}
			
			/*Выводим информацию и результаты : */
			AverageLabel->Text = String::Format("{0:0.0000}", Average(measures, n));
			IntervalLabel->Text = String::Format("({0:0.0000} ; {1:0.0000})", student_bottom, student_top);
			LaplasLabel->Text = String::Format("({0:0.0000} ; {1:0.0000})", laplas_bottom, laplas_top);
			MseLabel->Text = String::Format("{0:0.0000}",MeanSquareError(measures, n));
			StdDivLabel->Text = String::Format("{0:0.0000}", StdDeviation(measures, n));
			CountLabel->Text = n.ToString();
			FailCountLabel->Text = fails.ToString();
			ResultLabel->Text = String::Format(L"A = {0:0.0000} ± {1:0.0000}, {2:0.00};", Average(measures, n), delta, 1 - q);

			/*Отчистка памяти:*/
			delete[] measures;
		}
		catch (OperationCanceledException^) {}
		catch (Exception^ e) {
			MessageBox::Show(this, e->Message, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally{
			sw->Stop();
			Debug::WriteLine("Время затраченное на расчеты: " + sw->Elapsed);
			
		}
	}

	/**
	 * Функция вызывающаяся при добавлении новой строки в таблице
	 * Автор: Ардесов Вячеслав
	 */
	private: System::Void MeasureGV_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		MeasureGV->Rows[e->RowIndex]->Cells[0]->Value = e->RowIndex + 1;
	}
	
	/**
	 * Функция для проверки корректности вводимых данных
	 * Автор: Ардесов Вячеслав
	 */
	private: void ValidateCell(int r) {
		if (MeasureGV->Rows[r]->Cells[1]->Value != nullptr) {
			Regex^ regex = gcnew Regex("^[0-9]+\\,?[0-9]*$");
			if (!regex->IsMatch(MeasureGV->Rows[r]->Cells[1]->Value->ToString())) {
				MeasureGV->Rows[r]->Cells[0]->Style->BackColor = Color::Red;
				MeasureGV->Rows[r]->Cells[1]->Style->BackColor = Color::Red;
				MeasureGV->Rows[r]->Cells[2]->Style->BackColor = Color::Red;
			}
			else {
				MeasureGV->Rows[r]->Cells[0]->Style->BackColor = Color::White;
				MeasureGV->Rows[r]->Cells[1]->Style->BackColor = Color::White;
				MeasureGV->Rows[r]->Cells[2]->Style->BackColor = Color::White;
			}
		}
	}
	/**
	 * Функция вызывающаяся при завершении редактирования ячейки, здесь ведется проверка корректности данных и удаление пустых ячеек
	 * Автор: Ардесов Вячеслав
	 */
	delegate void DeleteRowDelegate(int index);
	private: System::Void MeasureGV_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (MeasureGV->RowCount != 1 && MeasureGV->Rows[e->RowIndex]->Cells[1]->Value == nullptr) {
			DeleteRowDelegate^ action = gcnew DeleteRowDelegate(this,&MainForm::DeleteRow);
			this->BeginInvoke(action,e->RowIndex);
		}
		else {
			ValidateCell(e->RowIndex);
		}
	}

	/**
	 * Удаление строки
	 * Автор: Ардесов Вячеслав
	 */
	private: void DeleteRow(int index) {
		MeasureGV->Rows->RemoveAt(index);
		int count = MeasureGV->RowCount;
		if (count == index+1) return;
		for (int i = index; i < count; i++) {
			MeasureGV->Rows[i]->Cells[0]->Value = i+1;
		}
	}
		
	/**
	 * Функция для открытия формы "О программе"
	 * Вызывается при нажатии кнопки "О программе"
	 * Автор: Салихов Дмитрий
	 */
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutForm^ form = gcnew AboutForm();
		form->Show();
	}

    /**
	 * Функция для открытия формы "Руководство пользователя"
	 * Вызывается при нажатии кнопки "Справка"
	 * Автор: Салихов Дмитрий
	 */
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		HelpForm^ form = gcnew HelpForm();
		form->Show();
	}

	/**	
	 * Функция для возвращения формы к первоначальному состоянию
	 * Вызывается при нажатии кнопки "Очистить"
	 * Автор: Салихов Дмитрий
	 */
	private: System::Void ClearButton_Click(System::Object^  sender, System::EventArgs^  e) {
		MeasureGV->Rows->Clear();
		AverageLabel->Text = "";
		StdDivLabel->Text = "";
		MseLabel->Text = "";
		IntervalLabel->Text = "";
		CountLabel->Text = "";
		FailCountLabel->Text = "";
		ResultLabel->Text = "";
		LaplasLabel->Text = "";
		Chart->Series["line"]->Points->Clear();
		SysErrLabel->Visible = false;
	}

	/**
	 * Функция для удаления промахов в измерениях
	 * Вызывается при нажатии кнопки "Удалить"
	 * Автор: Ардесов Вячеслав
	 */
	private: System::Void DeleteFailButton_Click(System::Object^  sender, System::EventArgs^  e) {
		int n = MeasureGV->RowCount;
		for (int i = 0; i < n; i++) {
			if (MeasureGV->Rows[i]->Cells[0]->Style->BackColor == Color::Orange) {
				MeasureGV->Rows->RemoveAt(i);
				n--;
			}
		}
		for (int i = 0; i < n; i++) {
			MeasureGV->Rows[i]->Cells[0]->Value = i + 1;
		}
	}

	/**
	 * Функция для обработки действий с клавиатуры
	 * Вызывается при нажатии клавиш на клавиатуре
	 * Автор: Ардесов Вячеслав
	 */
	private: System::Void MeasureGV_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::V && e->Control) {
			if (MeasureGV->SelectedCells->Count > 0) {
				StringReader ^ sr = gcnew StringReader(Clipboard::GetText());
				String ^ s;
				int i = MeasureGV->SelectedCells[0]->RowIndex;
				while ((s = sr->ReadLine()) != nullptr) {
					MeasureGV->Rows->Insert(i, 1);
					MeasureGV->Rows[i]->Cells[1]->Value = s;
					ValidateCell(i);
					i++;
				}
				int n = MeasureGV->RowCount;
				for (int i = 0; i < n; i++) {
					MeasureGV->Rows[i]->Cells[0]->Value = i + 1;
				}
			}
		}
		if (e->KeyCode == Keys::Delete) {
			if (MeasureGV->SelectedCells[0]->RowIndex != MeasureGV->Rows->Count - 1) {
				DeleteRow(MeasureGV->SelectedCells[0]->RowIndex);
			}
			int n = MeasureGV->RowCount;
			for (int i = 0; i < n; i++) {
				MeasureGV->Rows[i]->Cells[0]->Value = i + 1;
			}
		}
	}
};
}