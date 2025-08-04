#include <iostream>
#include <string>
using namespace std;

string rmDupStr(string s);

int main() {
    string s;
    cout << "Enter the String: ";
    getline(cin, s);
    cout << "New Sring: " << rmDupStr(s);
    return 0;
}

string rmDupStr(string s) {
    if(s.length() == 0) return "";

    char ch = s[0];
    string ans = rmDupStr(s.substr(1));
    
    if(ch == ans[0]) {
        return ans;
    }
    
    return (ch + ans);
}