#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int count;

	for (count = 1; count <= 100; count = count + 1)
		cout << count << " ";


	return 0;
}