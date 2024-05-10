#include<iostream>
using namespace std;

class CoffeeMachine {
	// membre variable of the class
	int milk = 0;
	int coffee = 0;
	int water = 0;
private:
	void addCoffee() {
		cout << "Adding coffee\n";
		coffee += 200;
	}
	void addMilk() {
		cout << "Adding milk\n";
		milk += 10;
	}
	void addWater() {
		cout << "Adding water\n";
		water += 100;
	}
public:
	void brewCoffee(int type) {
		cout << "Making coffee\n";
		switch (type) {
		case 0: // drip
			if (water <= 0) {
				addWater();
			}
			if (coffee <= 0) {
				addCoffee();
			}
			water -= 2;
			coffee -= 4;
			cout << "Here's your brewed coffee\n";
			break;
		case 1: // cuppacino
			if (water <= 0) {
				addWater();
			}
			if (coffee <= 0) {
				addCoffee();
			}
			if (milk <= 0) {
				addMilk();
			}
			water -= 2;
			coffee -= 4;
			milk -= 5;
			cout << "Here's your cuppacino\n";
			break;
		}
	}
};


// user/ client of the class
int main() {
	CoffeeMachine cf;
	while (true) {
		cout << "Welcome to robo barista, what coffee you want?:";
		int coffeeType;
		cin >> coffeeType;
		cf.brewCoffee(coffeeType);
		
	}
	//cf.milk;  // cannot access because milk is private
	return 0;
}