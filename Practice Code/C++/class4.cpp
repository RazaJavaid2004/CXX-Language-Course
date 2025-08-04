#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
    void setData(int v1, int v2);
    void printData();
};

void complex :: setData(int v1, int v2) {
    a = v1, b = v2;
}

void complex :: printData() {
    cout << "Complex Number is: " << a << "+" << b << "i" <<endl;
}

int main() {
    complex c1, c2, c3;
    
    c1.setData(1, 2);
    c1.printData();
    
    c2.setData(3, 4);
    c2.printData();

    c3.setData(7, 8);
    c3.printData();

    return 0;
}