#include <iostream>
#include "Employee.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	EmployeeList listEmployers;
	bool pause = true;
	string choice, name, depatment;
	cout << "����������� �������� �������� (��� �� ������� ������ ������ ������� l, ��� �� ��������� ������� e)" << endl;

	while (pause)
	{

		cout << "������� ����������? (y/n)" << endl;
		cin >> choice;

		if (choice == "y") {
			cout << "�������� ��������� � ���:" << endl;
			cin >> name >> depatment;
			listEmployers.madeEmployee(name, depatment, true);
		}
		else if (choice == "n") {
			cout << "�������� ��������� � ���:" << endl;
			cin >> name >> depatment;
			listEmployers.madeEmployee(name, depatment);
		}
		else if (choice == "l") {
			cout << "������� �����:" << endl;
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