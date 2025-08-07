#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator {
    protected:
    int a;
    int b;
    public:
    void setSimpleData(int x, int y);
    void processSimple();
};

class ScientificCalculator {
    protected:
    int c;
    public:
    void setScientificData(int x);
    void processScientific();
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {};

void SimpleCalculator :: setSimpleData(int x, int y) {
    a = x;
    b = y;
}

void SimpleCalculator :: processSimple() {
    cout << "Sum: " << a+b << endl;
    cout << "Difference: " << a-b << endl;
    cout << "Product: " << a*b << endl;
    cout << "Quotient: " << a/b << endl;
}

void ScientificCalculator :: setScientificData(int x) {
    c = x;
}

void ScientificCalculator :: processScientific() {
    cout << "Sine: " << sin(c) << endl;
    cout << "Cosine: " << cos(c) << endl;
    cout << "Tangent: " << tan(c) << endl;
    cout << "ArcSine: " << asin(c) << endl;
    cout << "ArcCosine: " << acos(c) << endl;
    cout << "ArcTangent: " << atan(c) << endl;
}

int main() {
    HybridCalculator calc;
    calc.setScientificData(5);
    calc.processScientific();

    return 0;
}