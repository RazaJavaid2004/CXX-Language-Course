#include <iostream>
using namespace std;

class Test {
    int a, b;
    public:
    Test(int i, int j);
};

// Test :: Test(int i, int j): a(i+j), b(j+i)
// Test :: Test(int i, int j): a(i), b(a+j)
// Test :: Test(int i, int j): a(b+i), b(j) -> a is initialized first
// Test :: Test(int i, int j): a(a+i), b(j) -> a wasn't initialized yet

Test :: Test(int i, int j): a(i), b(j) {
    cout << "Value1: " << a << endl;
    cout << "Value2: " << b << endl;
}

int main() {
    Test t(4, 6);

    return 0;
}