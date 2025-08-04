#include <iostream>
using namespace std;

class base {
    public:
    int baseVar;
    void display();
};

class derived: public base {
    public:
    int derivedVar;
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
    bptr -> baseVar = 10;
    bptr -> display();

    derived* dptr;
    dptr = &dobj;
    dptr -> baseVar = 40;
    dptr -> derivedVar = 50;
    dptr -> display();

    return 0;
}