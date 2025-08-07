#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out;
    out.open("file4.txt");

    string str1, str2;
    cout << "Enter First Name: ";
    cin >> str1;

    cout << "Enter Second Name: ";
    cin >> str2;
    
    out << str1;
    out << " ";
    out << str2;

    out.close();

    ifstream in;
    in.open("file4.txt");
    
    cout << "Contents of the file: " << endl;
    in >> str1;
    in >> str2;
    cout << str1 << " " << str2;

    in.close();

    return 0;
}