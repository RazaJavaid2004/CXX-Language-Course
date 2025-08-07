#include <iostream>
using namespace std;

int fact(int n);
int nPr(int n, int r);

int main() {
    int n, r;
    cout << "Enter the value of n and r: " << endl;
    cin >> n >> r;

    if(n >= r) cout << n << " P " << r << " = " << nPr(n, r);
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

int nPr(int n, int r) {
    return fact(n)/ fact(n-r);
}