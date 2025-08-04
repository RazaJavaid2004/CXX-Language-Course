// The `<set>` header file in C++ provides the `std::set` container, which is an associative container that contains a sorted set of unique objects. Here are some commonly used functions from the `std::set` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty set.
// - **Range Constructor**: Creates a set with elements from another container.
// - **Copy Constructor**: Creates a set by copying another set.
// - **Initializer List Constructor**: Creates a set with an initializer list.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s1;  // Default constructor

//     int arr[] = {1, 2, 3, 4, 5};
//     set<int> s2(arr, arr + 5);  // Range constructor

//     set<int> s3(s2);  // Copy constructor

//     set<int> s4 = {6, 7, 8, 9, 10};  // Initializer list constructor

//     return 0;
// }
// ```

// ### 2. **Insertion Functions**
// - **insert()**: Inserts elements into the set.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);

//     cout << "Elements in set: ";
//     for (int n : s) {
//         cout << n << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 3. **Deletion Functions**
// - **erase()**: Removes elements from the set.
// - **clear()**: Removes all elements from the set.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {1, 2, 3, 4, 5};

//     s.erase(3);  // Erase element with value 3
//     s.erase(s.begin());  // Erase first element

//     cout << "Elements in set after erasure: ";
//     for (int n : s) {
//         cout << n << " ";
//     }
//     cout << endl;

//     s.clear();  // Clear all elements
//     cout << "Set size after clear: " << s.size() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **find()**: Finds an element in the set.
// - **count()**: Counts the occurrences of an element in the set.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {1, 2, 3, 4, 5};

//     auto it = s.find(3);
//     if (it != s.end()) {
//         cout << "Element 3 found in set." << endl;
//     } else {
//         cout << "Element 3 not found in set." << endl;
//     }

//     cout << "Count of element 3: " << s.count(3) << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the set is empty.
// - **size()**: Returns the number of elements in the set.
// - **max_size()**: Returns the maximum number of elements the set can hold.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {1, 2, 3};

//     cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;
//     cout << "Set size: " << s.size() << endl;
//     cout << "Set max size: " << s.max_size() << endl;

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
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {1, 2, 3, 4, 5};

//     cout << "Elements in set (forward): ";
//     for (auto it = s.begin(); it != s.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     cout << "Elements in set (reverse): ";
//     for (auto rit = s.rbegin(); rit != s.rend(); ++rit) {
//         cout << *rit << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 7. **Comparison Functions**
// - **operator==**: Checks if two sets are equal.
// - **operator!=**: Checks if two sets are not equal.
// - **operator<, operator<=, operator>, operator>=**: Lexicographical comparison.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s1 = {1, 2, 3};
//     set<int> s2 = {1, 2, 3};
//     set<int> s3 = {4, 5, 6};

//     cout << "s1 == s2: " << (s1 == s2) << endl;
//     cout << "s1 != s3: " << (s1 != s3) << endl;
//     cout << "s1 < s3: " << (s1 < s3) << endl;

//     return 0;
// }
// ```

// ### 8. **Other Utility Functions**
// - **swap()**: Swaps the contents of two sets.
// - **key_comp()**: Returns the comparison object used to order the keys.
// - **value_comp()**: Returns the comparison object used to order the values.
// - **emplace()**: Inserts a new element into the set.
// - **emplace_hint()**: Inserts a new element with a hint.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s1 = {1, 2, 3};
//     set<int> s2 = {4, 5, 6};

//     s1.swap(s2);
//     cout << "Elements in s1 after swap: ";
//     for (int n : s1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     auto comp = s1.key_comp();
//     if (comp(1, 2)) {
//         cout << "1 is less than 2" << endl;
//     }

//     s1.emplace(7);
//     s1.emplace_hint(s1.begin(), 0);
//     cout << "Elements in s1 after emplace: ";
//     for (int n : s1) {
//         cout << n << " ";
//     }
//     // cout << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::set` class in the `<set>` header file in C++. If you need more details or have specific questions about any functions, feel free to ask!