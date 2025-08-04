#include <iostream>
#include <vector>

class DynamicArray {
private:
    std::vector<int> arr;

public:
    // Constructor
    DynamicArray(int size) : arr(size, 0) {}

    // Overload [] operator
    int& operator[](int index) {
        if (index >= 0 && index < arr.size()) {
            return arr[index];
        }
        throw std::out_of_range("Index out of bounds!");
    }

    // Overload << operator for printing
    friend std::ostream& operator<<(std::ostream& os, const DynamicArray& da) {
        for (int val : da.arr) {
            os << val << " ";
        }
        return os;
    }

    // Overload arithmetic operators
    DynamicArray operator+(const DynamicArray& other) {
        DynamicArray result(arr.size());
        for (size_t i = 0; i < arr.size(); i++) {
            result.arr[i] = arr[i] + other.arr[i];
        }
        return result;
    }

    DynamicArray operator-(const DynamicArray& other) {
        DynamicArray result(arr.size());
        for (size_t i = 0; i < arr.size(); i++) {
            result.arr[i] = arr[i] - other.arr[i];
        }
        return result;
    }

    DynamicArray operator*(const DynamicArray& other) {
        DynamicArray result(arr.size());
        for (size_t i = 0; i < arr.size(); i++) {
            result.arr[i] = arr[i] * other.arr[i];
        }
        return result;
    }

    DynamicArray operator/(const DynamicArray& other) {
        DynamicArray result(arr.size());
        for (size_t i = 0; i < arr.size(); i++) {
            if (other.arr[i] != 0) {
                result.arr[i] = arr[i] / other.arr[i];
            } else {
                throw std::runtime_error("Division by zero!");
            }
        }
        return result;
    }

    // Push method
    void push(int value) {
        arr.push_back(value);
    }

    // Pop method
    int pop() {
        if (isEmpty()) {
            throw std::runtime_error("Array is empty. Cannot pop!");
        }
        int value = arr.back();
        arr.pop_back();
        return value;
    }

    // Resize method
    void resizeArray(int newCapacity) {
        if (newCapacity < arr.size()) {
            throw std::runtime_error("New capacity cannot be less than current size!");
        }
        arr.resize(newCapacity, 0);
    }

    // Check if array is empty
    bool isEmpty() const {
        return arr.empty();
    }

    // Check if array is full
    bool isFull() const {
        return false; // std::vector is dynamic and never "full"
    }
};

int main() {
    DynamicArray arr1(5);

    // Test push
    for (int i = 0; i < 5; i++) {
        arr1.push(i + 1);
    }
    std::cout << "Array after push: " << arr1 << std::endl;

    // Test pop
    std::cout << "Popped value: " << arr1.pop() << std::endl;
    std::cout << "Array after pop: " << arr1 << std::endl;

    // Test isEmpty and isFull
    std::cout << "Is array empty? " << (arr1.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Is array full? " << (arr1.isFull() ? "Yes" : "No") << std::endl;

    // Test resize
    arr1.resizeArray(10);
    std::cout << "Array after resizing to capacity 10: " << arr1 << std::endl;

    return 0;
}