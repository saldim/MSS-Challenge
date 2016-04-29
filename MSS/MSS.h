#pragma once
/**
* Фунция вычисляющая среднее арифметическое массива измерений
* Параметры:
+double measures - массив измерений
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