#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> array = {2, 2, 1, 1, 5};
    
    sort(array.begin(), array.end());
    
    auto it = unique(array.begin(), array.end());

    // array.resize(it - array.begin());
    array.erase(it, array.end());

    for(const auto& val : array) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}