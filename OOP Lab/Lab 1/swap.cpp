#include <iostream>
using namespace std;

void swap(int* a, int* c);

int main() {
    int a, b, c;

    cout << "Enter Three Numbers: " << endl;
    cin >> a >> b >> c;

    cout << "Before Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    swap(a, c);
    
    cout << "After Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}

void swap(int* a, int* c) {
    int temp = *a;
    *a = *c;
    *c = temp;
}