#include <iostream>
using namespace std;

class shop {
    int id;
    float price;
    public:
    void setData(int i, float p);
    void getData();
};

void shop :: setData(int i, float p) {
    id = i;
    price = p;
}

void shop :: getData() {
    cout << "Item ID: " << id << endl;
    cout << "Item Price: " << price << endl;
}

int main() {
    int size;
    cout << "Enter The Number of Items: ";
    cin >> size;

    int x;
    float y;

    shop* arr = new shop[size];

    for(int i = 0; i < size; i++) {
        cout << "Enter Details of Item No: " << i+1 << endl;
        cout << "Enter ID: " << endl;
        cin >> x;
        cout << "Enter Price: " << endl;
        cin >> y;
        (arr+i) -> setData(x, y);
    }

    for(int i = 0; i < size; i++) {
        cout << "Details of Item No: " << i+1 << endl;
        (arr+i) -> getData();
    }

    delete[] arr;

    return 0;
}