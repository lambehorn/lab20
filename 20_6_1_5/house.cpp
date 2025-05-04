#include "house.h"
#include <iostream>

using namespace std;

void House::outCount() {
	if (this->count == 0) {
			cout << "Такого дома быть не может!!!!";
	}
	else {
		if (count == 1) {
			cout << "Дом с " << count << " этажом." << endl;
		}
		else {
			cout << "Дом с " << count << " этажами." << endl;
		}
	}
}