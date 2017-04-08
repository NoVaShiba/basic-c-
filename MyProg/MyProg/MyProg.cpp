#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[3][2] = { {2, 5}, {2, 7}, {5, 7} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << " " << arr[i][j];
		}
		cout << endl;
	}
	/*for (int i = 0; i < 5; i++) {
		cout << arr[i] << "\n" ;
	}*/
	
	system("pause");
	return 0;
}