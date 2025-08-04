#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(int n);
int octalToDecimal(int n);
int hexaDecimalToDecimal(string n);

int main() {
    int n = octalToDecimal(53);
    cout << n;
    return 0;
}

int binaryToDecimal(int n) {
    int ans = 0;
    int x = 1;
    int y;
    while(n > 0) {
        y = n % 10;
        ans += y * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n) {
    int ans = 0;
    int x = 1;
    int y;
    while(n > 0) {
        y = n % 10;
        ans += y * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

