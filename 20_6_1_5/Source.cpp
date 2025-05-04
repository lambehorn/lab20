#include <iostream>
#include "house.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int hm = 0;
	cin >> hm;
	House housef(hm);
	housef.outCount();

	return 0;
}