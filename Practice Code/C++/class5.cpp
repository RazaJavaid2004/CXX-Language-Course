#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
    void setData(int v1, int v2);
    void disData();
    friend complex sumComp(complex o1, complex o2);
};

void complex :: setData(int v1, int v2) {
    a = v1;
    b = v2;
}

complex sumComp(complex o1, complex o2) {
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

void complex :: disData() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int main() {
    complex c1, c2, sum;

    c1.setData(1, 2);
    c1.disData();

    c2.setData(7, 8);
    c2.disData();

    sum = sumComp(c1, c2);
    sum.disData();

    return 0;
}