#include <iostream>
using namespace std;

class account {
    double balance;
    int transactions = 0;
    double interest_rate;
    public:
    account(double init_bal, double rate) : balance(init_bal), interest_rate(rate) {}
    double getBalance() {
        return balance;
    }
    int getTransactions() {
        return transactions;
    }
    double getInterest() {
        double interest = balance * interest_rate;
        return interest;
    }
    void deposit(double amount);
    void withdraw(double amount);
};

void account :: deposit(double amount) {
    if(amount > 0) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
        cout << "New Account Balance: " << getBalance() << endl;
        transactions++;
    }
    else {
        cout << "Invalid Deposit Amount" << endl;
        cout <<  "Account Balance: " << getBalance() << endl;
    }
}

void account :: withdraw(double amount) {
    if(amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Amount Withdrawed: " << amount << endl;
        cout << "New Account Balance: " << getBalance() << endl;
        transactions++;
    }
    else {
        cout << "Invalid Withdraw Amount OR Insufficient Funds" << endl;
        cout << "Account Balance: " << getBalance() << endl;
    }
}

int main() {
    account acc(100000, 0.05);
    int choice;
    double amount;

    do {
        cout << "-------------------Menu-------------------" << endl;
        cout << "1. Display the account balance" << endl;
        cout << "2. Display the number of transactions" << endl;
        cout << "3. Display interest earned for this period" << endl;
        cout << "4. Make a deposit" << endl;
        cout << "5. Make a withdrawal" << endl;
        cout << "6. Exit the program" << endl;

        cout << "Enter Your Choice: ";       
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Account Balance: " << acc.getBalance() << endl;
                break;
            case 2:
                cout << "Total Number Of Transactions: " << acc.getTransactions() << endl;
                break;
            case 3:
                cout << "Total Interest Amount: " << acc.getInterest() << endl;
                break;
            case 4:
                cout << "Enter the Deposit Amount: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 5:
                cout << "Enter the Withdrawal Amount: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 6:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid Choide! Try Again!" << endl;
        }
    } while(choice != 6);

    return 0;
}