#include <iostream>
#include <cstring>
using namespace std; 

typedef struct {
int id;
char name[100];
float salary;
} emp;

int main() {
emp e1;
e1.id = 100;
strncpy(e1.name, "Raza", sizeof(e1.name));
e1. salary = 1000000;
cout << "employee id: " << e1.id << endl;
cout << "employee name: " << e1. name << endl;
cout << "employee salary: " << e1. salary << endl;
return 0;
}