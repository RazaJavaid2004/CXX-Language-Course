#include <iostream>
using namespace std;

class binary {
string s;
public:
void readstr();
void chk_bin();
void ones();
void display();
};

void binary :: readstr() {
cout << "Enter your binary format: ";
cin >> s;
}

void binary :: chk_bin() {
for(int i = 0; i < s.length(); i++) {
if(s.at(i) != '1' && s.at(i) != '0') {
cout << "Invalid binary format" << endl;
exit(0);
}
}
}

void binary :: ones() {
for(int i = 0; i < s.length(); i++) {
if(s.at(i) == '1') {s.at(i) = '0';}
else {s.at(i) = '1';}
}
}

void binary :: display() {
cout << s << endl;
}

int main() {
binary b;
b.readstr();
b.chk_bin();
b.display();
b.ones();
b.display();
return 0;
}