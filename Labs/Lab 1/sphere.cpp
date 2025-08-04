#include <iostream>
using namespace std;

float areaOfSphere(float rad);
float volOfSphere(float rad);

int main() {
    float rad;
    cout << "Enter the Radius of the Sphere: ";
    cin >> rad;
    
    cout << "Area of the Sphere: " << areaOfSphere(rad) << endl;
    cout << "Volume of the Sphere: " << volOfSphere(rad) << endl;

    return 0;
}

float areaOfSphere(float rad) {
    return 4 * (22 / 7) * rad * rad;
}

float volOfSphere(float rad) {
    return (4 / 3) * (22 / 7) * rad * rad *rad;
}