#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass {
    T1 data1;
    T2 data2;
    public:
    myclass(T1 a, T2 b) {
        data1 = a;
        data2 = b;
    }
    void display() {
        cout << "Data1: " << data1 << endl;
        cout << "Data2: " << data2 << endl;
    }
};

int main() {
    myclass <int, char> obj(12, 'G');
    obj.display();
    return 0;
}