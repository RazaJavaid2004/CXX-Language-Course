#include <iostream>
#include <limits>
using namespace std;

int main() {
    float num;
    cout << "Enter the Number: ";
    while(!(cin >> num)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');
        cout << "Invalid Input! Enter the Number: ";
    }
    cout << "Enter Number: " << num << endl;
    return 0;
}