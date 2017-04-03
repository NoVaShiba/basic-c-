#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

void play(int m);

int main()
{
	setlocale(LC_ALL, "Russian");

	int option;
	int magic; 

	magic = rand();

	do {
		cout << "1. Получить новое магическое число\n";
		cout << "2. Сыграть\n";
		cout << "3. Выйти из программы\n";
		do {
			cout << "Введте свой вариант: ";
			cin >> option;
		} while (option < 1 || option > 3);
		switch (option) {
		case 1:
			magic = rand();
			break;
		case 2:
			play(magic);
			break;
		case 3:
			cout << "До свидания!\n";
			break;
		}
	} while (option != 3);
	
	system("pause");
	return 0;
}

void play(int m)
{
	int t, x;

	for (t = 0; t < 100; t++) {
		cout << "Угадайте магическое число: ";
		cin >> x;

		if (x == m) {
			cout << "** Правильно**\n";
			return;
		}
		else {
			if (x < m) cout << "Магическое число больше.\n";
			else cout << "Магическое число меньше.\n";
		}
	}
	cout << "Вы использовали все шансы угадать число. "
		<< "Попытайтесь снова.\n";
}