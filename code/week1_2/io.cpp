#include"io.h"
namespace io {
    double getNumber() {
        double num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        return num;
    }

    char getOperator() {
        char op;
        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> op;
        return op;
    }

    void printResult(double result) {
        std::cout << "Result: " << result << std::endl;
    }
}