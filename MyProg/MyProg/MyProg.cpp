#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

void func();

int main()
{
	setlocale(LC_ALL, "Russian");

	int x;

	x = 10;
	func();
	cout << "\n";
	cout << x;


	return 0;
}

void func() {
	int x;

	x = -199;
	cout << x;
}
