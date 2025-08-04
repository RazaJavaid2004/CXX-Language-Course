#include <iostream>
using namespace std;

// Sequence 2: 2, 2, 5, 13, 28, ...
// Sequence 4: 7, 26, 63, 124, ...
// Sequence 6: B, C, E, G, K, ...
// Sequence 7: Identify incorrect term in 5, 21, 61, 122, 213, 340, 509
// Sequence 8: Identify incorrect term in 3, 2, 8, 9, ...

void generateSequence() {
    int start = 1;
    for(int i = 2; i <= 6; ++i) {
        cout << start << " ";
        start += (i * i);
    }
    cout << endl;
}

int main() {
    generateSequence();

    return 0;
}