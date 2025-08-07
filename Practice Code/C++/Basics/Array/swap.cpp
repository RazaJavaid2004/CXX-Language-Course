#include <iostream>
using namespace std;

void swap(int& a, int& b);
int getMin(int a, int b) {
    if(a < b) return a;
    return b;
}
int getMax(int a, int b) {
    if(a > b) return b;
    return a;
}

int main() {
    int arr[5] = {2, 3, -4, 1, 4};
    int min, max = arr[0];

    for(int i = 0; i < 5; i++) {
        min = getMin(arr[i], min);
        max = getMax(arr[i], max);
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}