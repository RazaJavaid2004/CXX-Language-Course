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
    
    getline(in, str);
    getline(in, str);
    cout << str << endl;
    cout << str << endl;
    in.close();
    return 0;
}