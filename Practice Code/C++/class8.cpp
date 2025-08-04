#include <iostream>
using namespace std; 

class Y;

class X {
int a;
friend void swap(X& x, Y& y);
public: 
void setData(int num);
void disData();
};

class Y {
int b;
friend void swap(X& x, Y& y);
public:
void setData(int value);
void disData();
};

void X :: setData(int num) {
a = num;
}

void X :: disData() {
cout << "X: " << a << endl;
}

void Y :: setData(int value) {
b = value;
}

void Y :: disData() {
cout << "Y: " << b << endl;
}

void swap(X& x, Y& y) {
int temp = y.b;
y.b = x.a;
x.a = temp;
}

int main() {
X x;
x. setData(5);
x. disData();

Y y;
y. setData(10);
y. disData();

swap(x, y);
cout << "After swap" << endl;
x. disData();
y. disData();

return 0;
}