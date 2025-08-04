#include <iostream>
using namespace std;

class complex {
    int real, img;
    public:
    void setData(int x, int y);
    void getData();
};

void complex :: setData(int x, int y) {
    real = x;
    img = y;
}

void complex :: getData() {
    cout << "Complex Number: " << real << "+" << img << "i" << endl;
}

int main() {
    complex c1;
    complex* ptr = &c1;
    (*ptr).setData(2, 5);
    (*ptr).getData();
    
    return 0;
}