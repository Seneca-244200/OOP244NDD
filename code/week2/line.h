#ifndef SENECA_LINE_H__
#define SENECA_LINE_H__

namespace seneca {
	// Overloading function line ,
	// compile time polymorphism
	void line(char fill = '+', int length = 20);
	//void line(char fill);
	void line(int length);
	//void line();

}

#endif