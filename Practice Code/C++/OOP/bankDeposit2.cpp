#include <iostream>
using namespace std;

class BankDeposit {
    int Principal;
    int Year;
    float InterestRate;
    double ReturnValue;
    public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r) {
    Principal = p;
    Year = y;
    InterestRate = r;
    ReturnValue = Principal;

    for(int i = 0; i < Year; i++) {
        ReturnValue *= (1 + InterestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int R) {
    Principal = p;
    Year = y;
    InterestRate = (float)R / 100;
    ReturnValue = Principal;

    for(int i = 0; i < Year; i++) {
        ReturnValue *= (1 + InterestRate);
    }
}

void BankDeposit :: show() {
    cout << "Principat Amout: " << Principal << endl;
    cout << "Years Passed: " << Year << endl;
    cout << "Interest Rate: " << InterestRate << endl;
    cout << "Interest: " << ReturnValue << endl;
}

int main() {
    BankDeposit bd1, bd2;
    int p, y;
    float r, R;
    cout << "Enter The value of p, y , r: " << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y , R: " << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}