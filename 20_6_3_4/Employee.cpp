#include "Employee.h"
#include <iostream>

using namespace std;

void EmployeeList::madeEmployee(string depatmentName, string name, bool ischeif)
{// создание рабочего

	if (head == nullptr) { // если рабочих не сществует создаём рабочего, который указывает на nullptr
		if (ischeif) {

			head = new EmployeeNode(depatmentName, name, ischeif);
			cout << "Начальник " << name << " добавлен" << endl;


		}
		else {

			head = new EmployeeNode(depatmentName, name);
			cout << "Сотрудник " << name << " добавлен" << endl;

		}

		
	}
	else {// если первый элемент инициализирован то создаем последний элемент


		EmployeeNode* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}

		

		if (ischeif) {

			cout << "Начальник " << name << " добавлен" << endl;
			//head = new EmployeeNode(depatmentName, name);
			current->pNext = new EmployeeNode(depatmentName, name, ischeif);

		}
		else {

			cout << "Сотрудник " << name << " добавлен" << endl;
			//head = new EmployeeNode(depatmentName, name);
			current->pNext = new EmployeeNode(depatmentName, name);

		}
	}
	size++;
}

void EmployeeList::depatmentInfo(string depatmentName)
{

	EmployeeNode* current = this->head;
	string cheif;

	for (int i = 0; i < size; i++) {

		if (current->depatmentName == depatmentName && current->isCheif) {

			cout << current->name
				<< " начальник отдела "
				<< current->depatmentName
				<< endl;

			cheif = current->name;

		}

		current = current->pNext;

	}

	current = this->head;

	for (int i = 0; i < size; i++) {

		if (current->depatmentName == depatmentName && !(current->isCheif)) {

			cout << current->name
				<< " работает в отделе "
				<< current->depatmentName 
				<< endl;

		}

		current = current->pNext;

	}

}

//	EmployeeNode* current = this->head;

//		while (current->pNext != nullptr) {
//			current = current->pNext;
//		}
//		EmployeeNode* current = this->head;
//		current->pNext = new EmployeeNode(depatmentName, name);
//		head = new EmployeeNode(depatmentName, name);
//		cout << "Сотрудник " << name << " успешно зарегистрирован!" << endl;