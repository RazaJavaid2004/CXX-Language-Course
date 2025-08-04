#include <iostream>
using namespace std;

class hotelMercato {
    string customerName;
    int days;
    double totalRent;
    double rent_per_day;
    void calculateRent() {
        if(days > 7) {
            totalRent = rent_per_day * (days - 1); 
        }
        else {
            totalRent = rent_per_day * days;
        }
    }
    public:
    hotelMercato(string name = "", int d = 0) : customerName(name), days(d) {
        rent_per_day = 1000.85;
        calculateRent();
    }
    void displayDetails() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Days: " << days << endl;
        cout << "Rent: Rs " << totalRent << endl;
        cout << endl;
    }
    void setCustomerName(string name) {
        customerName = name;
    }
    void setDays(int d) {
        days = d;
    }
    string getCustomerName() const {
        return customerName;
    }
    int getDays() const {
        return days;
    }
};

int main() {
    hotelMercato c1("Rafey", 30);
    hotelMercato c2("Yahya", 5);

    c1.displayDetails();
    c2.displayDetails();

    return 0;
}