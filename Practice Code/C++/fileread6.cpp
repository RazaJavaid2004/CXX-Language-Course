#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in;
    in.open("file4.txt");

    if(in.fail()) {
        cout << "File doesn't exist" << endl;
        return 1;
    }

    char c;
    while(in.get(c)) {
    if(c == 'a') {cout << '@';}
    else {cout << c;}
    }    

    in.close();


    return 0;
}