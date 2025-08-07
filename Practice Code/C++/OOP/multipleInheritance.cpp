#include <iostream>
using namespace std;

class Base1 {
    protected:
    int Base1int;
    public:
    void setBase1(int num1);
};

void Base1 :: setBase1(int num1) {
    Base1int = num1;
}

class Base2 {
    protected:
    int Base2int;
    public:
    void setBase2(int num2);
};

void Base2 :: setBase2(int num2) {
    Base2int = num2;
}

class Base3 {
    protected:
    int Base3int;
    public:
    void setBase3(int num3);
};

void Base3 :: setBase3(int num3) {
    Base3int = num3;
}

class Derived : public Base1, public Base2, public Base3 {
    protected:
    int BaseSum;
    public:
    void sum();
};

void Derived :: sum() {
    BaseSum = Base1int + Base2int + Base3int;
    cout << "Sum of Base integers: " << BaseSum << endl;
}

int main() {
    int val1, val2, val3;
    cout << "Enter Three Base Integers: " << endl;
    cin >> val1 >> val2 >> val3;

    Derived der;
    der.setBase1(val1);
    der.setBase2(val2);
    der.setBase3(val3);
    der.sum();
    return 0;
}