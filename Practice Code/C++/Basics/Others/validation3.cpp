#include <iostream>
#include <limits>  // for numeric_limits
using namespace std;

bool isValidInput(int &num) {
    cout << "Enter an integer: ";
    while (!(cin >> num)) {
        cin.clear();  // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // discard invalid input
        cout << "Invalid input. Please enter an integer: ";
    }
    return true;
}

int main() {
    int number;
    if (isValidInput(number)) {
        cout << "You entered: " << number << endl;
    }
    return 0;
}