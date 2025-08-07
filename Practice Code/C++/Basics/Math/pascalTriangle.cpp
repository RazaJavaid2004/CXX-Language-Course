#include <iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int rows;
    cout << "Enter the No. of Rows: ";
    cin >> rows;

    for(int i = 0; i <= rows; i++) {
        for(int j = 0; j <= i; j++) {
            cout << fact(i) / (fact(j) * fact(i-j)) << " ";
        }
        cout << endl;
    }
    return 0;
}