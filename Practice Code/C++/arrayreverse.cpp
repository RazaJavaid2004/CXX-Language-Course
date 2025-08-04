#include <iostream>
using namespace std;

void swap(int& a, int& b);
int reversearr(int arr[], int size);

int main() {
    int arr[5] = {1, 2, 4, -3, 3};
    reversearr(arr, 5);
    for(auto& val : arr) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}

void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int reversearr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}