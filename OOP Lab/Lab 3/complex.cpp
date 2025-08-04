#include <iostream>
using namespace std;

class complex {
    int* real;
    int* img;
    public:
    complex(int r = 0, int i = 0) {
        real = new int(r);
        img = new int(i);
    }
    complex(const complex& obj) {
        real = new int(*obj.real);
        img = new int(*obj.img);
    }
    void setR(int r) {
        *real = r;
    }
    void setI(int i) {
        *img = i;
    }
    int getR() {
        return *real;
    }
    int getI() {
        return *img;
    }
    ~complex() {
        delete real;
        delete img;
    }
};

int main() {
    complex* c1 = new complex(3, 5);
    complex* c2 = new complex(*c1);

    cout << c1->getR() << "+" << c1->getI() << "i" << endl;
    cout << c2->getR() << "+" << c2->getI() << "i" << endl;

    delete c1;
    delete c2;

    return 0;
}