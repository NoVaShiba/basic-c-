#include <iostream>
#include <locale>
using namespace std;

void myfunc();

int main()
{
	setlocale(LC_ALL, "Russian");
	double gallons, liters;

	cout << "� ������� main().";
	myfunc();
	cout << "����� � ������� main().";

	return 0;
}

void myfunc()
{
	cout << "� ������� myfunc().";
}