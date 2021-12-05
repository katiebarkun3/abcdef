#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
//çàïîëíåíèå ìàòðèöû ðàíäîìíûìè ÷èñëàìè
void fill_rand(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}

//âûâîä ìàòðèöû íà ýêðàí
void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}

//íàïèñàòü ôóíêöèþ, êîòîðàÿ âû÷èñëèò êîë-âî ÷¸òíûõ ýëåìåíòîâ â ìàòðèöå
int count_chot(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 2 == 0) k++;
		}
	}
	return k;
}

//íàïèñàòü ôóíêöèþ, êîòîðàÿ âû÷èñëèò êîë-âî ïîëîæèòåëüíûõ ýëåìåíòîâ â ìàòðèöå
int count_positive(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > 0) k++;
		}
	}
	return k;
}

//ïðîèçâåäåíèå ÷èñåë â ñòðîêå k
int count_proizk(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

		}
	}
	int k, a = 1;
	cout << "ââåäèòå íîìåð ñòðîêè\n";
	cin >> k;
	for (int p = 0; p < m; p++) {
		a *= mas[k][p];
	}
	return a;
}

//óìíîæåíèå ìàòðèöû íà ÷èñëî
void matrica_na_chislo(int** mas, int n, int m, int number) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= number;
		}
	}
}

	//ñðåäíåå àðèôìåòè÷åñêîå ãëàâíîé äèàãîíàëè
	double sred_arifm_glavn_diag(int** mas, int n, int m) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
				sum += mas[i][i];
		}
		return static_cast<double>(sum) / n;
}

	//ñóììà ýëåìåíòîâ ãëàâíîé äèàãîíàëè
	int sum_main(int** mas, int n, int m) {
		int s = 0;
		for (int i = 0, i < n, i++) {
			s += mas[i][i];
		}
		return s;
	}

	//ôàêòîðèàë
	long long int fact(int k) {
		long long int f = 1;
		for (int i = 0; i <= k; i++) {
			f *= i;
		}
		return f;
	}

	//ðàçâåðíóòü âûáðàííóþ ñòðîêó 1 2 3 4 5
	//5 4 3 2 1
	void reverse_row(int** mas, int k, int m) {
		int s = m / 2;
		for (int j = 0; j < s; j++) {
			swap(mas[k][j], mas[k][m - 1 - j]);
		}
	}
