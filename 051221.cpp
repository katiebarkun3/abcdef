//Баркун Екатерина
#include <iostream>
#include <ctime>
#include <iomanip>
#include "myfunk.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n = 5;
	int m = 5;
	int** mas;
	mas = new int* [n];//выделение памяти под одномерный массив, который хранит адреса строк
	//выделение памяти под строки
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m]; //выучить
	}
	fill_rand(mas, n, m);
	print_matrix(mas, n, m);
	cout << endl;
	/*print_matrix(mas, n, m);
	cout << "кол-во положительных " << count_positive(mas, n, m) << endl;
	cout << "кол-во чётных " << count_chot(mas, n, m) << endl;
	cout << "произведение строки k " << count_proizk(mas, n, m) << endl;*/
	//matrica_na_chislo(mas, n, m, 2);
	//print_matrix(mas, n, m);
	cout << "среднее арифметическое главной диагонали" << sred_arifm_glavn_diag(mas, m, n) << endl;
	cout << "факториал суммы" << fact(sred_arifm_glavn_diag(mas, m, n)) << endl;
	reverse_row(mas, 0, m);
	print_matrix(mas, n, m);
}