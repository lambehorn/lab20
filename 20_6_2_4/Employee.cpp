#include "Employee.h"
#include <iostream>

using namespace std;

void Employee::setChief(string chief) {// ������ �������
	if (this->name == chief) {
		isChief = true;
	}
	this->chief = chief;
}

string Employee::getName() {
	return this->name;
}

void Employee::infoOut() { //����� ����
	if (!isChief) {
		cout << name << " �������� � ������ " << department << ", ��������� �������� " << chief << endl;
	}
	else {
		cout << name << " ��������� ������ " << department << endl;
	}

}