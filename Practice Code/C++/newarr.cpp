#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 5;
    arr[3] = 7;
    arr[4] = 9;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    delete[] arr;
    arr = nullptr;
    
    return 0;
}