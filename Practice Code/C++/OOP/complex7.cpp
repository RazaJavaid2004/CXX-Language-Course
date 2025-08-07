#include <iostream>
using namespace std;

class Complex {
    int a, b;
    public:
    Complex(int v1, int v2);
    void disValue();
};

Complex :: Complex(int v1 = 0, int v2 = 0) {
    a = v1;
    b = v2;
}

void Complex :: disValue() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int main() {
    Complex c1;
    c1.disValue();

    Complex c2(1);
    c2.disValue();

    Complex c3(3, 2);
    c3.disValue();
    
    return 0;
}