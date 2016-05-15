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
	using namespace System::Text::RegularExpressions;
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			MeasureGV->Rows[0]->Cells[0]->Value = 1;
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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  MeanLevelCB;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  SysErrLabel;
	private: System::Windows::Forms::Button^  SolveButton;
	private: System::Windows::Forms::DataGridView^  MeasureGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Measure;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  Chart;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  FailCountLabel;
	private: System::Windows::Forms::Label^  CountLabel;
	private: System::Windows::Forms::Label^  IntervalLabel;
	private: System::Windows::Forms::Label^  AverageLabel;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  ClearButton;
	private: System::Windows::Forms::Button^  DeleteFailButton;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MeanLevelCB = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SysErrLabel = (gcnew System::Windows::Forms::Label());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->MeasureGV = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Measure = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->FailCountLabel = (gcnew System::Windows::Forms::Label());
			this->CountLabel = (gcnew System::Windows::Forms::Label());
			this->IntervalLabel = (gcnew System::Windows::Forms::Label());
			this->AverageLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->DeleteFailButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->MeanLevelCB->Location = System::Drawing::Point(322, 4);
			this->MeanLevelCB->Name = L"MeanLevelCB";
			this->MeanLevelCB->Size = System::Drawing::Size(111, 21);
			this->MeanLevelCB->TabIndex = 5;
			this->MeanLevelCB->Text = L"0.01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(193, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Уровень значимости: ";
			// 
			// SysErrLabel
			// 
			this->SysErrLabel->AutoSize = true;
			this->SysErrLabel->Location = System::Drawing::Point(193, 26);
			this->SysErrLabel->Name = L"SysErrLabel";
			this->SysErrLabel->Size = System::Drawing::Size(244, 26);
			this->SysErrLabel->TabIndex = 7;
			this->SysErrLabel->Text = L"*при данном уровне значимости в измерениях\r\n присутствует систематическая погрешн"
				L"ость";
			this->SysErrLabel->Visible = false;
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
			// Chart
			// 
			chartArea1->AxisX->Minimum = 1;
			chartArea1->AxisY->LabelStyle->Format = L"0.00";
			chartArea1->Name = L"Area";
			this->Chart->ChartAreas->Add(chartArea1);
			this->Chart->Location = System::Drawing::Point(195, 57);
			this->Chart->Name = L"Chart";
			series1->ChartArea = L"Area";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Red;
			series1->CustomProperties = L"IsXAxisQuantitative=False";
			series1->Name = L"line";
			series1->YValuesPerPoint = 2;
			series2->BorderColor = System::Drawing::Color::Gray;
			series2->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series2->ChartArea = L"Area";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Gray;
			series2->Name = L"top";
			series3->BorderColor = System::Drawing::Color::Gray;
			series3->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series3->ChartArea = L"Area";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Gray;
			series3->Name = L"bottom";
			this->Chart->Series->Add(series1);
			this->Chart->Series->Add(series2);
			this->Chart->Series->Add(series3);
			this->Chart->Size = System::Drawing::Size(363, 193);
			this->Chart->TabIndex = 15;
			this->Chart->Text = L"Chart";
			title1->Name = L"Title1";
			title1->Text = L"Измерения";
			this->Chart->Titles->Add(title1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->FailCountLabel);
			this->groupBox1->Controls->Add(this->CountLabel);
			this->groupBox1->Controls->Add(this->IntervalLabel);
			this->groupBox1->Controls->Add(this->AverageLabel);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(196, 256);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(362, 92);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация";
			// 
			// FailCountLabel
			// 
			this->FailCountLabel->AutoSize = true;
			this->FailCountLabel->Location = System::Drawing::Point(220, 72);
			this->FailCountLabel->Name = L"FailCountLabel";
			this->FailCountLabel->Size = System::Drawing::Size(0, 13);
			this->FailCountLabel->TabIndex = 4;
			// 
			// CountLabel
			// 
			this->CountLabel->AutoSize = true;
			this->CountLabel->Location = System::Drawing::Point(220, 55);
			this->CountLabel->Name = L"CountLabel";
			this->CountLabel->Size = System::Drawing::Size(0, 13);
			this->CountLabel->TabIndex = 4;
			// 
			// IntervalLabel
			// 
			this->IntervalLabel->AutoSize = true;
			this->IntervalLabel->Location = System::Drawing::Point(220, 39);
			this->IntervalLabel->Name = L"IntervalLabel";
			this->IntervalLabel->Size = System::Drawing::Size(0, 13);
			this->IntervalLabel->TabIndex = 4;
			// 
			// AverageLabel
			// 
			this->AverageLabel->AutoSize = true;
			this->AverageLabel->Location = System::Drawing::Point(220, 18);
			this->AverageLabel->Name = L"AverageLabel";
			this->AverageLabel->Size = System::Drawing::Size(0, 13);
			this->AverageLabel->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Количество промахов:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Количество измерений:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Доверительный интервал(Лапласа):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Среднее арифметическое: ";
			// 
			// ClearButton
			// 
			this->ClearButton->Location = System::Drawing::Point(195, 354);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(179, 27);
			this->ClearButton->TabIndex = 17;
			this->ClearButton->Text = L"Очистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MainForm::ClearButton_Click);
			// 
			// DeleteFailButton
			// 
			this->DeleteFailButton->Location = System::Drawing::Point(380, 354);
			this->DeleteFailButton->Name = L"DeleteFailButton";
			this->DeleteFailButton->Size = System::Drawing::Size(178, 27);
			this->DeleteFailButton->TabIndex = 18;
			this->DeleteFailButton->Text = L"Удалить промахи";
			this->DeleteFailButton->UseVisualStyleBackColor = true;
			this->DeleteFailButton->Click += gcnew System::EventHandler(this, &MainForm::DeleteFailButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 406);
			this->Controls->Add(this->DeleteFailButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Chart);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->MeasureGV);
			this->Controls->Add(this->SysErrLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MeanLevelCB);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MSS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void UnderConstructionBox()
	{
		MessageBox::Show(this, "Функция будет доступна в следующих версиях приложения", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}	

	private: System::Void SolveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		double* measures,*_measures;
		try {
			System::Globalization::CultureInfo^ culture = gcnew System::Globalization::CultureInfo("en-Us", false);
			int n = MeasureGV->RowCount - 1;
			for (int i = 0; i < n; i++) {
				if (MeasureGV->Rows[i]->Cells[0]->Style->BackColor == Color::Red) {
					throw gcnew FormatException("Резльтат измерения №" + (i + 1) + " имеет неверный формат!");
				}
			}
			if (n < 4) throw gcnew NotSupportedException("Данные методы не применимы при количестве измерений меньше чем 4");
			if (n > 20) throw gcnew NotSupportedException("Для данного количества измерений нет данных");
			measures = new double[n];
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
				r = MessageBox::Show(this, "При данном уровне значимости в измерениях присутствует систематическая погрешность. Продолжить?", "Обнаруженна систематическая погрешность!", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
				if (r == System::Windows::Forms::DialogResult::Cancel) throw gcnew OperationCanceledException();
			}
			else {
				SysErrLabel->Visible = false;
			}
			//Смотрим промахи критерием Романовского
			int fails = 0;
			_measures = new double[n]; //Новый массив измерений, без промахов
			try {
				for (int i = 0; i < n; i++) {
					if (IsFailByRomanovsky(measures, i, n, MeanLevelCB->Text)) {
						MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::Orange;
						MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::Orange;
						fails++;
					}
					else {
						_measures[i - fails] = measures[i];
					}
				}
			}
			catch (Exception^) {
				throw gcnew DataException("В таблице `Romanovsky` не найдено значение при `n` = " + n + " и `q` = " + MeanLevelCB->Text);
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
			//Вычисляем границы доверительного интервала
			double bottom = Average(_measures, n - fails) - z*MeanSquareError(_measures, n - fails);
			double top = Average(_measures, n - fails) + z*MeanSquareError(_measures, n - fails);
			//Чистим график
			Chart->Series["line"]->Points->Clear();
			Chart->Series["top"]->Points->Clear();
			Chart->Series["bottom"]->Points->Clear();
			//Находим минимальные и максимальные значения
			double min = Min(measures, n);
			if (bottom < min) min = bottom;
			double max = Max(measures, n);
			if (top > max) max = top;
			//Располагаем среднее арифметическое в центре графика
			double distance = max - min;
			if (distance == 0) distance = 1;
			Chart->ChartAreas["Area"]->AxisY->Minimum = Average(measures, n) - distance;
			Chart->ChartAreas["Area"]->AxisY->Maximum = Average(measures, n) + distance;
			//Рисуем график
			for (int i = 0; i < n; i++) {
				Chart->Series["top"]->Points->Add(top);
				Chart->Series["line"]->Points->Add(measures[i]);
				Chart->Series["bottom"]->Points->Add(bottom);
			}
			AverageLabel->Text = String::Format("{0:0.0000}", Average(_measures, n - fails));
			IntervalLabel->Text = String::Format("({0:0.0000} ; {1:0.0000})", bottom, top);
			CountLabel->Text = n.ToString();
			FailCountLabel->Text = fails.ToString();
		}
		catch (OperationCanceledException^) {}
		catch (Exception^ e) {
			MessageBox::Show(this, e->Message, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally{
			delete[] measures;
			delete[] _measures;
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
		else {
			Regex^ regex = gcnew Regex("^[0-9]+\\.?[0-9]*$");
			if (!regex->IsMatch(MeasureGV->Rows[e->RowIndex]->Cells[1]->Value->ToString())) {
				MeasureGV->Rows[e->RowIndex]->Cells[0]->Style->BackColor = Color::Red;
				MeasureGV->Rows[e->RowIndex]->Cells[1]->Style->BackColor = Color::Red;
			}
			else {
				MeasureGV->Rows[e->RowIndex]->Cells[0]->Style->BackColor = Color::White;
				MeasureGV->Rows[e->RowIndex]->Cells[1]->Style->BackColor = Color::White;
			}
		}
	}

	private: void DeleteRow(int index) {
		MeasureGV->Rows->RemoveAt(index);
		int count = MeasureGV->RowCount;
		for (int i = index; i < count; i++) {
			MeasureGV->Rows[i]->Cells[0]->Value = i+1;
		}
	}
			 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutForm^ form = gcnew AboutForm();
		form->Show();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		UnderConstructionBox();
	}

	private: System::Void ClearButton_Click(System::Object^  sender, System::EventArgs^  e) {
		MeasureGV->Rows->Clear();
		MeasureGV->Rows[0]->Cells[0]->Value = 1;
		AverageLabel->Text = "";
		IntervalLabel->Text = "";
		CountLabel->Text = "";
		FailCountLabel->Text = "";
		Chart->Series["line"]->Points->Clear();
		Chart->Series["top"]->Points->Clear();
		Chart->Series["bottom"]->Points->Clear();
		SysErrLabel->Visible = false;
	}

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
		AverageLabel->Text = "";
		IntervalLabel->Text = "";
		CountLabel->Text = "";
		FailCountLabel->Text = "";
		Chart->Series["line"]->Points->Clear();
		Chart->Series["top"]->Points->Clear();
		Chart->Series["bottom"]->Points->Clear();
		SysErrLabel->Visible = false;
	}
};
}
