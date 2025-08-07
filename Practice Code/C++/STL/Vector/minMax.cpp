#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr = {3, 6, 4, -43, 4};
    int min, max = arr[0];

    for(int i = 0; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}