#include <iostream>
#include <string>
using namespace std;

void replacepi(string s);

int main() {
    string s;
    cout << "Enter the String: ";
    getline(cin, s);
    replacepi(s);

    return 0;
}

void replacepi(string s) {
    if(s.length() == 0) return;
    
    if(s[0] == 'p' && s[1] == 'i') {
        cout << "3.14";
        replacepi(s.substr(2));
    }
    else {
        cout << s[0];
        replacepi(s.substr(1));
    }
}