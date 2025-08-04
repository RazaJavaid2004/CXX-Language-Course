#include <iostream>
using namespace std;

class Employee {
    int id;
    float salary;
    static int count;
    public:
    void setData();
    void display();
};

int Employee :: count = 1;

void Employee :: setData() {
    cout << "Enter ID of Employee " << count << endl;
    cin >> id;
    cout << "Enter Salary of Employee " << count << endl;
    cin >> salary;
    count++;
}

void Employee :: display() {
    cout << "Salary of Employee with ID " << id << " has Salary of Rs " << salary << endl;
}
int main() {
    Employee Raza, Harry, Rohan;
    Raza.setData();
    Raza.display();

    Harry.setData();
    Harry.display();

    Rohan.setData();
    Rohan.display();

    return 0;
}