#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int* arr, int size) {
    for(int i = 0; i < size - 1; ++i) {
        for(int j = i; j < size - 1; ++j) {
            swap(arr[j], arr[j+1]);
        }
    }
}

void insertionSort(int* arr, int size) {
    for(int i = 0; i < size - 1; ++i) {
        int temp = arr[i];
        for(int j = 0; j < )
    }
}

int main() {
    int* arr;
    int size;

    cout << "Enter the Size of the Array: ";
    cin >> size;

    arr = new int[size];

    int val;
    for(int i = 0; i < size; ++i) {
        cin >> val;
        arr[i] = val;
    }

    cout << "Array Elements: ";
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size);

    cout << "After Sorting: ";
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    
    return 0;
}