#include<iostream>

using namespace std;

class House { //�������� �������� ������ ������
	int count = 0;

public:


	House(int count) {
		if (count > 0) {
			this->count = count;
		}
		else {
			cout << "err" << endl;
		}

	}
	void outCount();

};

