#include <iostream>
using namespace std;

class Account {
    protected:
    double balance;
    public:
    Account(double b = 0) : balance(b) {}
    virtual void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited Amount: Rs" << amount << endl;
            cout << "Current Balance: Rs" << balance << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
    virtual void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Withdraw Amount: Rs" << amount << endl;
            cout << "Current Balance: Rs" << balance << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
    void checkBalance() const {
        cout << "Current Balance: Rs" << balance << endl;
    }
    void setBalance(double b) {
        balance = b;
    }
    double getBalance() const {
        return balance;
    }
};

class InterestAccount : virtual public Account {
    protected:
    double interest;
    public:
    InterestAccount(double b, double i = 0.30) : Account(b), interest(i) {}
    void deposit(double amount) override {
        if(amount > 0) {
            balance += amount + (interest * amount / 100);
            cout << "Deposit Amount: Rs" << amount << endl;
            cout << "Current Balance: Rs" << balance << endl;
            cout << "Interest Amount: Rs" << interest << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
    void setInterest(double i) {
        interest = i;
    }
    double getInterestRate() const {
        return interest;
    }
};

class ChargingAccount : virtual public Account {
    protected:
    double fee;
    public:
    ChargingAccount(double b, double f = 25) : Account(b) ,fee(f) {}
    void withdraw(double amount) override {
        if(amount + fee <= balance) {
            balance -= amount + fee;
            cout << "Withdraw Amount: Rs" << amount << endl;
            cout << "Current Balance: Rs" << balance << endl;
            cout << "Fee Charges: Rs" << fee << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
    void setFee(double f) {
        fee = f;
    }
    double getFee() const {
        return fee;
    }
};

class ACI : public InterestAccount, public ChargingAccount {
    public:
    ACI(double b, double i, double f) : Account(b), InterestAccount(b, i), ChargingAccount(b, f) {}
    void transfer(double amount, Account& other) {
        if(amount <= balance) {
            balance -= amount;
            other.deposit(amount);
            cout << "Amount: Rs" << amount << " has been transferred to Account Successfully!" << endl;
            cout << "Current Balance: Rs" << other.getBalance() << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
    void transfer(double amount, InterestAccount& other) {
        if(amount <= balance) {
            balance -= amount;
            other.deposit(amount);
            cout << "Amount: Rs" << amount << " has been transferred to Interest Account Successfully!" << endl;
            cout << "Current Balance: Rs" << other.getBalance() << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
    void transfer(double amount, ChargingAccount& other) {
        if(amount <= balance) {
            balance -= amount;
            other.deposit(amount);
            cout << "Amount: Rs" << amount << " has been transferred to Charging Account Successfully!" << endl;
            cout << "Current Balance: Rs" << other.getBalance() << endl;
        }
        else throw invalid_argument("Insufficient Balance or Amount!");
    }
};

int main() {
    try {
        Account acc1(1000);
        InterestAccount intAcc(1000, 30);
        ChargingAccount chAcc(1000, 25);
        ACI aci(1000, 30, 25);

        cout << "Account: " << endl;
        acc1.deposit(100);
        acc1.withdraw(50);
        cout << endl;

        cout << "Interest Account: " << endl;
        intAcc.deposit(200);
        cout << endl;

        cout << "Charging Account: " << endl;
        chAcc.withdraw(300);
        cout << endl;

        cout << "ACI: " << endl;
        aci.deposit(500);
        cout << endl;

        aci.withdraw(400);
        cout << endl;

        cout << "Transfer Amount: " << endl;
        aci.transfer(200, acc1);
        cout << endl;

        aci.transfer(150, intAcc);
        cout << endl;

        aci.transfer(100, chAcc);
    }
    catch(const invalid_argument& e) {
        cerr << e.what() << endl;
    }

    return 0;
}