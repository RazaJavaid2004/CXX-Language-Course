#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    // Parameterized constructor
    Rectangle(int width, int height) {
        // Using 'this' pointer to distinguish member variables from parameters
        this->width = width;
        this->height = height;
    }

    // Method to calculate area
    int area() {
        return this->width * this->height;
    }

    // Method chaining
    Rectangle& setWidth(int width) {
        this->width = width;
        return *this; // Returning the current object
    }

    Rectangle& setHeight(int height) {
        this->height = height;
        return *this; // Returning the current object
    }

    // Method to display dimensions
    void display() {
        cout << "Width: " << this->width << ", Height: " << this->height << endl;
    }
};

int main() {
    // Create an object of Rectangle
    Rectangle rect(10, 5);

    // Display initial dimensions
    rect.display();
    
    // Modify dimensions using method chaining
    rect.setWidth(20).setHeight(10);
    
    // Display updated dimensions
    rect.display();
    
    // Calculate and display area
    cout << "Area: " << rect.area() << endl;

    return 0;
}