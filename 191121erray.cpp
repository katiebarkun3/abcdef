//Баркун Екатерина
#include <iostream>
#include <ctime>
using namespace std;
int main() {


	/*  1         Series4.Дано целое число N и набор из N вещественных чисел.Вывести
		сумму и произведение чисел из данного набора.*/
		/* const int size = 10;
		 double mas[size];
		 for (int i = 0; i < size; i++) {
			 cin >> mas[i];
		 }
		 double a = 0, sum = 0, pr = 1;
		 for (int i = 0; i < size; i++) {
			 sum += mas[i];
			 pr *= mas[i];
		 }
		 cout << "pr = " << pr << endl;
		 cout << "sum = " << sum << endl;*/


		 /*    2          Series5.Дано целое число N и набор из N положительных вещественных
			 чисел.Вывести в том же порядке целые части всех чисел из данного
			 набора(как вещественные числа с нулевой дробной частью), а также
			 сумму всех целых частей.*/
			 /*const int size = 10;
			 double mas[size];
			 for (int i = 0; i < size; i++) {
				 cin >> mas[i];
			 }
				 int s = 0;
			 for (int i = 0; i < size; i++) {
				 s = mas[i];
					 cout << s << endl;
			 }*/


			 /*Series7.Дано целое число N и набор из N вещественных чисел.Вывести в
				 том же порядке округленные значения всех чисел из данного набора(как
					 целые числа), а также сумму всех округленных значений.*/
					 //const int n = 15;
					 //double arr[n];
					 //srand(time(nullptr));
					 //for (int i = 0; i < n; i++) {
					 //	arr[i] = (rand() % 110 - 50)/100000.0;
					 //}
					 //for (int i = 0; i < n; i++) {
					 //	cout << arr[i] << ' ' ;
					 //}
					 //cout << endl;
					 //for (int i = 0; i < n; i++) {
					 //	cout << round(arr[i]*10000)/10000 << ' ';
					 //}


					 /*     3     Series8.Дано целое число N и набор из N целых чисел.Вывести в том же
						 порядке все четные числа из данного набора и количество K таких чисел.*/
						 /*const int n = 15;
						 int arr[n];
						 srand(time(nullptr));
						 for (int i = 0; i < n; i++) {
							 arr[i] = (rand() % 21 - 10);
							 cout << arr[i] << ' ';
						 }
						 cout << endl;
						 int k = 0;
						 for (int i = 0; i < n; i++) {
							 if (arr[i] % 2 == 0) {
								 k++;
								 cout << arr[i] << ' ';
							 }
						 }
						 cout << endl << k << endl;*/


						 /*Series9.Дано целое число N и набор из N целых чисел.Вывести в том же
							 порядке номера всех нечетных чисел из данного набора и количество K
							 таких чисел.*/
							 /*const int n = 15;
							 int arr[n];
							 srand(time(0));
							 for (int i = 0, i < n, i++) {
								 arr[i] = rand() % 16;
							 }
							 int k = 0;
							 for (int i = 0, i < n, i++) {
								 if (arr[i] % 2 != 0) {
									 cout << i << ' ';
									 k++;
								 }
							 }
							 cout << endl << k << endl;*/


	 /*Series10.Дано целое число N и набор из N целых чисел.Если в наборе
	имеются положительные числа, то вывести TRUE; в противном случае
	 вывести FALSE*/
	//const int n = 5;
	//int arr[n];
	//for (int i = 0, i < n, i++) {
	//	arr[i] = rand() % 11 - 5;
	//}
	//for (int i = 0, i < n, i++) {
	//	cout << arr[i] << ' ';
	//}
	//cout << endl;
	//int i = 0;
	//bool res = false;
	//while (arr[i] <= 0 && i < n) {
	//	i++;
	//}
	//if (i < n) res = true;
	//cout << boolalpha << res << endl;
// or
/*   int k=0;
     for ( int i = 0, i < n, i++) {
     if ( arr [i] > 0) k++;
     }
     bool res;
     if (k > 0) res = true;
     else res = false;
     cout << boolalpha << res << endl; */

	return 0;
}