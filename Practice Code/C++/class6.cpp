#include <iostream>
using namespace std;

class complex;

class calculator {
    public:
    int sumReal(complex o1, complex o2);
    int sumImg(complex o1, complex o2);
};

class complex {
    int a, b;
    friend class calculator;
    public:
    void setData(int v1, int v2);
    void disData();
};

void complex :: setData(int v1, int v2) {
    a = v1;
    b = v2;
}

void complex :: disData() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int calculator :: sumReal(complex o1, complex o2) {
    return o1.a + o2.a;
}

int calculator :: sumImg(complex o1, complex o2) {
    return o1.b + o2.b;
}

int main() {
    complex c1, c2;
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