#include <iostream>
#include <string>
using namespace std;

string reversed(string s);

int main() {
    string s;
    cout << "Enter the String: ";
    getline(cin, s);
    
    cout << "Reversed String: " << reversed(s);
    return 0;
}

string reversed(string s) {
    if(s.length() == 0) return "";
    string ros = s.substr(1);

    return reversed(ros) + s[0];
}