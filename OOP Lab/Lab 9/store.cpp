#include <iostream>
using namespace std;

class Store {
    protected:
    double totalBill;
    public:
    Store(double tb = 0) : totalBill(tb) {}
    virtual double calculateFinalBill() = 0;
    virtual ~Store() {}
    void setTotalBill(double tb) {
        totalBill = tb;
    }
    double getTotalBill() const {
        return totalBill;
    }
};

class ImtiazStore : virtual public Store {
    public:
    ImtiazStore(double tb) : Store(tb) {}
    double calculateFinalBill() override {
        return totalBill - (0.07 * totalBill);
    }
};

class BinHashimStore : virtual public Store {
    public:
    BinHashimStore(double tb) : Store(tb) {}
    double calculateFinalBill() override {
        return totalBill - (0.05 * totalBill);
    }
};

int main() {
    double bill;
    cout << "Enter the total bill: Rs ";
    cin >> bill;

    ImtiazStore imtiaz(bill);
    BinHashimStore binHashim(bill);

    cout << "Final bill after discount at ImtiazStore: Rs " << imtiaz.calculateFinalBill() << endl;
    cout << "Final bill after discount at BinHashimStore: Rs " << binHashim.calculateFinalBill() << endl;

    return 0;
}