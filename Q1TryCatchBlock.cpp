#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        // Integer Example
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            throw num;
        }

        // String Example
        string str;
        cout << "Enter a string: ";
        cin >> str;

        if (str.length() < 5) {
            throw str;
        }

        cout << "Number and string entered successfully." << endl;
        }
        catch (int num) {
            cout << "Exception: Negative number entered: " << num << endl;
        }
        catch (string str) {
            cout << "Exception: String length is less than 5 characters: " << str << endl;
        }
        catch (...) {
            cout << "Unknown exception occurred." << endl;
        }

    return 0;
}
