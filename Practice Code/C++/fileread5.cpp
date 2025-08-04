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
    in >> s;
    while(getline(in, s)) {
        cout << s;
    }

    in.close();

    return 0;
}