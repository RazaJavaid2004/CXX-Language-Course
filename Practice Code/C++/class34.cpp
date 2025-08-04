#include <iostream>
using namespace std;

class A {
    int a;
    public:
    void setData(int a);
    void getData();
};

void A :: setData(int a) {
    this -> a = a;
}

void A :: getData() {
    cout << "Value: " << this -> a << endl;
}

int main() {
    A a;
    a.setData(4);
    a.getData();
    
    return 0;
}