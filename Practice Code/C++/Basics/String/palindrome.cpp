#include <iostream>
using namespace std;

bool checkPalindrome(char* str, int n) {
    bool check = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != str[n-1-i]) {
            check = 0;
            break;
        }
    }
    return check;
}

int main() {
    int n;
    cout << "Enter the Number of Characters in Your Name: ";
    cin >> n;

    char name[n+1];
    cin >> name;

    cout << boolalpha << checkPalindrome(name, n+1);

    return 0;
}