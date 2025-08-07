#include <iostream>
using namespace std;

template <class T1, class T2>
class average {
    T1 a;
    T2 b;
    public:
    average(T1 x, T2 y) {
        a = x;
        b = y;
        cout << "Average: " << (a+b) / 2;
    }
};

int main() {
    average <int, float> avg(3, 5.9);
    return 0;
}