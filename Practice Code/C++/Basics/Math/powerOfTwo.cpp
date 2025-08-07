#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
    if (num <= 0) {
        return false;
    }

    // Check if the number has only one bit set
    return (num & (num - 1)) == 0;
}

bool isPowerOfTwoUsingShift(int num) {
    if (num <= 0) {
        return false;
    }

    // Continuously right shift the number and check if it becomes 1
    while ((num & 1) == 0) {
        num >>= 1;
    }

    return num == 1;
}

int main() {
    int num = 15; // You can change this to test other numbers

    if (isPowerOfTwoUsingShift(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}