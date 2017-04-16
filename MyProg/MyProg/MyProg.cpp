#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

void drill();

int coun;  //���������� cout � num_right -- ����������.
int num_right;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "������� ������������ ����������: ";
	cin >> coun;

	num_right = 0;
	do {
		drill();
		coun--;
	} while (coun);
	cout << " �� ���� " << num_right << " ���������� �������.\n";

	system("pause");
	return 0;
}

void drill()
{
	int count; //��� ���������� count -- �������� � ����� �� �������� � ����������� ����������.
	int a, b, ans;

	//���������� ����� �� 0 �� 99.
	a = rand() % 100;
	b = rand() % 100;

	//������������ �������� ��� ������� ���� ���������� �����
	for (count = 0; count < 3; count++) {
		cout << "\n������� ����� " << a << " + " << b << "?" << '\n';
		cin >> ans;
		if (ans == a + b) {
			cout << "���������.";
			num_right++;
			return;
		}
	}
	cout << "�� ������������ ��� �������.\n";
	cout << "����� ����� " << a + b << '\n';
}