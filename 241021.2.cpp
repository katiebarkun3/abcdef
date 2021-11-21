//Баркун Екатерина
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	/*int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a > c) cout << a << endl;
	if (a > b && a < c) cout << a << endl;
	if (b < a && b > c) cout << b << endl;
	if (b > a && b < c) cout << b << endl;
	if (c < b && c > a) cout << c << endl;
	if (c > b && c < a) cout << c << endl;  4*/


	/*If14.Даны три числа.Вывести вначале наименьшее, а затем наибольшее из
		данных чисел.*/
	/*int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c && c > b) cout << b << a << endl;
	if (a > b && a > c && b > c) cout << c << a << endl;
	if (b > c && b > a && c > a) cout << a << b << endl;
	if (b > c && b > a && a > c) cout << c << b << endl;
	if (c > b && c > a && b > a) cout << a << c << endl;
	if (c > b && c > a && a > b) cout << b << c << endl;  5*/


	/*If24.Для данного вещественного x найти значение следующей функции f,
		принимающей вещественные значения :
	f(x) = 2·sin(x), если x > 0,
		6 − x, если x ≤ 0.*/
	/*double x, fx;
	cin >> x;
	if (x > 0) {
		fx = 2 * sin(x);
	}
	else {
		fx = 6 - x;
	}
	cout << fx;*/


	/*If25.Для данного целого x найти значение следующей функции f, принимающей значения целого типа :
	f(x) = 2·x, если x < −2 или x > 2,
		−3·x, в противном случае.*/
	/*int x, fx;
	cin >> x;
	if (x < -2 || x > 2) {
		fx = 2 * x;
	}
	else {
		fx = -3 * x;
	}
	cout << fx;   6*/


	/*If26◦
		.Для данного вещественного x найти значение следующей функции f,
		принимающей вещественные значения :
	−x, если x ≤ 0,
		f(x) = x
		2
		, если 0 < x < 2,
		4, если x ≥ 2.*/
	/*double x, z;
	cin >> x;
	if (x <= 0) z = -x;
	if (x > 0 && x < 2) z = x * x;
	if (x >= 2) z = 4;
	cout << z << endl;   7*/


	/*If27.Для данного вещественного x найти значение следующей функции f,
		принимающей значения целого типа :
	0, если x < 0,
		f(x) = 1, если x принадлежит[0, 1), [2, 3), . . .,
		−1, если x принадлежит[1, 2), [3, 4), . . . .*/
	/*int x, z;
	cin >> x;
	if (x < 0) z = 0;
	if (x % 2 == 0 && x > 0) z = 1;
	if (x % 2 == 1 && x > 0) z = -1;
	cout << z << endl;   8*/




	return 0;
}
