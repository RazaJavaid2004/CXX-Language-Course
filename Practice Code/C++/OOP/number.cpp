#include <iostream>
using namespace std;

class Number {
    int a;
    public:
    Number();
    Number(int num);
    Number(Number& obj); // Copy Constructor
    void show();
};

Number :: Number() {
    a = 0;
}

Number :: Number(int num) {
    a = num;
}

Number :: Number(Number& obj) {
    a = obj.a;
}

void Number :: show() {
    cout << "Number is: " << a << endl;
}

int main() {
    Number x(4), y(5), z(46), z2;
    x.show();
    y.show();
    z.show();

    Number z1(x);  // Copy Constructor is invoked
    z1.show();

    z2 = y; // Copy Constructor is not invoked
    z2.show();

    Number z3 = z; // Copy Constructor is invoked
    z3.show();

    return 0;
}