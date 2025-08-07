#include <iostream>
using namespace std;

template <class T>
class vector {
    public:
    int size;
    T* arr;
    vector(int m) {
        size = m;
        arr = new T[size];
    }
    T dotProd(vector& v) {
        T d = 0;
        for(int i = 0; i < size; i++) {
            d += this -> arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    vector <float> v1(3);
    v1.arr[0] = 3.1;
    v1.arr[1] = 4.4;
    v1.arr[2] = 5.3;

    vector <float> v2(3);
    v2.arr[0] = 3.2;
    v2.arr[1] = 4.4;
    v2.arr[2] = 5.6;

    float a = v2.dotProd(v1);
    cout << "Dot Poduct: " << a << endl;

    return 0;
}