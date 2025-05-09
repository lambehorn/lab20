#include<iostream>

using namespace std;

class EmployeeList {
private:


	

	class EmployeeNode { // св€зь сотрудников
	public:

		EmployeeNode* pNext;
		string depatmentName;
		string name;
		bool isCheif;
		

		EmployeeNode(

		string depatmentName = nullptr,
		string name = nullptr, 
		bool isCheif = false, 
		EmployeeNode* pNext = nullptr

		) { //конструктор св€зи

			if (depatmentName == "" || name == "") {
				cout << "err";
			}
			else {

				if (isCheif) {

					cout << "Ќачальник " << name << " добавлен" << endl;

				}
				else {

					cout << "—отрудник " << name << " добавлен" << endl;

				}
				this->pNext = pNext;
				this->depatmentName = depatmentName;
				this->name = name;
				this->isCheif = isCheif;
			}


		}

	};

	int size;
	int scheifCount;
	EmployeeNode* head;

public:

	EmployeeList() {// конструтор по умолчанию (нет рабочих)

		size = 0;
		head = nullptr;

	}

	int getSize() { 

		return size;

	}


	EmployeeNode operator[](int index) {

		int count = 0;
		EmployeeNode* current = this->head;
		
		while (current != nullptr) {

			if (count == index) {

				return *current;

			}

			current = current->pNext;

			count++;

		}

	}

	void madeEmployee(string depatmentName, string name, bool ischeif = false);

	void depatmentInfo(string depatmentName);

};


	
	

