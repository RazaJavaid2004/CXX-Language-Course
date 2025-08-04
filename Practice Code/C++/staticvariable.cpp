#include <iostream>
using namespace std; 

int sum(int a, int b);

int main() {
int a, b;
cout << "Enter a and b: " << endl;
cin >> a >> b;
cout << "Sum is: " << sum(a, b) <<endl;
cout << "Sum is: " << sum(a, b) << endl;
cout << "Sum is: " << sum(a, b) <<endl;
return 0;
}

int sum(int a, int b) {
static int c = 0;
c += 1;
return a+b+c;
}