#include "Employee.h"
#include <iostream>

using namespace std;

void Depatment::Employee::setChief(string chief) {// ������ �������
	if (this->name == chief) {
		isChief = true;
	}
	this->chief = chief;
}

string Depatment::Employee::getName() {
	return this->name;
}

void Depatment::Employee::infoOut() { //����� ����
	if (!isChief) {
		cout << name << " �������� � ������ " << department << ", ��������� �������� " << chief << endl;
	}
	else {
		cout << name << " ��������� ������ " << department << endl;
	}

}