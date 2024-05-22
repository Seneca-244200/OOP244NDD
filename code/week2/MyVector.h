#ifndef SENECA_MYVECTOR_H__
#define SENECA_MYVECTOR_H__
namespace seneca {
	class MyVector {
		int* array; // because we need dynamic memory allocation
		int size; // the number of elements in the vec currently
		int capacity; // the max number of elements the vec can hold
	public:
		// constructors and destructors
		MyVector(); // constructor declaration
		~MyVector(); // destructor declaration

		void push_back(int value);

		// to support range-based for loop
		// we need two more functions
		int* begin();
		int* end();
	};
}
#endif