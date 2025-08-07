#include <iostream>
using namespace std;

class Base {
    int data1, data2;
    public:
    void setData(int value1, int valu2);
    int getData1();
    int getData2();
};

class Derived : public Base {
    int data3;
    public:
    int getData3();
    void show();
};

void Base :: setData(int value1, int value2) {
    data1 = value1;
    data2 = value2;
}

int Base :: getData1() {
    return data1;
}

int Base :: getData2() {
    return data2;
}

int Derived :: getData3() {
    data3 = getData1() * getData2();
    return data3;
}

void Derived :: show() {
    cout << "Value 1: " << getData1() << endl;
    cout << "Value 2: " << getData2() << endl;
    cout << "Value 3: " << getData3() << endl;
}

int main() {
    Derived der;
    der.setData(5, 10);
    der.getData3();
    der.show();
    return 0;
}