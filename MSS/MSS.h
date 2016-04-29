#pragma once
#include <math.h> 

/**
 * ������ ����������� ������� �������������� ������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: �������� ���������
 */
double Average(double *measures, int n) { 
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += measures[i];
	}
	return (sum/n);
}

/**
 * ������ ����������� ������������������ ���������� ������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: �������� ���������
 */
double stdDeviation(double *measures, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (measures[i] - Average(measures, n))*(measures[i] - Average(measures, n));
	}
	return (sqrt(sum / (n-1)));
}

/**
 * ������ ����������� ������������������ ����������� ������� ���������
 * ���������:
 * +double measures - ������ ���������
 * +int n - ���-�� ���������
 * �����: �������� ���������
 */
double MeanSquareError(double *measures, int n) {
	return (stdDeviation(measures, n)/sqrt(n));
}

void Sort(double *measures, int n) {

}