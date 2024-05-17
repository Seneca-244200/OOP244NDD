#include<iostream>

using namespace std;

int foo() { return 1; }


int main_temp() {
	int i = 5;

	{
		// empty scope
		int j = 4;
		i++;
		cout << j << endl;
		
	}

	//cout << j;
	return 0;
}