#include <iostream>
using namespace std;

class Complex {
    int real, img;
    public:
    void setData(int x, int y);
    void getData();
};

void Complex :: setData(int x, int y) {
    real = x;
    img = y;
}

void Complex :: getData() {
    cout << "Complex Number: " << real << "+" << img << "i" << endl;
}

int main() {
    Complex c1;
    Complex* ptr = &c1;
    (*ptr).setData(2, 5);
    (*ptr).getData();
    
    return 0;
}