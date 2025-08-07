#include <iostream>
#include <cstring>
using namespace std; 

typedef union {
int i;
char str[100];
float f;
} Data;

int main() {
Data data1;
data1.i = 100;
cout << "employee id: " << data1.i << endl;

data1.f = 4.0;
cout << "employee name: " << data1.f << endl;

strncpy(data1.str, "Raza", sizeof(data1.str));
cout << "employee salary: " << data1. str << endl;

return 0;
}