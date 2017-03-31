#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;

	if (a < b) {
		cout << "Первое чило меньше второго.\n";
		cout << "Их разность равна: .\n" << b - a;
		cout << "Их сумма равна: .\n" << b + a;
	}
	else if (a > b) {
		cout << "Первое число больше второго.\n";
		cout << "Их разность равна: .\n" << a - b;
		cout << "Их сумма равна: .\n" << a + b;
	}


	return 0;
}