#include <iostream>
using namespace std;

template <typename T>
class MyContainer {
    T element;
    public:
    MyContainer(T e) : element(e) {}
    void increase() {
        element++;
    }
    void display() const {
        cout << "Element: " << element << endl;
    }
    void setElement(T e) {
        element = e;
    }
    T getElement() const {
        return element;
    }
};

template <>
class MyContainer <char> {
    char element;
    public:
    MyContainer(char e) : element(e) {}
    void uppercase() {
        if(element >= 'a' && element <= 'z') {
            element -= 32;
        }
    }
    void display() const {
        cout << "Element: " << element << endl;
    }
    void setElement(char e) {
        element = e;
    }
    char getElement() const {
        return element;
    }
};

int main() {
    MyContainer<int> intContainer(10);
    intContainer.increase();
    intContainer.display();

    MyContainer<double> doubleContainer(3.5);
    doubleContainer.increase();
    doubleContainer.display();

    MyContainer<char> charContainer('b');
    charContainer.uppercase();
    charContainer.display();

    return 0;
}