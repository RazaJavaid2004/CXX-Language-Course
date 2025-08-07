#include <iostream>
using namespace std;

class Complex {
    int a, b;
    public:
    void setData(int v1, int v2);
    void disData();
    friend Complex sumComp(Complex o1, Complex o2);
};

void Complex :: setData(int v1, int v2) {
    a = v1;
    b = v2;
}

Complex sumComp(Complex o1, Complex o2) {
    Complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

void Complex :: disData() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int main() {
    Complex c1, c2, sum;

    c1.setData(1, 2);
    c1.disData();

    c2.setData(7, 8);
    c2.disData();

    sum = sumComp(c1, c2);
    sum.disData();

    return 0;
}