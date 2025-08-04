#include <iostream>
using namespace std;

class account {
    int account_no;
    double account_bal;
    int security_code;
    static int count;
    public:
    account(int acc_no = 0, double acc_bal = 0, int code = 0) : account_no(acc_no), account_bal(acc_bal), security_code(code) {
        count++;
    }
    void printData() {
        cout << "Account No: " << account_no << endl;
        cout << "Account Balance: " << account_bal << endl;
        cout << "Security Code: " << security_code << endl;
        cout << endl;
    }
    void setAccountNo(int acc_no) {
        account_no = acc_no;
    }
    void setAccountBalance(double acc_bal) {
        account_bal = acc_bal;
    }
    void setSecurityCode(int code) {
        security_code = code;
    }
    int getAccountNo() {
        return account_no;
    }
    double getAccountBalance() {
        return account_bal;
    }
    int getSecurityCode() {
        return security_code;
    }
    static int getCount() {
        return count;
    }
};

int account :: count = 0;

int main() {
    account a1(100, 500000, 1234);
    account a2(200, 300000, 4321);

    a1.printData();
    a2.printData();

    cout << "Number of Account Objects: " << account :: getCount();

    return 0;
}