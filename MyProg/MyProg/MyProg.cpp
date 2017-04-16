#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

void drill();

int coun;  //Переменные cout и num_right -- глобальные.
int num_right;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "Сколько практических упражнений: ";
	cin >> coun;

	num_right = 0;
	do {
		drill();
		coun--;
	} while (coun);
	cout << " Вы дали " << num_right << " правильных ответов.\n";

	system("pause");
	return 0;
}

void drill()
{
	int count; //Эта переменная count -- локальна и никак не связанна с одноименной глобальной.
	int a, b, ans;

	//Генерируем числа от 0 до 99.
	a = rand() % 100;
	b = rand() % 100;

	//Пользователь получает три попытки дать правильный ответ
	for (count = 0; count < 3; count++) {
		cout << "\nСколько будет " << a << " + " << b << "?" << '\n';
		cin >> ans;
		if (ans == a + b) {
			cout << "Правильно.";
			num_right++;
			return;
		}
	}
	cout << "Вы использовали все попытки.\n";
	cout << "Ответ равен " << a + b << '\n';
}