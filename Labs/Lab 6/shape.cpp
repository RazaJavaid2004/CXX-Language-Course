#include <iostream>
using namespace std;

class Shape {
    protected:
    int numberOfSides;
    double area;
    public:
    Shape(int n = 0, double a = 0) : numberOfSides(n), area(a) {}
    void setNumberOfSides(int n) {
        numberOfSides = n;
    }
    void setArea(double a) {
        area = a;
    }
    int getNumberOfSides() const {
        return numberOfSides;
    }
    double getArea() const {
        return area;
    }
    virtual void generateArea() = 0;
};

class Rectangle : public Shape {
    protected:
    double length;
    double width;
    public:
    Rectangle(double l = 0, double w = 0) : Shape(4),length(l), width(w) {}
    virtual void generateArea() override {
        area = length * width;
    }
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }
    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
};

class Circle : public Shape {
    double radius;
    public:
    Circle(double r = 0) : radius(r) {}
    virtual void generateArea() override {
        area = (22 / 7) * radius * radius;
    }
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() const {
        return radius;
    }
};

class Triangle : public Shape {
    double base;
    double height;
    public:
    Triangle(double b = 0, double h = 0) : Shape(1), base(b), height(h) {}
    virtual void generateArea() override {
        area = 0.5 * base * height;
    }
    void setBase(double b) {
        base = b;
    }
    void setHeight(double h) {
        height = h;
    }
    double getBase() const {
        return base;
    }
    double getHeight() const {
        return height;
    }
};

class Square : public Rectangle {
    public:
    Square(double side = 0) : Rectangle(side, side) {}
    virtual void generateArea() override {
        Rectangle :: generateArea();
    }
    bool checkSides() const {
        return length == width;
    }
};

int main() {
    Rectangle rect(4.0, 5.0);
    rect.generateArea();
    cout << "Rectangle Area: " << rect.getArea() << endl;

    Circle circ(3.0);
    circ.generateArea();
    cout << "Circle Area: " << circ.getArea() << endl;

    Triangle tri(6.0, 8.0);
    tri.generateArea();
    cout << "Triangle Area: " << tri.getArea() << endl;

    Square sq(4.0);
    sq.generateArea();
    cout << "Square Area: " << sq.getArea() << endl;
    cout << "Are sides of square equal? " << (sq.checkSides() ? "Yes" : "No") << endl;

    return 0;
}