#include <iostream>
using namespace std;

class Calculator {
    double num1, num2, num3;
    public:
    Calculator(double a = 0, double b = 0, double c = 0) : num1(a), num2(b), num3(c) {}
    double add(double a, double b) {
        return a + b;
    }
    double add(double a, double b, double c) {
        return a + b + c;
    }
    double multiply(double a, double b) {
        return a * b;
    }
    double multiply(double a, double b, double c) {
        return a * b * c;
    }
    double sub(double a, double b) {
        return a - b;
    }
    double sub(double a, double b, double c) {
        return a - b - c;
    }
    double divide(double a, double b) {
        return a / b;
    }
    void setNum1(double a) {
        num1 = a;
    }
    void setNum2(double b) {
        num2 = b;
    }
    void setNum3(double c) {
        num3 = c;
    }
    double getNum1() const {
        return num1;
    }
    double getNum2() const {
        return num2;
    }
    double getNum3() const {
        return num3;
    }
};

int main() {
    Calculator c;
    cout << c.divide(2, 0);

    return 0;
}