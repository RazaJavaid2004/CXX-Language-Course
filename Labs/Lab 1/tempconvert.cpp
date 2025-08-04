#include <iostream>
using namespace std;

float fahrToCels(float t);

int main() {
    float temp;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> temp;

    cout << "Temperature in Celsius: " << fahrToCels(temp);

    return 0;
}

float fahrToCels(float t) {
    return (t-32) / 1.8;
}