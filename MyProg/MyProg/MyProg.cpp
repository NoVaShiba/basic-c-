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
		cout << "����� ��������." << endl;
	}

	void set(int date_day, int date_moth, int date_year, char name_Auto) {
		day = date_day;
		month = date_moth;
		year = date_year;
		nameAuto = name_Auto;
	}

	void get() {
		cout << "��� ������� ���� ������ - " << year << "\n����� ������� ���� ������ - " << month << "\n���� ������� ���� ������ - " << day << "\n�������� ������� - " << nameAuto << endl;
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
