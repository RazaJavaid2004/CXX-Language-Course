#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> v1 = {3, 2, 1, 5};
    vector <int> v2 = {2, 3, 8, 7};
    vector <int> v3;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    v3.resize(v1.size() + v2.size());

    auto it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    v3.resize(it - v3.begin());

    for(const auto& val : v3) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}