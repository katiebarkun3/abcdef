#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
//заполнение матрицы рандомными числами
void fill_rand(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}

//вывод матрицы на экран
void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}

//написать функцию, которая вычислит кол-во чётных элементов в матрице
int count_chot(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 2 == 0) k++;
		}
	}
	return k;
}

//написать функцию, которая вычислит кол-во положительных элементов в матрице
int count_positive(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > 0) k++;
		}
	}
	return k;
}

//произведение чисел в строке k
int count_proizk(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

		}
	}
	int k, a = 1;
	cout << "введите номер строки\n";
	cin >> k;
	for (int p = 0; p < m; p++) {
		a *= mas[k][p];
	}
	return a;
}

//умножение матрицы на число
void matrica_na_chislo(int** mas, int n, int m, int number) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= number;
		}
	}
}

	//среднее арифметическое главной диагонали
	double sred_arifm_glavn_diag(int** mas, int n, int m) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
				sum += mas[i][i];
		}
		return static_cast<double>(sum) / n;
}

	//сумма элементов главной диагонали
	int sum_main(int** mas, int n, int m) {
		int s = 0;
		for (int i = 0, i < n, i++) {
			s += mas[i][i];
		}
		return s;
	}

	//факториал
	long long int fact(int k) {
		long long int f = 1;
		for (int i = 0; i <= k; i++) {
			f *= i;
		}
		return f;
	}

	//развернуть выбранную строку 1 2 3 4 5
	//5 4 3 2 1
	void reverse_row(int** mas, int k, int m) {
		int s = m / 2;
		for (int j = 0; j < s; j++) {
			swap(mas[k][j], mas[k][m - 1 - j]);
		}
	}
