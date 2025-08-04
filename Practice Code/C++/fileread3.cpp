#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in;
    in.open("file2.txt");

    if(!in) {
        cout << "File doesn't exist" << endl;
        return 1;
    }

    string str;

    while(in.eof() == 0) {
        in >> str;
        cout << str;
    }

    in.close();

    return 0;
}