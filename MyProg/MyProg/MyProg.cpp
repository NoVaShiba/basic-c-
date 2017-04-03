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
		cout << "1. �������� ����� ���������� �����\n";
		cout << "2. �������\n";
		cout << "3. ����� �� ���������\n";
		do {
			cout << "������ ���� �������: ";
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
			cout << "�� ��������!\n";
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
		cout << "�������� ���������� �����: ";
		cin >> x;

		if (x == m) {
			cout << "** ���������**\n";
			return;
		}
		else {
			if (x < m) cout << "���������� ����� ������.\n";
			else cout << "���������� ����� ������.\n";
		}
	}
	cout << "�� ������������ ��� ����� ������� �����. "
		<< "����������� �����.\n";
}