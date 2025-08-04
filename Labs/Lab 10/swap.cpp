#include <iostream>
using namespace std;

template <typename T1, typename T2>
void swap(T1& a, T2& b) {
    T1 temp = a;
    a = static_cast <T1> (b);
    b = static_cast <T2> (temp);
}

int main() {
    int a = 4;
    double b = 3.2;

    cout << "Before Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "After Swapping: " << endl;
    swap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}