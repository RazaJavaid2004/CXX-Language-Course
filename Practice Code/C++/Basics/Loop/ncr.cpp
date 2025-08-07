#include <iostream>
using namespace std;

int fact(int n);
int nCr(int n, int r);

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    if(n >= r) cout << n << " C " << r << " = " << nCr(n, r);
    else cout << "r should not be greater than n";
    return 0;
}

int fact(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n-r));
}