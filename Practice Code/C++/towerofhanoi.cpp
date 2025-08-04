#include <iostream>
using namespace std;

void towerofhanoi(int n, char src, char dest, char helper);

int main() {
    towerofhanoi(5, 'A', 'C', 'B');

    return 0;
}

void towerofhanoi(int n, char src, char dest, char helper) {
    if(n == 0) return;

    towerofhanoi(n-1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerofhanoi(n-1, helper, dest, src);
}