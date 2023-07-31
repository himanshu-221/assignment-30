#include <iostream>
#include <string>
#include <sstream>
using namespace std;
double performOperation(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                throw "Error: Division by zero!";
            }
            return num1 / num2;
        default:
            throw "Error: Invalid operator!";
    }
}

int main() {
    try {
        double num1, num2, result;
        char op;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter the second number: ";
        cin >> num2;

        result = performOperation(num1, num2, op);
        cout << "Result: " << result << endl;
    }
    catch (const char* errorMessage) {
        cout << "Exception caught: " << errorMessage << endl;
    }
    catch (...) {
        cout << "Unknown exception caught." << endl;
    }

    return 0;
}
