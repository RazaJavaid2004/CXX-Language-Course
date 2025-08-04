#include <iostream>
using namespace std; 

class complex {
int a, b;
public: 
complex(int x, int y);
void printData();
};

void complex :: printData() {
cout << a << "+" << b << "i" << endl;
}

 complex :: complex(int x, int y) {
a = x;
b = y;
}

int main() {
complex c1(5, 7);
c1.printData();

complex c2 = complex(8, 9);
c2.printData();
return 0;
}