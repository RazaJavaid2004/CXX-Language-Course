#include <iostream>
using namespace std;

class complex {
    int a;
    int b;
    public:
    complex();
    complex(int v1);
    complex(int v1, int v2);
    void disValue();
};

complex :: complex() {
    a = 0;
    b = 0;
};

complex :: complex(int v1) {
    a = v1;
    b = 0;
}

complex :: complex (int v1, int v2) {
    a = v1;
    b = v2;
}

void complex :: disValue() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int main() {
    complex c1;
    c1.disValue();

    complex c2(3);
    c2.disValue();

    complex c3(4, 6);
    c3.disValue();

    return 0;
}