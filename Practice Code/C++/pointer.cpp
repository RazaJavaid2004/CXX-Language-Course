#include <iostream>
using namespace std; 

int main() {
int a = 5;
int* ptr;
ptr = &a;

cout << "value of address of a is: " << &a << endl;
cout << "value of address of pointer is: " << &ptr << endl;
cout << "value of pointer to a is: " << ptr << endl;
cout << "value of a is: " << a <<endl;
cout << "value at pointer to a is: " << *ptr << endl;

int** pptr;
pptr =  &ptr;
cout << "value of address of pptr to a is: " << &pptr << endl;
cout << "value at point to pointer of a is: " << **pptr << endl;

return 0;
}