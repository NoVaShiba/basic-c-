#include <iostream>
#include <locale>
using namespace std;

void myfunc();

int main()
{
	setlocale(LC_ALL, "Russian");
	double gallons, liters;

	cout << "В функции main().";
	myfunc();
	cout << "Снова в функции main().";

	return 0;
}

void myfunc()
{
	cout << "В функции myfunc().";
}