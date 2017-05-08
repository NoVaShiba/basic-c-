#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

class Auto {
private:
	int day, month, year;
	char nameAuto;
public:
	void message() {
		cout << "Класс работает." << endl;
	}

	void set(int date_day, int date_moth, int date_year, char name_Auto) {
		day = date_day;
		month = date_moth;
		year = date_year;
		nameAuto = name_Auto;
	}

	void get() {
		cout << "Год выпуска этой машины - " << year << "\nМесяц выпуска этой машины - " << month << "\nДень выпуска этой машины - " << day << "\nНазвание машиный - " << nameAuto << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	Auto shkoda;
	shkoda.message();
	shkoda.set(17, 10, 2005, 'sh');
	shkoda.get();

	system("pause");
	return 0;
}
