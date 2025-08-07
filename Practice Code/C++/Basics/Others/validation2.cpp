#include <iostream>
#include <string>
#include <cctype>  // for isalnum
using namespace std;

bool isValidString(const string &str) {
    if (str.empty() || str.length() > 50) {
        return false;  // check length
    }
    for (char ch : str) {
        if (!isalnum(ch)) {  // check if all characters are alphanumeric
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string (max 50 characters, alphanumeric only): ";
    getline(cin, input);

    if (isValidString(input)) {
        cout << "You entered a valid string: " << input << endl;
    } else {
        cout << "Invalid string input." << endl;
    }
    return 0;
}