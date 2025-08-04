#include <iostream>
using namespace std;

class num {
    int count = 0;
    public:
    num() {
        count++;
        cout << "This is the time when Constructor of this object is invoked" << endl;
    }
    ~num() {
        cout << "This is the time when Destructor of this object is invoked" << endl;
        count--;
    }
};

int main() {
    cout << "Entering the Main Function" << endl;
    cout << "Creating First Object" << endl;
    num n1;
    {
        cout << "Entering the Block" << endl;
        cout << "Creating Second Object" << endl;
        num n2;
        cout << "Exiting the Block" << endl;
    }
    cout << "Back to Main Function" << endl;
    cout << "Exiting the Main Function" << endl;
    return 0;
}