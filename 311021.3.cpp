﻿//Баркун Екатерина
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	/*double x, y;
	cin >> x;
	if (x > 0) { y = 2 * x - 10; }
	if (x == 0) { y = 0; }
	if (x < 0) { y = 2 * abs(x) - 1; }
	cout << y << endl;*/

	/*For1.Даны целые числа K и N(N > 0).Вывести N раз число K.*/
	//int n, k;
	//cin >> n >> k;
	//for (int i = 0; i < n; i++) {
	//	cout << k << ' '; // тело цикла
	//}
	//cout << endl;
	//

	/*For2.Даны два целых числа A и B(A < B).Вывести в порядке возрастания все
		целые числа, расположенные между A и B(включая сами числа A и B), а
		также количество N этих чисел.*/
	/*int a, b;
	int n = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		cout << i << ' ';
		n++;
	}
	cout << "n = " << n << endl;*/



	/*For3.Даны два целых числа A и B(A < B).Вывести в порядке убывания все
		целые числа, расположенные между A и B(не включая числа A и B), а
		также количество N этих чисел.*/
	/*int a, b;
	cin >> a >> b;
	int n = 0;
	for (int i = b - 1; i > a; i--) {
		cout << i << ' ';
		n++;
	}
	cout << "n = " << n << endl;*/


	/*For4.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1,
		2, . . ., 10 кг конфет.*/
	/*int a;
	cin >> a;
	for (int i = 1; i <= 10; i++) {
		cout << i << "kg = " << a * i << endl;
	}     1*/
	

	/*For5◦
		.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
		0.2, . . ., 1 кг конфет.*/
	double a;
	cin >> a;
	for (double i = 0.1; i <= 1; i++) {
		cout << i << "kg = " << a * i << endl;
	}


	return 0;
}
