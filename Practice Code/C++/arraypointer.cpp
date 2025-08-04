#include <iostream>
using namespace std; 

int main() {
int n;
cout << "Enter the number of subjects: " << endl;
cin >> n;

int marks[n];
int* ptr = marks;

cout << "Enter the marks:" << endl;
for(int i = 0; i < n; i++) {
cin >> *(ptr+i);
}

for(int i = 0; i < n; i++) {
cout << "Marks of subject "<<i+1<<" is: " << *(ptr+i) << endl;
}

 return 0;
}