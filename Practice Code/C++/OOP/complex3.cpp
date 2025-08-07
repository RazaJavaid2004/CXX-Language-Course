#include <iostream>
using namespace std; 

class Complex {
int a, b;
public: 
Complex();
void printData();
};

void Complex :: printData() {
cout << a << "+" << b << "i" << endl;
}

Complex :: Complex() {
a = 10;
b = 15;
}

int main() {
Complex c1, c2;
c1.printData();
c2.printData();
return 0;
}