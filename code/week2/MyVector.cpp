#include<iostream>
using namespace std;

#include"MyVector.h"
using namespace seneca;

MyVector::MyVector()
{
	// init variables
	array = nullptr;
	size = 0;
	capacity = 0;
}

MyVector::~MyVector()
{
	delete[] array; // 1 2 3 4 5 
	// delete intTemp; // Int* intTemp = new Int();
}

void MyVector::push_back(int value)
{
	if (size == capacity) /*array is full*/ {
		// initial state, size = capacity = 0
		if (capacity == 0) {
			capacity = 1; // default size of array is 1
		}
		else {
			capacity = 2 * capacity;
		}

		// dynamically allocating new array of new capacity
		int* newArray = new int[capacity]; 

		if (newArray == nullptr) {
			// allocation unsuccessful
			cout << "Not enough memory to allocate\n";
			return;
		}

		for (int i = 0; i < size; i++) {
			// copying over old elements
			newArray[i] = array[i];
		}

		// avoid memory leak
		delete[] array;

		array = newArray;

	}

	array[size] = value;
	size++;
	return;
}

int* MyVector::begin()
{
	return array;
}

int* MyVector::end()
{
	return array+size;
}
