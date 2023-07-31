#include <iostream>
using namespace std;

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Error: Division by zero!";
    }
    return numerator / denominator;
}

int main() {
    try {
        int num, denom, result;
        cout << "Enter the numerator: ";
        cin >> num;
        cout << "Enter the denominator: ";
        cin >> denom;

        result = divide(num, denom);
        cout << "Result of division: " << result << endl;
    }
    catch (const char* errorMessage) {
        cout << "Exception caught: " << errorMessage << endl;
    }
    catch (...) {
        cout << "Unknown exception caught." << endl;
    }

    return 0;
}
