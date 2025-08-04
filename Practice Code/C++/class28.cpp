#include <iostream>
using namespace std;

class Base1 {
    int data1;
    public:
    Base1(int a);
    void disBase1();
};

class Base2 {
    int data2;
    public:
    Base2(int b);
    void disBase2();
};

class Derived: public Base1, public Base2 {
    int data3, data4;
    public:
    Derived(int a, int b, int c, int d);
    void disDerived();
};

Base1 :: Base1(int a) {
    data1 = a;
    cout << "Base1 Constructor is called" << endl;
}

void Base1 :: disBase1() {
    cout << "Value of Base1 Class: " << data1 << endl;
}

Base2 :: Base2(int b) {
    data2 = b;
    cout << "Base2 Constructor is called" << endl;
}

void Base2 :: disBase2() {
    cout << "Value of Base2 Class: " << data2 << endl;
}

Derived :: Derived(int a, int b, int c, int d): Base1(a), Base2(b) {
    data3 = c;
    data4 = d;
    cout << "Derived Constructor is called" << endl;
}

void Derived :: disDerived() {
    cout << "Values of Derived Class: " << data3 << " and " << data4 << endl;
}

int main() {
    Derived der(1, 2, 3, 4);
    der.disBase1();
    der.disBase2();
    der.disDerived();

    return 0;
}