#include <iostream>
#include <limits>
using namespace std;

int main() {
    int num;
    cout << "Enter Number: ";
    while(!(cin >> num)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');
        cout << "Invalid Integer! Input Number: ";
    }
    cout << "Enter Integer: " << num << endl;

    return 0;
}