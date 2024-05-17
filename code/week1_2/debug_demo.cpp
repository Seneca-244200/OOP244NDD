#include<iostream>
using namespace std;

int func(int var) {
	return var * var;
}
int main() {
	int i = 100;
	int j = 10;
	for (i = 2; i < 5; i++) {
		cout << func(i) << endl;
	}

	return 0;
}