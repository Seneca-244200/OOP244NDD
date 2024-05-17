// main.cpp
#include <iostream>

double getNumber();
char getOperator();
void printResult(double result);

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);


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

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        // Handle division by zero
        return 0.0;
    }
}



void runCalculatorMonolith1() {
    double num1 = getNumber();
    char op = getOperator();
    double num2 = getNumber();

    double result;

    switch (op) {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        std::cout << "Invalid operator" << std::endl;
        return;
    }

    printResult(result);
}

int main_calc() {
    runCalculatorMonolith1();
    return 0;
}

