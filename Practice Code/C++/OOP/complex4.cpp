#include <iostream>
using namespace std;

class Complex;

class calculator {
    public:
    int sumReal(Complex o1, Complex o2);
    int sumImg(Complex o1, Complex o2);
};

class Complex {
    int a, b;
    friend class calculator;
    public:
    void setData(int v1, int v2);
    void disData();
};

void Complex :: setData(int v1, int v2) {
    a = v1;
    b = v2;
}

void Complex :: disData() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int calculator :: sumReal(Complex o1, Complex o2) {
    return o1.a + o2.a;
}

int calculator :: sumImg(Complex o1, Complex o2) {
    return o1.b + o2.b;
}

int main() {
    Complex c1, c2;
    c1.setData(1, 3);
    c1.disData();

    c2.setData(4, 5);
    c2.disData();

    calculator calc;
    int real = calc.sumReal(c1, c2);
    int img = calc.sumImg(c1, c2);

    cout << "Sum is: " << real << "+" << img << "i" << endl;

    return 0;
}