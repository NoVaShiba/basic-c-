#include <iostream>
using namespace std;

int main()
{
	double gallons, liters;

	cout << "������� ���������� ��������: ";
	cin >> gallons;

	liters = gallons * 3.7854;

	cout << "������: " << liters;

	return 0;
}