#include <iostream>
using namespace std;

void printMarks(int marks[], int size);
float totalMarks(int marks[], int size);
float calcPercent(int marks[], int size);

int main() {
    int roll_no;
    cout << "Enter Your Roll No: ";
    cin >> roll_no;

    int* marks = new int[5];

    cout << "Enter Your Marks: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    printMarks(marks, 5);
    
    cout << "Roll No: " << roll_no << endl;
    cout << "Total Marks: " << totalMarks(marks, 5) << endl;
    cout << "Percentage: " << calcPercent(marks, 5) << endl;

    return 0;
}

void printMarks(int marks[], int size) {
    cout << "Your Marks: ";
    for(int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

float totalMarks(int marks[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return sum;
}

float calcPercent(int marks[], int size) {
    return totalMarks(marks, size) / size;
}