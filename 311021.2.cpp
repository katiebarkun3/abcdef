//Áàðêóí Åêàòåðèíà
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	double x, y;
	cin >> x;
	if (x > 0) { y = 2 * x - 10; }
	if (x == 0) { y = 0; }
	if (x < 0) { y = 2 * abs(x) - 1; }
	cout << y << endl;

	return 0;
}
