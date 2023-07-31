/*Write a C++ program to accept gmail id only and throw an exception if the id does not 
contain @ and gmail.com.*/

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

bool isValidGmailID(const string& gmailID) {
    // Check if the gmail ID contains '@' and "gmail.com"
    return gmailID.find('@') != string::npos && gmailID.find("gmail.com") != string::npos;
}

int main() {
    string gmailID;

    try {
        cout << "Enter your Gmail ID: ";
        cin >> gmailID;

        if (!isValidGmailID(gmailID)) {
            throw invalid_argument("Invalid Gmail ID. Please enter a valid Gmail ID containing '@' and 'gmail.com'.");
        }

        cout << "Valid Gmail ID: " << gmailID << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() <<  endl;
        return 1; // Indicate error
    }

    return 0;
}