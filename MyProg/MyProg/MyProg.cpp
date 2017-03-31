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

	if (a < b) cout << "Превое чило меньше второго.";
	else if (a > b) cout << "Первое число больше второго.";
	else if (a == b) cout << "Числа равны.";

	return 0;
}