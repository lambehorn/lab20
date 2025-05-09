#include "Employee.h"
#include <iostream>

using namespace std;

void EmployeeList::madeEmployee(string depatmentName, string name, bool ischeif)
{// �������� ��������

	if (head == nullptr) { // ���� ������� �� ��������� ������ ��������, ������� ��������� �� nullptr

		head = new EmployeeNode(depatmentName, name, ischeif);
		
	}
	else {// ���� ������ ������� ��������������� �� ������� ��������� �������


		EmployeeNode* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}

		current->pNext = new EmployeeNode(depatmentName, name, ischeif);

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
				<< " ��������� ������ "
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
				<< " �������� � ������ "
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
//		cout << "��������� " << name << " ������� ���������������!" << endl;