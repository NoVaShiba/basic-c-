#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;

	if (a < b) {
		cout << "������ ���� ������ �������.\n";
		cout << "�� �������� �����: .\n" << b - a;
		cout << "�� ����� �����: .\n" << b + a;
	}
	else if (a > b) {
		cout << "������ ����� ������ �������.\n";
		cout << "�� �������� �����: .\n" << a - b;
		cout << "�� ����� �����: .\n" << a + b;
	}


	return 0;
}