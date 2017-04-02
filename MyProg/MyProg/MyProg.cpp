#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

void total(int x);


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Вычисление суммы числел от 1 до 5.\n";
	total(5);

	cout << "\nВычисление суммы чисел от 1 до 6 .\n";
	total(6);

	system("pause");
	return 0;
}

void total(int x)
{
	int sum = 0;
	int i, count;

	for (i = 1; i <= x; i++) {
		sum = sum + i;
		for (count = 0; count < 10; count++) cout << '.';
		cout << "Промежуточная сумма равна " << sum << '\n';
	}
}