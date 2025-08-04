#include <iostream>
#include <stdexcept>
using namespace std;

class DynamicArray {
    int* arr;
    int size;
    int capacity;
    void resize(int newCapacity) {
        if(newCapacity < size) size = newCapacity;
        int* newArr = new int[newCapacity];
        for(int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }
    public:
    DynamicArray(int s = 0) : size(0), capacity(s) {
        if(capacity > 0) arr = new int[capacity];
        else arr = nullptr;
    }
    DynamicArray(const DynamicArray& other) : size(other.size), capacity(other.capacity) {
        arr = new int[capacity];
        for(int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }
    DynamicArray(DynamicArray&& other) noexcept : arr(nullptr), size(0), capacity(0) {
        arr = other.arr;
        size = other.size;
        capacity = other.capacity;
        other.arr = nullptr;
        other.size = 0;
        other.capacity = 0;
    }
    ~DynamicArray() {
        delete[] arr;
    }
    DynamicArray& operator=(const DynamicArray& other) {
        if(this != &other) {
            delete[] arr;
            size = other.size;
            capacity = other.capacity;
            arr = new int[capacity];
            for(int i = 0; i < size; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if(this != &other) {
            delete[] arr;
            arr = other.arr;
            size = other.size;
            capacity = other.capacity;
            other.arr = nullptr;
            other.size = 0;
            other.capacity = 0;
        }
        return *this;
    }
    DynamicArray operator+(const DynamicArray& other) const {
        if(size != other.size) {
            throw runtime_error("Size MisMatch for Addition!");
        }
        DynamicArray result(size);
        for(int i = 0; i < size; ++i) {
            result.arr[i] = this->arr[i] + other.arr[i];
        }
        return result;
    }
    DynamicArray operator-(const DynamicArray& other) const {
        if(size != other.size) {
            throw runtime_error("Size MisMatch for Subtraction!");
        }
        DynamicArray result(size);
        for(int i = 0; i < size; ++i) {
            result.arr[i] = this->arr[i] - other.arr[i];
        }
        return result;
    }
    DynamicArray operator*(const DynamicArray& other) const {
        if(size != other.size) {
            throw runtime_error("Size MisMatch for Multiplication!");
        }
        DynamicArray result(size);
        for(int i = 0; i < size; ++i) {
            result.arr[i] = this->arr[i] * other.arr[i];
        }
        return result;
    }
    DynamicArray operator/(const DynamicArray& other) const {
        if(size != other.size) {
            throw runtime_error("Size MisMatch for Division!");
        }
        DynamicArray result(size);
        for(int i = 0; i < size; ++i) {
            if(other.arr[i] == 0) {
                throw runtime_error("Division by Zero!");
            }
            result.arr[i] = this->arr[i] / other.arr[i];
        }
        return result;
    }
    int& operator[](int index) {
        if(index < 0 || index >= size) {
            throw runtime_error("Index Out of Range!");
        }
        return arr[index];
    }
    const int& operator[](int index) const {
        if(index < 0 || index >= size) {
            throw runtime_error("Index Out of Range!");
        }
        return arr[index];
    }
    friend ostream& operator<<(ostream& os, const DynamicArray& other) {
        if(other.size == 0) os << "[Empty Array]";
        os << "[";
        for(int i = 0; i < other.size; ++i) {
            os << other.arr[i] << " ";
        }
        os << "]";
        return os;
    }
    bool isEmpty() const {
        return size == 0;
    }
    bool isFull() const {
        return size == capacity;
    }
    void push(int val) {
        if(isFull()) resize(capacity == 0 ? 2 : capacity * 2);
        arr[size++] = val;
    }
    int pop() {
        if(isEmpty()) {
            throw runtime_error("Array is Empty. Cannot POP!");
        }
        return arr[--size];
    }
    void resizeArr(int newCapacity) {
        if(newCapacity < size) {
            throw runtime_error("New Size Cannot be Less Than the Current Size!");
        }
        resize(newCapacity);
    }
    int getSize() const {
        return size;
    }
    int getCapacity() const {
        return capacity;
    }
};

int main() {
    DynamicArray arr1(3), arr2(3);

    for(int i = 1; i < 4; ++i) {
        arr1.push(i);
        arr2.push(i);
    }

    cout << arr1 + arr2 << endl;
    cout << arr1 - arr2 << endl;
    cout << arr1 * arr2 << endl;
    cout << arr1 / arr2 << endl;

    return 0;
}