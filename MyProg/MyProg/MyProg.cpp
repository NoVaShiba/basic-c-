#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int mul(int x, int y);

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Один.\n";
	cout << "Два.\n";
	cout << "Три ";
	cout << "четыре";

	return 0;
}