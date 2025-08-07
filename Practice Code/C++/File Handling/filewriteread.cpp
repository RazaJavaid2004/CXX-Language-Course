#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    cout << "Enter Your Name: ";
    cin >> name;
    ofstream out("file3.txt");
    out << name;
    out.close();

    ifstream in("file3.txt");
    string content;
    in >> content;
    cout << "Printing the Contents of the file: " << endl;
    cout << "My Name is: " + content;
    in.close();

    return 0;
}