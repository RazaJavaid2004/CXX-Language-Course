#include <iostream>
using namespace std;

class A {
    int a;
    public:
    A& setData(int a) {
        this -> a = a;
        return *this;
    }
    void getData();
};

void A :: getData() {
    cout << "Value: " << this -> a << endl;
}

int main() {
    A a;
    a.setData(4).getData();

    return 0;
}