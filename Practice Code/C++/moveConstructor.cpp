#include <iostream>
#include <utility> // For std::move

class MyClass {
private:
    int* data;
    int size;

public:
    // Constructor
    MyClass(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) data[i] = i + 1;
        std::cout << "Constructor called\n";
    }

    // Copy Constructor (Deep Copy)
    MyClass(const MyClass& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) data[i] = other.data[i];
        std::cout << "Copy Constructor called\n";
    }

    // Move Constructor (Efficient Resource Transfer)
    MyClass(MyClass&& other) noexcept : data(nullptr), size(0) {
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
        std::cout << "Move Constructor called\n";
    }

    // Destructor
    ~MyClass() {
        delete[] data;
        std::cout << "Destructor called\n";
    }
};

// Function to demonstrate move constructor
MyClass createObject() {
    MyClass temp(5); 
    return temp;  // Move constructor will be used here!
}

int main() {
    MyClass obj1(5);            // Constructor
    MyClass obj2 = obj1;        // Copy constructor
    MyClass obj3 = createObject(); // Move constructor

    return 0;
}