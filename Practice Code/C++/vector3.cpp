#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector <int> v1; // zero element int vector;
    display(v1);
    vector <float> v2(3); // 3 elements float vector;
    display(v2);
    vector <float> v3(v2); // 3 elements float vector made from v2;
    display(v3);
    vector <int> v4(4, 3); // 4 elements int vector having all members as 3;
    display(v4);

    return 0;
}