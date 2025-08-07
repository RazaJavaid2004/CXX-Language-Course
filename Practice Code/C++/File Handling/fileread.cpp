#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str;
    ifstream in("file2.txt");

    if(!in) {
        cout << "File doesn't exist" << endl;
        return 1;
    }
    in >> str;
    cout << str;
    in.close();
    return 0;
}