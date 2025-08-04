#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 10;
    cout << ptr << endl;
    cout << *ptr;
    delete ptr;
    ptr = nullptr;

    return 0;
}