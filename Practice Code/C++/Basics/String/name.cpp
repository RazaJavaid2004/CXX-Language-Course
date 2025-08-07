#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Your Name is: " << name << endl; 

    return 0;
}