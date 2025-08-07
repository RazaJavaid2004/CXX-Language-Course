#include <iostream>
using namespace std;

class Base1 {
    public:
    void greet();
};

class Base2 {
    public:
    void greet();
};

class Derived : public Base1, public Base2 {
    public:
    void greet();
};

void Base1 :: greet() {
    cout << "How are You!" << endl;
}

void Base2 :: greet() {
    cout << "To Kese Hen Ap Log!" << endl;
}
// Ambiguity
void Derived :: greet() {
    Base1 :: greet();
}

int main() {
    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived der;
    der.greet();

    return 0;
}