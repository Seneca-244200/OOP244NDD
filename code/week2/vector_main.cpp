#include<iostream>
#include<vector>
using namespace std;

#include"MyVector.h"

using namespace seneca;

int main() {
	//vector<int> intVec; // template
	///*vector<float> floatVec;
	//vector<MyClass*> classVec;*/
	//intVec.push_back(1);
	//intVec.push_back(2);
	//intVec.push_back(3);

	MyVector intVec; // template
	/*vector<float> floatVec;
	vector<MyClass*> classVec;*/
	intVec.push_back(1);
	intVec.push_back(2);
	intVec.push_back(3);

	// range based for loop
	//for (int i = 0; i < intVec.size(); i++)
	for (auto& element : intVec) {
		cout << element << "\n";
	}
	cout << "Done printing \n";
	return 0;
}