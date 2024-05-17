#include<iostream>

using namespace std;

#include"line.h"

namespace seneca {
	void line(char fill, int length) {
		for (int i = 0; i < length; i++) {
			cout << fill;
		}
		cout << endl;
	}

	//void line(char fill) {
	//	line(fill, 20 /*default value*/);
	//}

	void line(int length) {
		line('+' /*default char for line */, length);
	}

	/*void line() {
		line('+', 20);
	}*/




}