#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
    complex(int v1, int v2);
    void disValue();
};

complex :: complex(int v1 = 0, int v2 = 0) {
    a = v1;
    b = v2;
}

void complex :: disValue() {
    cout << "Complex Number: " << a << "+" << b << "i" << endl;
}

int main() {
    complex c1;
    c1.disValue();

    complex c2(1);
    c2.disValue();

    complex c3(3, 2);
    c3.disValue();
    
    return 0;
}