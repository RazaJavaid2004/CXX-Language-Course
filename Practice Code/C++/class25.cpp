#include <iostream>
using namespace std;

class Base {
    public:
    void say();
};

class Derived : public Base {
    public:
    void say();
};

void Base :: say() {
    cout << "Hello World!" << endl;
}
// Ambiguity
void Derived :: say() {
    cout << "Hello My Beloved People!" << endl;
}

int main() {
    Base b;
    b.say();

    Derived d;
    d.say();

    return 0;
}