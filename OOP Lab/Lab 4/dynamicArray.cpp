#include <iostream>
using namespace std;

class dynamicArray {
    int* arr;
    int capacity;
    int currentSize;
    public:
    dynamicArray(int size = 0) {
        capacity = size;
        arr = new int[size];
        currentSize = 0;
        
        for(int i = 0; i < capacity; i++) {
            arr[i] = 0;
        }
    }
    void push(int n) {
        if(currentSize == capacity) {
            int* newarr = new int[capacity * 2];
            for(int i = 0; i < capacity; i++) {
                newarr[i] = arr[i];
            }
            delete[] arr;
            arr = newarr;
            capacity *= 2;
        }
        arr[currentSize] = n;
        currentSize++;
    }
    void printArr() {
        for(int i = 0; i < currentSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int size() {
        return currentSize;
    }
    int getCapacity() {
        return capacity;
    }
    ~dynamicArray() {
        delete[] arr;
    }
};

int main() {
    dynamicArray arr(2);
    
    arr.push(3);
    arr.push(4);

    cout << "Current Size: " << arr.size() << endl;
    cout << "Current Capacity: " << arr.getCapacity() << endl;

    arr.push(1);

    cout << "Current Size: " << arr.size() << endl;
    cout << "Current Capacity: " << arr.getCapacity() << endl;

    arr.printArr();
    
    return 0;
}