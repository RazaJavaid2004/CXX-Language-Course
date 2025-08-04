#include <iostream>
using namespace std;

class circle {
    double radius;
    const double PI;
    public:
    circle(double r = 0) : PI(22 / 7), radius(r) {}
    void setRadius(double r) {
        radius = r;
    }
    double calculateArea() {
        return PI * radius * radius;
    }
    double getRadius() const {
        return radius;
    }
    double getPI() const {
        return PI;
    }
};

int main() {
    circle c1(3);
    cout << "PI = " << c1.getPI() << endl;
    cout << "Radius = " << c1.getRadius() << endl;
    cout << "Area = " << c1.calculateArea() << endl;

    PI = 3.14;   // PI is constant, therefore compiler will throw error

    return 0;
}