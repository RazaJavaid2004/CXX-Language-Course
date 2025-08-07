#include <iostream>
using namespace std;

class Rectangle {
    int height, width;
    public:
    Rectangle(int height, int width);
    int area();
    Rectangle& setHeight(int height) {
        this -> height = height;
        return *this;
    }
    Rectangle& setWidth(int width) {
        this -> width = width;
        return *this;
    }
    void display();
};

Rectangle :: Rectangle(int height, int width) {
    this -> height = height;
    this -> width = width;
}

int Rectangle :: area() {
    return this -> height * this -> width;
}

void Rectangle :: display() {
    cout << "Height: " << this -> height << endl;
    cout << "Width: " << this -> width << endl;
    cout << "Area: " << area() << endl;
}

int main() {
    Rectangle rec(4, 10);
    rec.display();
    rec.setHeight(5).setWidth(10);
    rec.display();
    return 0;
}