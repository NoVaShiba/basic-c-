#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int choice;

	cout << "(1) ������� ����� ��� ";
	cout << "(2) ��������������� ������?: ";

	cin >> choice;
	if (choice == 1) {
		int a, b;
		cout << "������� ��� �����: ";
		cin >> a >> b;
		cout << "�� ����� �����: " << a + b << '\n';
	}
	else {
		char s1[80], s2[80];
		cout << "������� ��� �����: ";
		cin >> s1;
		cin >> s2;
		strcat_s(s1, s2);
		cout << "������������ �����: " << s1 << '\n';
	}

	system("pause");
	return 0;
}