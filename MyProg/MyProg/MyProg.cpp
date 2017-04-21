#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

enum mall {parking = -1, hall, many_shops, roof};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int floor;
	bool exit = false;

	while (!exit) {
		cout << "Enter your floor (from -1 to 2): " << endl;
		cin >> floor;
		switch (floor) {
			case parking:
				cout << "You on the -1 floor - parking" << endl;
				break;
			case hall:
				cout << "You on the 0 floor - hall" << endl;
				break;
			case many_shops:
				cout << "You on the 1 floor - many shops" << endl;
				break;
			case roof:
				cout << "You on the 2 floor - roof" << endl;
				break;
			default:
				cout << "Floors only from -1 to 2" << endl;
		}
		cout << "If yo want play again press 0 or press 1 to exit this game" << endl;
		cin >> exit;
	}

	system("pause");
	return 0;
}
