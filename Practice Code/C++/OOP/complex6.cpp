#include <iostream>
using namespace std;

class Complex {
    int a;
    int b;
    public:
    Complex();
    Complex(int v1);
    Complex(int v1, int v2);
    void disValue();
};

Complex :: Complex() {
    a = 0;
    b = 0;
};

Complex :: Complex(int v1) {
    a = v1;
    b = 0;
}

Complex :: Complex (int v1, int v2) {
    a = v1;
    b = v2;
}

void Complex :: disValue() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int main() {
    Complex c1;
    c1.disValue();

    Complex c2(3);
    c2.disValue();

    Complex c3(4, 6);
    c3.disValue();

    return 0;
}