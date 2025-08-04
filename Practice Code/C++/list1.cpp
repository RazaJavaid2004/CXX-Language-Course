#include <iostream>
#include <list>
using namespace std;

template <class T>
void display(list <T> &lst) {
    list <int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list <int> list1;
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(5);
    list1.push_back(1);
    display(list1);

    list <int> list2;
    list2.push_back(7);
    list2.push_back(10);
    list2.push_back(9);
    list2.push_back(6);
    list2.push_back(8);
    display(list2);

    list1.sort();
    display(list1);

    list2.sort();
    display(list2);

    list1.merge(list2);
    display(list1);

    return 0;
}