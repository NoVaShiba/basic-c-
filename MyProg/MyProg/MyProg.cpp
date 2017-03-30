#include <iostream>
using namespace std;

int main()
{
	double gallons, liters;

	cout << "¬ведите количество галлонов: ";
	cin >> gallons;

	liters = gallons * 3.7854;

	cout << "Ћитров: " << liters;

	return 0;
}