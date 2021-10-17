#include <iostream>
using namespace std;
int main() {

	/*Boolean14◦
		.Даны три целых числа : A, B, C.
		Проверить истинность высказывания : «Ровно одно из чисел A, B, C положительное»*/
	/*int a, b, c;
	bool res;
	cin >> a >> b >> c;
	res = (a > 0 && b < 0 && c < 0) || (a < 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0);
	//res = a*b*c>0
	cout << boolalpha << res << endl;*/



	/*Boolean15◦
		.Даны три целых числа : A, B, C.Проверить истинность высказывания :
	«Ровно два из чисел A, B, C являются положительными».*/
	int a, b, c;
	bool res;
	cin >> a >> b >> c;
	res = a * b * c < 0;
	cout << boolalpha << res << endl;
	return 0;
}
