#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    vector <int> marks(n);

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "value of subject " << i + 1 << " is: " << marks[i] << endl;
    }

    return 0;
}