#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int a = 1, b = 11, c = 111;

cout << "without setw" << endl;
cout << "value of a is: " << a << endl;
cout << "value of b is: " << b << endl;
cout << "value of c is: " << c << endl;

cout << "with setw" << endl;
cout << "value of a is: " << setw(4) << a << endl;
cout << "value of b is: " << setw(4) << b << endl;
cout << "value of c is: " << setw(4) << c << endl;

return 0;
}