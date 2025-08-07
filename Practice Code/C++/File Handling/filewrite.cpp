#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str = "Raza Bhai";
    ofstream out("file1.txt");
    out << str;
    out.close();
    return 0;
}