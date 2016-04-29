#pragma once
#include <math.h> 

/**
 * Фунция вычисляющая среднее арифметическое массива измерений
 * Параметры:
 * +double measures - массив измерений
 * +int n - кол-во измерений
 * Автор: Сидоркин Владислав
 */
double Average(double *measures, int n) { 
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += measures[i];
	}
	return (sum/n);
}

/**
 * Фунция вычисляющая среднеквадратичное отклонение массива измерений
 * Параметры:
 * +double measures - массив измерений
 * +int n - кол-во измерений
 * Автор: Сидоркин Владислав
 */
double stdDeviation(double *measures, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (measures[i] - Average(measures, n))*(measures[i] - Average(measures, n));
	}
	return (sqrt(sum / (n-1)));
}

/**
 * Фунция вычисляющая среднеквадратичную погрешность массива измерений
 * Параметры:
 * +double measures - массив измерений
 * +int n - кол-во измерений
 * Автор: Сидоркин Владислав
 */
double MeanSquareError(double *measures, int n) {
	return (stdDeviation(measures, n)/sqrt(n));
}
