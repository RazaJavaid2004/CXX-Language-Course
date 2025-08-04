#include <iostream>
using namespace std; 

class complex {
int a, b;
public: 
complex();
void printData();
};

void complex :: printData() {
cout << a << "+" << b << "i" << endl;
}

 complex :: complex() {
a = 10;
b = 15;
}

int main() {
complex c1, c2;
c1.printData();
c2.printData();
return 0;
}