#include<iostream>

using namespace std;

int global_var = 25;

int& return_ref() {
	return global_var;
}

void changeValPointer(int* pt) {
	*pt = 25;
}

void changeVal(int val) {
	val = 35;
}

void changeValRef(int& val) {
	val = 55;
}




int main_ref() {
	int a = 10;
	int& r = a; // r is a reference/alias/name for a

	/*int& ref;
	int* pt;*/

	// address-of operator
	//int* pointer = &a;

	//cout << a << endl;
	//changeValPointer(&a); // c-way of changing values
	//cout << a << endl;

	/*cout << a << endl;
	changeVal(a);
	cout << a << endl;*/

	/*cout << a << endl;
	changeValRef(a);
	cout << a << endl;*/

	cout << global_var << endl;
	return_ref() = 69;
	cout << global_var << endl;


	return 0;
}
