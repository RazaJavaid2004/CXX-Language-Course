// The `<list>` header file in C++ provides the `std::list` container, which is a doubly linked list. Here’s a comprehensive list of commonly used functions in the `std::list` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty list.
// - **Fill Constructor**: Creates a list with a specified number of elements.
// - **Range Constructor**: Creates a list with elements from another container.
// - **Copy Constructor**: Creates a list by copying another list.
// - **Initializer List Constructor**: Creates a list with an initializer list.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l1;  // Default constructor

//     list<int> l2(5, 100);  // Fill constructor

//     int arr[] = {1, 2, 3, 4, 5};
//     list<int> l3(arr, arr + 5);  // Range constructor

//     list<int> l4(l3);  // Copy constructor

//     list<int> l5 = {6, 7, 8, 9, 10};  // Initializer list constructor

//     return 0;
// }
// ```

// ### 2. **Insertion Functions**
// - **push_back()**: Adds an element to the end.
// - **push_front()**: Adds an element to the front.
// - **insert()**: Inserts elements at a specified position.
// - **emplace_back()**: Constructs and inserts an element at the end.
// - **emplace_front()**: Constructs and inserts an element at the front.
// - **emplace()**: Constructs and inserts elements at a specified position.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l;

//     l.push_back(10);
//     l.push_front(20);
//     l.insert(l.begin(), 30);
//     l.emplace_back(40);
//     l.emplace_front(50);
//     l.emplace(next(l.begin()), 60);

//     cout << "Elements in list: ";
//     for (int n : l) {
//         cout << n << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 3. **Deletion Functions**
// - **pop_back()**: Removes the last element.
// - **pop_front()**: Removes the first element.
// - **erase()**: Removes elements at a specified position or range.
// - **clear()**: Removes all elements.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l = {1, 2, 3, 4, 5};

//     l.pop_back();  // Remove last element
//     l.pop_front();  // Remove first element
//     l.erase(next(l.begin()));  // Remove second element

//     cout << "Elements in list after erasure: ";
//     for (int n : l) {
//         cout << n << " ";
//     }
//     cout << endl;

//     l.clear();  // Clear all elements
//     cout << "List size after clear: " << l.size() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **front()**: Returns a reference to the first element.
// - **back()**: Returns a reference to the last element.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l = {1, 2, 3, 4, 5};

//     cout << "First element: " << l.front() << endl;
//     cout << "Last element: " << l.back() << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the list is empty.
// - **size()**: Returns the number of elements in the list.
// - **max_size()**: Returns the maximum number of elements the list can hold.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l = {1, 2, 3};

//     cout << "Is list empty? " << (l.empty() ? "Yes" : "No") << endl;
//     cout << "List size: " << l.size() << endl;
//     cout << "List max size: " << l.max_size() << endl;

//     return 0;
// }
// ```

// ### 6. **Iterator Functions**
// - **begin()**: Returns an iterator to the beginning.
// - **end()**: Returns an iterator to the end.
// - **rbegin()**: Returns a reverse iterator to the reverse beginning.
// - **rend()**: Returns a reverse iterator to the reverse end.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l = {1, 2, 3, 4, 5};

//     cout << "Elements in list (forward): ";
//     for (auto it = l.begin(); it != l.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     cout << "Elements in list (reverse): ";
//     for (auto rit = l.rbegin(); rit != l.rend(); ++rit) {
//         cout << *rit << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 7. **Comparison Functions**
// - **operator==**: Checks if two lists are equal.
// - **operator!=**: Checks if two lists are not equal.
// - **operator<, operator<=, operator>, operator>=**: Lexicographical comparison.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l1 = {1, 2, 3};
//     list<int> l2 = {1, 2, 3};
//     list<int> l3 = {4, 5, 6};

//     cout << "l1 == l2: " << (l1 == l2) << endl;
//     cout << "l1 != l3: " << (l1 != l3) << endl;
//     cout << "l1 < l3: " << (l1 < l3) << endl;

//     return 0;
// }
// ```

// ### 8. **Other Utility Functions**
// - **swap()**: Swaps the contents of two lists.
// - **splice()**: Transfers elements from one list to another.
// - **merge()**: Merges two sorted lists into one.
// - **sort()**: Sorts the elements in the list.
// - **reverse()**: Reverses the order of elements.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l1 = {1, 2, 3};
//     list<int> l2 = {4, 5, 6};

//     l1.swap(l2);
//     cout << "Elements in l1 after swap: ";
//     for (int n : l1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     list<int> l3 = {7, 8, 9};
//     l1.splice(l1.begin(), l3);
//     cout << "Elements in l1 after splice: ";
//     for (int n : l1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     l1.sort();
//     cout << "Elements in l1 after sort: ";
//     for (int n : l1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     l1.reverse();
//     cout << "Elements in l1 after reverse: ";
//     for (int n : l1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// // These examples cover a wide range of functionalities provided by the `std::list` class in the `<list>` header file in C++. If you need more details or have specific questions about any functions, feel free to ask!