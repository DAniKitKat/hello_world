#include <iostream>
#include <cmath>
#include <iomanip>
#include <H:\Практика\Работа 6\Задание\Задание\usefulFunctions.h>
using namespace std;

int main() {
	double p, v, v0, v1;
	int k;

	setlocale(0, "Russian");
	cin.exceptions(istream::failbit | istream::failbit);
		cout << "Структура для формул Ньютона(формулы ускорения, силы массы и веса тела)"
			<< "\n\nВведите параметры тела:" 
			<< "\np(плотность) = ";
	try
	{
		cin >> p;
		cout << "v(объём) = ";
		cin >> v;
		cout << "v0(начальная скорость) = ";
		cin >> v0;
		cout << "v1(конечная скорость) = ";
		cin >> v1;
		cout << "\nВведите число символов после запятой в ответах: \n";
		cin >> k;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	double m = Newton::mass(p, v);
	double acc = Newton::acceleration(v0, v1);
	double weigh = Newton::weight(m);
	double f = Newton::force(m, acc);
	cout << "\nОтвет:\n";
	cout << "Масса тела = " << setprecision(k) << m << "кг" << endl;
	cout << "Ускорение тела: = " << setprecision(k) << acc << "м/с^2" << endl;
	cout << "Вес тела: = " << setprecision(k) << weigh << "кг" << endl;
	cout << "Сила: = " << setprecision(k) << f << "Н" << endl;
	return 0;
}
