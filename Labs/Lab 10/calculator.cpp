#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Calculator {
    T1 num1;
    T2 num2;
    public:
    Calculator(T1 n1, T2 n2) : num1(n1), num2(n2) {}
    double add() const {
        return static_cast <double> (num1) + static_cast <double> (num2);
    }
    double sub() const {
        return static_cast <double> (num1) - static_cast <double> (num2);
    }
    double mul() const {
        return static_cast <double> (num1) * static_cast <double> (num2);
    }
    double div() const {
        if(num2 == 0) throw invalid_argument("Division By Zero!");
        return static_cast <double> (num1) / static_cast <double> (num2);
    }
    void setNum1(T1 n1) {
        num1 = n1;
    }
    void setNum2(T2 n2) {
        num2 = n2;
    }
    void setNum(T1 n1, T2 n2) {
        num1 = n1;
        num2 = n2;
    }
    T1 getNum1() const {
        return num1;
    }
    T2 getNum2() const {
        return num2;
    }
};

int main() {
    double num1, num2;
    cout << "Enter the Two Numbers: " << endl;
    cin >> num1 >> num2;

    Calculator <double, double> c(num1, num2);

    char op;
    cout << "Enter the Operation: " << endl;
    cin >> op;

    switch(op) {
        case '+':
            cout << "Addition: " << c.add() << endl;
            break;
        case '-':
            cout << "Subtraction: " << c.sub() << endl;
            break;
        case '*':
            cout << "Multiplication: " << c.mul() << endl;
            break;
        case '/':
            try{
                cout << "Division: " << c.div() << endl;
            }
            catch(const invalid_argument& e) {
                cerr << "Error: " << e.what() << endl;
            }
    }    

    return 0;
}