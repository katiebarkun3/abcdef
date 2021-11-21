// Баркун Екатерина
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
		недели, соответствующее данному числу(1 — «понедельник», 2 — «вторник и тп*/
		/*int day;
		cin >> day;
		switch (day) {
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		default: cout << "Error" << endl;
		}
		*/
		/*int grade;
		cin >> grade;
		switch (grade) {
		case 1: cout << "плохо" << endl; break;
		case 2: cout << "неудовлетворительно" << endl; break;
		case 3: cout << "удовлетворительно" << endl; break;
		case 4: cout << "хорошо" << endl; break;
		case 5: cout << "отлично" << endl; break;
		default: cout << "Error" << endl;
		}      1*/



		/*Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
			«весна», «лето», «осень»).*/
			/*int month;
			cin >> month;
			switch (month) {
			case 1:
			case 2:
			case 12: cout << "зима\n"; break;
			case 3:
			case 4:
			case 5: cout << "весна\n"; break;
			case 6:
			case 7:
			case 8: cout << "лето\n"; break;
			case 9:
			case 10:
			case 11: cout << "осень\n"; break;
			default: cout << "ошибка" << endl;
			}*/


			/*Case4◦
				.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
					февраль и т.д.).Определить количество дней в этом месяце
				для невисокосного года.*/
				/*int month;
				cin >> month;
				switch (month) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: cout << "31 день\n"; break;
				case 2:cout << "28 дней\n"; break;
				case 4:
				case 6:
				case 9:
				case 11: cout << "30 дней\n"; break;
				default: cout << "ошибка" << endl;
				}*/


				/*Case5.Арифметические действия над числами пронумерованы следующим
				 образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
				 номер действия N(целое число в диапазоне 1–4) и вещественные числа A
				 и B(В не равно 0).Выполнить над числами указанное действие и вывести
				 результат.*/
				 /*int a, A, B;
				 double b;
				 cin >> a >> A >> B;
				 switch (a) {
				 case 1: b = A + B;  break;
				 case 2: b = A - B;  break;
				 case 3: b = A * B;  break;
				 case 4: b = (double)A / B;  break;
				 }
				 cout << b;   2*/



				 /*Case6.Единицы длины пронумерованы следующим образом : 1 — дециметр,
					 2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр.Дан номер
					 единицы длины(целое число в диапазоне 1–5) и длина отрезка в этих
					 единицах(вещественное число).Найти длину отрезка в метрах.*/
					 /*int a, A;
					 double b;
					 cin >> a >> A;
					 switch (a) {
					 case 1: b = A * 0.1; break;
					 case 2: b = A * 1000; break;
					 case 3: b = A; break;
					 case 4: b = A * 0.001; break;
					 case 5: b = A * 0.01; break;

					 }
					 cout << b << " " << "метров\n";    3*/



					 //Case7.Единицы массы пронумерованы следующим образом : 1 — килограмм,
					 //2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер.
					 //Дан номер единицы массы(целое число в диапазоне 1–5) и масса тела в этих единицах
					 //(вещественное число).Найти массу тела в килограммах
					 //int a, A;
					 //double b;
					 //cin >> a >> A;
					 //switch (a) {
					 //case 1: b = A; break;
					 //case 2: b = (double)A / 1E6; break;
					 //case 3: b = A * 0.001; break;
					 //case 4: b = A * 1000; break;
					 //case 5: b = A * 100; break;
					 //
					 //}
					 //cout << b << " " << "килограмм\n"     4;



					 //Case10.Робот может перемещаться в четырех направлениях(«С» — север,
					 //	«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды :
					 //0 — продолжать движение, 1 — поворот налево, −1 — поворот
					 //	направо.Дан символ C — исходное направление робота и целое число N
					 //	— посланная ему команда.Вывести направление робота после выполнения
					 //	полученной команды.
	
	char c;
	int n;
	cin >> c >> n;
	switch (c) {
	case 'Z':
		switch (n) {
		case -1: cout << "Север" << endl; break;
		case 0: cout << "Запад" << endl; break;
		case 1: cout << "Юг" << endl; break;
		} 
		break;
	case 'S':
		switch (n) {
		case -1: cout << "Восток" << endl; break;
		case 0: cout << "Север" << endl; break;
		case 1: cout << "Запад" << endl; break;
		}break;
	case 'U':
		switch (n) {
		case -1: cout << "Запад" << endl; break;
		case 0: cout << "Юг" << endl; break;
		case 1: cout << "Восток" << endl; break;
		}break;
	case 'V':
		switch (n) {
		case -1: cout << "Юг" << endl; break;
		case 0: cout << "Восток" << endl; break;
		case 1: cout << "Север" << endl; break;
		}break;
	}



	return 0;
}
