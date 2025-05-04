#include<iostream>

using namespace std;


	class Depatment {
	public:

		Depatment* pNext;
		string dName;

		Depatment(Depatment* pNext = nullptr, string dName) : pNext(pNext), dName(dName) {};

		class Employee { //это класс емплоеров
		public:

			string name;
			bool isChief = false;
			string department;
			string chief;

			class EmployeeNode {

				EmployeeNode* pNext;
				EmployeeNode(EmployeeNode* pNext = nullptr) : pNext(pNext) {};
			};

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

	};

	
	

