// C++ program to demonstrate how a virtual function
// is used in a real life scenario
#include<iostream>

using namespace std;

class Employee {
protected:
	int salary = 10000;
public:
	virtual void raiseSalary()
	{
		cout << "Common hike. " << endl;
		// common raise salary code
		salary += 5000;
	}

	int getSalary() const { return salary; }

};

class Manager : public Employee {
	void raiseSalary() 
	{
		// Manager specific raise salary code, may contain
		// increment of manager specific incentives
		cout << "Manager hike. " << endl;
		// common raise salary code
		salary += 7000;
	}

};

// Similarly, there may be other types of employees
class Engineer : public Employee {
};

// We need a very simple function
// to increment the salary of all employees
// Note that emp[] is an array of pointers
// and actual pointed objects can
// be any type of employees.
// This function should ideally
// be in a class like Organization,
// we have made it global to keep things simple
void globalRaiseSalary(Employee* emp[], int n)
{
	for (int i = 0; i < n; i++) {
		// Polymorphic Call: Calls raiseSalary()
		// according to the actual object, not
		// according to the type of pointer
		emp[i]->raiseSalary();
	}
}

void printSalary(Employee* emp[], int n)
{
	for (int i = 0; i < n; i++) {
		// Polymorphic Call: Calls raiseSalary()
		// according to the actual object, not
		// according to the type of pointer
		cout << emp[i]->getSalary() << endl;
	}
}


int main_poly() {
	Engineer engr;
	Manager mngr;

	Employee* employees[] = { &engr, &mngr };
	globalRaiseSalary(employees, 2);
	printSalary(employees, 2);

	return 0;
}
