#pragma once
#include <cmath> 

namespace MSS {
	using namespace System::Data::SQLite;
	using namespace System::Diagnostics;

	/**
	 * Фунция вычисляющая среднее арифметическое массива измерений
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * Автор: Сидоркин Владислав
	 */
	double Average(double *measures, int n) {
		double sum = 0;
		for (int i = 0; i < n; i++) {
			sum += measures[i];
		}
		return sum / n;
	}

	/**
	 * Фунция вычисляющая среднеквадратичное отклонение массива измерений
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * Автор: Сидоркин Владислав
	 */
	double StdDeviation(double *measures, int n) {
		double sum = 0;
		for (int i = 0; i < n; i++) {
			sum += pow(measures[i] - Average(measures, n), 2);
		}
		return sqrt(sum / (n - 1));
	}

	/**
	 * Фунция вычисляющая среднеквадратичную погрешность массива измерений
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * Автор: Сидоркин Владислав
	 */
	double MeanSquareError(double *measures, int n) {
		return StdDeviation(measures, n) / sqrt(n);
	}

	/**
	 * Функция сортирующая по возрастанию массив результатов измерений
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * Автор: Нигаматьянов Рафис
	 */
	void Sort(double *measures, int n) {
		double temp;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++)
				if (measures[j] > measures[j + 1]) {
					temp = measures[j];
					measures[j] = measures[j + 1];
					measures[j + 1] = temp;
				}
		}
	}

	/**
	 * Функция определяющая является ли i-ый результат измерения промахом критерием Романовского
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int i - переменная
	 * +int n - кол-во измерений
	 * +System::String^ q - уровень значимости
	 * Автор: Нигаматьянов Рафис, Ардесов Вячеслав(работа с бд)
	 */
	bool IsFailByRomanovsky(double *measures, int i, int n, System::String^ q) {
		double beta = abs(Average(measures, n) - measures[i]) / StdDeviation(measures, n);
		SQLiteConnection^ connect = gcnew SQLiteConnection("Data Source=tables.db3; Version=3;");
		connect->Open();
		SQLiteCommand^ cmd = gcnew SQLiteCommand("SELECT value FROM Romanovsky WHERE n=" + n + " AND q=" + q + ";", connect);
		SQLiteDataReader^ reader = cmd->ExecuteReader();
		reader->Read();
		double betaq = reader->GetDouble(0); //Пороговое значение критерия Романовского
		connect->Close();
		return beta > betaq;
	}

	/**
	 * Функция для определения наличия систематической погрешности критерием Аббе
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * +System::String^ q - уровень значимости
	 * Автор: Нигаматьянов Рафис, Ардесов Вячеслав(работа с бд)
	 */
	bool IsSystematicError(double *measures, int n, System::String^ q) {
		double sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += pow(measures[i + 1] - measures[i], 2);
		}
		double V = (sum / (2 * (n - 1))) / pow(StdDeviation(measures, n), 2);
		SQLiteConnection^ connect = gcnew SQLiteConnection("Data Source=tables.db3; Version=3;");
		connect->Open();
		SQLiteCommand^ cmd = gcnew SQLiteCommand("SELECT value FROM Abbe WHERE n="+n+" AND q="+q+";", connect); 
		SQLiteDataReader^ reader = cmd->ExecuteReader();
		reader->Read();
		double Vq = reader->GetDouble(0); //Пороговое значение критерия Аббе
		connect->Close();
		return V < Vq;
	}

	/**
	 * Фунция для нахождения минимального элемента массива измерений.
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * Автор: Сидоркин Владислав
	 */
	double Min(double *measures, int n) {
		double min = measures[0];
		for (int i = 1; i < n; i++) {
			if (min > measures[i]) {
				min = measures[i];
			}
		}
		return min;
	}

	/**
	 * Фунция для нахождения максимального элемента массива измерений.
	 * Параметры:
	 * +double *measures - массив измерений
	 * +int n - кол-во измерений
	 * Автор: Нигаматьянов Рафис
	 */
	double Max(double *measures, int n) {
		double max = measures[0];
		for (int i = 1; i < n; i++) {
			if (max < measures[i]) {
				max = measures[i];
			}
		}
		return max;
	}
}
