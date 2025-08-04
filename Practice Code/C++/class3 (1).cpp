#include <iostream>
using namespace std; 

class Employee {
int id;
float salary;
static int counter;
public: 
void setData();
void display();
};

int Employee :: counter = 1;

void Employee:: setData() {
cout << "Enter The ID of Employee " << counter << endl;
cin >> id;
cout << "Enter The Salary of Employee " << counter << endl;
cin  >> salary;
counter++;
}

void Employee :: display() {
cout << "Employee ID: " << id << " Employee Salary: " << salary << endl;
}

int main() {
Employee fb[4];
for(int i = 0; i < 4; i++) fb[i].setData();
for(int i = 0; i < 4; i++) fb[i].display();
return 0;
}