#include <iostream>
using namespace std; 

class point {
int x, y;
public: 
point(int a, int b);
void printData();
};

void point :: printData() {
cout << "(" << x << " , " << y << ")" << endl;
}

 point :: point (int a, int b) {
x = a;
y = b;
}

int main() {
point p1(5, 7);
p1.printData();

point p2 = point(8, 9);
p2.printData();
return 0;
}