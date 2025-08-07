#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;
    marks.push_back(80);
    marks.push_back(90);
    marks.push_back(100);
    marks.push_back(85);
    marks.push_back(70);

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}