#include "house.h"
#include <iostream>

using namespace std;

void House::outCount() {
	if (this->count == 0) {
			cout << "������ ���� ���� �� �����!!!!";
	}
	else {
		if (count == 1) {
			cout << "��� � " << count << " ������." << endl;
		}
		else {
			cout << "��� � " << count << " �������." << endl;
		}
	}
}