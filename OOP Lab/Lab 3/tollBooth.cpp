#include <iostream>
using namespace std;

class toolBooth {
    int car;
    double money;
    public:
    toolBooth(int c = 0, int m = 0) : car(c), money(m) {}
    void payingCar() {
        car++;
        money += 0.5;
    }
    void setCar(int c) {
        car = c;
    }
    void setMoney(int m) {
        money = m;
    }
    int getCar() {
        return car;
    }
    double getMoney() {
        return money;
    }
};

int main() {
    toolBooth t;
    t.payingCar();
    cout << "Number of Cars: " << t.getCar() << endl;
    cout << "Total Money Collected: $ " << t.getMoney() << endl;

    t.payingCar();
    cout << "Number of Cars: " << t.getCar() << endl;
    cout << "Total Money Collected: $ " << t.getMoney() << endl;

    return 0;
}