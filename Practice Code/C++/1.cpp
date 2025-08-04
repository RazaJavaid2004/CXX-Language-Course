#include <iostream>
using namespace std;

void mainMenu();
void arithMenu();
void trigMenu();
void trigInvMenu();
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

int main() {
    mainMenu();
    return 0;
}

void printMenu() {
    int choice;
    while(1) {
    cout << "-------------MAIN MENU-------------" << endl;
    cout << "1. Arithmetic Operations" << endl;
    cout << "2. Trigonometric Operations" << endl;
    cout << "3. Trigonometric Inverse Operations" << endl;
    cout << "Enter Your Choice" << endl;
    cin >> choice;
    switch(choice) {
        case 1:
        arithMenu();
        break;
        case 2:
        trigMenu();
        break;
        case 3:
        trigInvMenu();
        default:
        cout << "Invalid Choice! Try Again" << endl;
        break;
    }
    }
}

void arithMenu() {
    int choice;
    while(1) {
    cout << "------ARITHMETIC MENU-------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "Enter Your Choice" << endl;
    cin >> choice;

    int a, b;
    cout << "Enter num1 and num2: ";
    cin >> a >> b;

    switch(choice) {
    case 1:
    add(a, b);
    break;
    case 2:
    sub(a, b);
    break;
    case 3:
    mul(a, b);
    case 4:
    divi(a, b);
    default:
    cout << "Invalid Choice! Try Again" << endl;
    break;
    }
    }
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}

int divi(int a, int b) {
    if(b == 0) cout << "Undefined Answer" << endl;
    return a / b;
}