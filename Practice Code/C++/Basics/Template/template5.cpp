#include <iostream>
using namespace std;

template <class T>
class Harry {
    T data;
    public:
    Harry(T a);
    void display();
};

template <class T>
Harry <T> :: Harry(T a) {
    data = a;
}

template <class T>
void Harry <T> :: display() {
    cout << "Data: " << data << endl;
}

int main() {
    Harry <string> dat("Harry Bhai");
    dat.display();
    return 0;
}