#include <iostream>
#include "Employee.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	EmployeeList listEmployers;
	bool pause = true;
	string choice, name, depatment;
	cout << "Конструктор создания рабочего (что бы вывести список отдела введите l, что бы закончить введите e)" << endl;

	while (pause)
	{

		cout << "Создаем начальника? (y/n)" << endl;
		cin >> choice;

		if (choice == "y") {
			cout << "Напишите отделение и имя:" << endl;
			cin >> name >> depatment;
			listEmployers.madeEmployee(name, depatment, true);
		}
		else if (choice == "n") {
			cout << "Напишите отделение и имя:" << endl;
			cin >> name >> depatment;
			listEmployers.madeEmployee(name, depatment);
		}
		else if (choice == "l") {
			cout << "Введите отдел:" << endl;
			cin >> depatment;
			listEmployers.depatmentInfo(depatment);
		}
		else if (choice == "l") {
			pause=false;
		}
		else {
			cout << "err" << endl;
		}

	}

	return 0;

}