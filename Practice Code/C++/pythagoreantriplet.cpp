#include <iostream>
using namespace std;

bool check(int x, int y, int z);

int main() {
    int a, b, c;
    cout << "Enter Three Numbers: " << endl;
    cin >> a >> b >> c;

    if(check(a, b, c)) {
        cout << "Pythagorean Triplet";
    }
    else {
        cout << "Not a Pythagorean Triplet";
    }
    return 0;
}

bool check(int x, int y, int z) {
    int a = max(x, max(y, z));
    int b, c;

    if(a == x) {
        b = y;
        c = z;
    }
    else if(a == y) {
        b = x;
        c = z;
    }
    else {
        b = x;
        c = y;
    }

    return a*a == b*b + c*c;
}