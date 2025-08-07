#include <iostream>
using namespace std; 

class Complex {
int a, b;
public: 
Complex(int x, int y);
void printData();
};

void Complex :: printData() {
cout << a << "+" << b << "i" << endl;
}

 Complex :: Complex(int x, int y) {
a = x;
b = y;
}

int main() {
Complex c1(5, 7);
c1.printData();

Complex c2 = Complex(8, 9);
c2.printData();
return 0;
}