#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];

    cout << "Enter the Elements of the Array: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Elements of the Array: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}