#include <iostream>
using namespace std;

class base {
    public:
    int baseVar = 5;
    virtual void display();
};

class derived: public base {
    public:
    int derivedVar = 10;
    void display();
};

void base :: display() {
    cout << "Base Class Variable baseVar: " << baseVar << endl;
}

void derived :: display() {
    cout << "Derived Class Inherited Variable baseVar: " << baseVar << endl;
    cout << "Derived Class Variable derivedVar: " << derivedVar << endl;
}

int main() {
    base* bptr;
    base bobj;
    derived dobj;

    bptr = &dobj;
    bptr -> display();

    return 0;
}