#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int mul(int x, int y);

int main()
{
	setlocale(LC_ALL, "Russian");

	int answer;

	answer = mul(10, 11);

	cout << "Ответ равен " << answer;

	return 0;
}
int mul(int x, int y)


{
	return x * y;
}