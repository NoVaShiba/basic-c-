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

	if (a < b) cout << "������ ���� ������ �������.";
	else if (a > b) cout << "������ ����� ������ �������.";
	else if (a == b) cout << "����� �����.";

	return 0;
}