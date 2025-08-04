#include <iostream>
#include <limits>  // for numeric_limits
using namespace std;

bool isValidInput(double &num) {
    cout << "Enter a floating-point number: ";
    while (!(cin >> num)) {
        cin.clear();  // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // discard invalid input
        cout << "Invalid input. Please enter a floating-point number: ";
    }
    return true;
}

int main() {
    double number;
    if (isValidInput(number)) {
        cout << "You entered: " << number << endl;
    }
    return 0;
}