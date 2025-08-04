#include <iostream>
using namespace std;

class bankAccount {
    char account_type;
    string account_no;
    double balance;
    public:
    bankAccount(char acctype = '!', string accno = "NULL", double bal = 0.0) : account_type(acctype),
    account_no(accno), balance(bal) {}
    double getBalance() const {
        return balance;
    }
    void withdrawFromCurrent(double amount);
    void withdrawFromSaving(double amount);
};

void bankAccount :: withdrawFromCurrent(double amount) {
        if(amount > 100000) {
            cout << "You Cannot Withdraw More than Rs 100000 at a time";
            return;
        }

        if(amount > balance) {
            cout << "Insufficient Balance in Your Account";
            return;
        }

        double fee = 100;
        double totalDeduction = amount + fee;

        if(amount > 50000) {
            double tax = (balance - amount) * 0.05;
            totalDeduction += tax;
        }

        if(totalDeduction > balance) {
            cout << "Insufficient Balance in Your Account After Cutting Tax";
            return;
        }

        balance -= totalDeduction;

        cout << "balance Withdrawn: " << amount << endl;
        cout << "Total Balance: " << getBalance();
    }

void bankAccount :: withdrawFromSaving(double amount) {
        if(amount > 100000) {
            cout << "You Cannot Withdraw More than Rs 100000 at a time";
            return;
        }

        if(amount > balance) {
            cout << "Insufficient Balance in Your Account";
            return;
        }
        
        double fee = amount * 0.02;
        double totalDeduction = amount + fee;

        if(amount > 50000) {
            double tax = (balance - amount) * 0.05;
            totalDeduction += tax;
        }

        if(totalDeduction > balance) {
            cout << "Insufficient Balance in Your Account After Cutting Tax";
            return;
        }

        balance -= totalDeduction;

        cout << "balance Withdrawn: " << amount << endl;
        cout << "Total Balance: " << getBalance();
}

int main() {
    char accountType;
    string accountNo;
    int balance;

    cout << "Welcome To MyBank!" << endl;
    cout << "Enter Your Account Type (S for Saving, C for Current): ";
    cin >> accountType;
    cout << "Enter Your Account Number: ";
    cin >> accountNo;
    cout << "Enter Balance To be Deposited: ";
    cin >> balance;

    if(balance < 200000) {
        cout << "Please Deposit at least Rs 200000";
        return 1;
    }

    bankAccount a1(accountType, accountNo, balance);

    if(accountType == 'S' || accountType == 's') {
        double amount;
        cout << "Enter Amount to be Withdrawn: ";
        cin >> amount;
        a1.withdrawFromSaving(amount);
    }

    else if(accountType == 'C' || accountType == 'C') {
        double amount;
        cout << "Enter Amount to be Withdrawn: ";
        cin >> amount;
        a1.withdrawFromCurrent(amount);
    }

    else {
        cout << "Invalid Account Type";
    }

    return 0;
}