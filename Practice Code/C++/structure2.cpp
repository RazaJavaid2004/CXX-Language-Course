#include <iostream>
using namespace std; 

typedef struct {
int id;
char name[100];
float salary;
} emp;

int main() {
emp e1 = {100, "Raza", 100000};
cout << "employee id: " << e1.id << endl;
cout << "employee name: " << e1. name << endl;
cout << "employee salary: " << e1. salary << endl;
return 0;
}