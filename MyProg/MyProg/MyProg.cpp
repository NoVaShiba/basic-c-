#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int choice;

	cout << "(1) сложить числа или ";
	cout << "(2) конкатенировать строки?: ";

	cin >> choice;
	if (choice == 1) {
		int a, b;
		cout << "Введите два числа: ";
		cin >> a >> b;
		cout << "Их сумма равна: " << a + b << '\n';
	}
	else {
		char s1[80], s2[80];
		cout << "Введите две стоки: ";
		cin >> s1;
		cin >> s2;
		strcat_s(s1, s2);
		cout << "Конкатенация равна: " << s1 << '\n';
	}

	system("pause");
	return 0;
}