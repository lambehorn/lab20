#include "Employee.h"
#include <iostream>

using namespace std;

void Depatment::Employee::setChief(string chief) {// делаем главаря
	if (this->name == chief) {
		isChief = true;
	}
	this->chief = chief;
}

string Depatment::Employee::getName() {
	return this->name;
}

void Depatment::Employee::infoOut() { //вывод инфо
	if (!isChief) {
		cout << name << " работает в отделе " << department << ", начальник которого " << chief << endl;
	}
	else {
		cout << name << " начальник отдела " << department << endl;
	}

}