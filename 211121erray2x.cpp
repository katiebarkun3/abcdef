//Баркун Екатерина
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	/*Matrix1.Даны целые положительные числа M и N.
		Сформировать целочисленную матрицу размера M × N, у которой все элементы
		I - й строки имеют
		значение 10·I(I = 1, . . ., M).*/
		//const int n = 5;
		//const int m = 4;
		//int mas[n][m];
		////заполнение двумерного массива
		//for (int i = 0; i < n; i++) { //цикл по строкам, переключает номера строк
		//	for (int j = 0; j < m; j++) {  //цикл по столбцам, переключает номера столбцов
		//		mas[i][j] = 10 * i;
		//	}
		//}
		////вывод двумерного массива на экран
		//for (int i = 0; i < n; i++) { //цикл по строкам, переключает номера строк
		//	for (int j = 0; j < m; j++) {  //цикл по столбцам, переключает номера столбцов
		//		cout << mas[i][j] << ' ';
		//	}
		//	cout << endl;
		//} 


		/*Matrix2.Даны целые положительные числа M и N.
			Сформировать целочисленную матрицу размера M × N,
			у которой все элементы J - го столбца
			имеют значение 5·J(J = 1, . . ., N).*/
	/*const int n = 5;
	const int m = 6;
	int mas[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = 5 * j;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << ' ';
		}
		cout << endl;
	}*/


	/*Matrix7◦
		.Дана матрица размера M × N и целое число K(1 ≤ K ≤ M).Вывести
		элементы K - й строки данной матрицы.*/
	/*const int n = 3;
	const int m = 5;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	int k;
	cout << "enter row number\n";
	cin >> k;
	for (int p = 0; p < m; p++) {
		cout << mas[k][p] << ' ';
	}*/


	/*Matrix8.Дана матрица размера M × N и целое число K(1 ≤ K ≤ N).Вывести
		элементы K - го столбца данной матрицы.*/	/*const int n = 3;
	const int m = 5;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	int k;
	cout << "enter r number\n";
	cin >> k;
	for (int p = 0; p < n; p++) {
		cout << mas[p][k] << endl;
	}   1*/


	/*Matrix9.Дана матрица размера M × N.Вывести ее элементы, расположенные
		в строках с четными номерами(2, 4, . . .).Вывод элементов производить
		по строкам, условный оператор не использовать.*/	/*const int n = 10;
	const int m = 10;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int k = 0; k < n; k += 2) {
		for (int p = 0; p < m; p++) {
			cout << mas[k][p] << ' ';
		}
		cout << endl;
	}  2*/
	return 0;
}