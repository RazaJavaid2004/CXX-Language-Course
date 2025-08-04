#include <iostream>

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.3, 4.4);
    Complex c2(1.1, 2.2);
    Complex c3;

    c3 = c1 + c2;  // Using the overloaded + operator
    c3.display();

    return 0;
}