#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    string designation;
    double salary;
    public:
    Employee(string n = "", int i = 0, string d = "", double s = 0) : name(n), id(i), designation(d), salary(s) {}
    void setName(string n) {
        name = n;
    }
    void setId(int i) {
        id = i;
    }
    void setDesignation(string d) {
        designation = d;
    }
    void setSalary(double s) {
        salary = s;
    }
    string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    string getDesignation() const {
        return designation;
    }
    double getSalary() const {
        return salary;
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
    friend void updateSalary(Employee&, double s);
};

void updateSalary(Employee& emp, double s) {
    emp.salary = s;
}

int main() {
    Employee emp("Muhammad Raza", 138, "Software Engineer", 200000);
    emp.display();

    cout << endl;
    cout << "Updated Info: " << endl;

    updateSalary(emp, 300000);
    emp.display();


    return 0;
}