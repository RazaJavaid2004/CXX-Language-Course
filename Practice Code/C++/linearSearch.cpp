#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[5] = {2, 3, 5, 7, 4};

    cout << linearSearch(arr, 5, 4);

    return 0;
}