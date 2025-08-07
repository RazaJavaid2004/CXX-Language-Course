#include <iostream>
using namespace std;

class Y;

class X {
    int data;
    public:
    void setData(int value);
    friend int sumData(X o1, Y o2);
};

class Y {
    int num;
    public:
    void setData(int value);
    friend int sumData(X, Y);
};

void X :: setData(int value) {
    data = value;
}

void Y :: setData(int value) {
    num = value;
}

int sumData(X o1, Y o2) {
    return o1.data + o2.num;
}

int main() {
    X a;
    a.setData(3);
    
    Y b;
    b.setData(4);

    cout << "Sum is: " << sumData(a, b);
    return 0;
}