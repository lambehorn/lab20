#include<iostream>



using namespace std;

class Employee { //это класс емплоеров
	string name = "Jon";
	bool isChief = false;
	string department = "Нет";
	string chief = "Нет";

public:
	Employee(string name, string department) { //тут конструкторы

		this->name = name;
		this->department = department;

	}

	Employee(string name, string department, string chief) {

		this->name = name;
		this->department = department;
		this->chief = chief;

	}

	Employee(string name, string department, bool isChief) {

		this->name = name;
		this->department = department;
		this->isChief = isChief;

	}

	void setChief(string chief);

	string getName();

	void infoOut();
};
