#include <iostream>
#include <cstring>
using namespace std;

class employee {
    char* firstName;
    string lastName;
    int salary;
    public:
    employee(const char* fName, string lName, int sal) {
        firstName = new char[strlen(fName) + 1];
        strncpy(firstName, fName, sizeof(fName));
        lastName = lName;
        salary = sal > 0 ? sal : 0;
    }
    ~employee() {
        delete[] firstName;
        firstName == nullptr;
    }
    void setEmployee(const char* fName, string lName, int sal) {
        delete[] firstName;
        firstName = new char[strlen(fName) + 1];
        strncpy(firstName, fName, sizeof(fName));
        lastName = lName;
        salary = sal > 0 ? sal : 0;
    }
    const char* getFirstName() const {
        return firstName;
    }
    string getLastName() const {
        return lastName;
    }
    int getMonthlySalary() const {
        return salary;
    }
    int getYearlySalary() const {
        return salary * 12;
    }
    void giveRaise() {
        salary *= 1.10;
    }
};

int main() {
    employee emp1("John", "Doe", 3000);
    employee emp2("Jane", "Smith", 3500);

    cout << "Monthly Salary of " << emp1.getFirstName() << " " << emp1.getLastName() << ": Rs" << emp1.getMonthlySalary() << endl;
    cout << "Monthly Salary of " << emp2.getFirstName() << " " << emp2.getLastName() << ": Rs" << emp2.getMonthlySalary() << endl;

    cout << "Yearly Salary of " << emp1.getFirstName() << " " << emp1.getLastName() << ": Rs" << emp1.getYearlySalary() << endl;
    cout << "Yearly Salary of " << emp2.getFirstName() << " " << emp2.getLastName() << ": Rs" << emp2.getYearlySalary() << endl;

    emp1.giveRaise();
    emp2.giveRaise();

    cout << "Yearly Salary of " << emp1.getFirstName() << " " << emp1.getLastName() << " after raise: Rs" << emp1.getYearlySalary() << endl;
    cout << "Yearly Salary of " << emp2.getFirstName() << " " << emp2.getLastName() << " after raise: Rs" << emp2.getYearlySalary() << endl;

    return 0;
}