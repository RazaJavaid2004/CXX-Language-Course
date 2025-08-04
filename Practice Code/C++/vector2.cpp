#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1 = {1, 2, 3};
    v1.push_back(4);
    for(int val : v1) cout << val << " ";
    cout << endl;
    v1.pop_back();
    for(int val : v1) cout << val << " ";
    cout << endl;

    vector <int> :: iterator iter = v1.begin();

    v1.insert(iter, 5);
    for(int val : v1) cout << val << " ";
    cout << endl;

    v1.insert(iter + 1, 5, 4);
    for(int val : v1) cout << val << " ";
    cout << endl;

    return 0;
}