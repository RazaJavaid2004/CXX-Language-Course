#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("file5.txt");
    if(in.fail()) {
        cout << "File doesn't exist" << endl;
        return 1;
    }

    string s;
    while(in >> s) {
        if(s == "Butterfly") cout << "Catterpillar";
        else cout << s;
        cout << " ";
    }
    in.close();

    return 0;
}