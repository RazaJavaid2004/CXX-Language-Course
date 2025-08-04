#include <iostream>
#include <utility> // For std::move

class DynamicArray {
    int* arr;
    int size;

public:
    DynamicArray(int s) : size(s), arr(new int[s]) {}

    // Move Assignment Operator
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            delete[] arr; // Free current resource
            arr = other.arr; // Transfer ownership
            size = other.size;
            other.arr = nullptr; // Nullify old object
            other.size = 0;
        }
        return *this;
    }

    ~DynamicArray() { delete[] arr; }
};

int main() {
    DynamicArray a(5), b(10);
    b = std::move(a); // Move assignment transfers ownership
    return 0;
}