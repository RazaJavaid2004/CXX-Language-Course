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
    int process();
    void display();
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

int Derived :: process() {
    data3 = getData1() * getData2();
    return data3;
}

void Derived :: display() {
    cout << "Value 1: " << getData1() << endl;
    cout << "Value 2: " << getData2() << endl;
    cout << "Value 3: " << process() << endl;
}

int main() {
    int val1, val2;
    cout << "Enter The value1 and Value2: " << endl;
    cin >> val1 >> val2;

    Derived der;
    der.setData(val1, val2);
    der.process();
    der.display();
    return 0;
}