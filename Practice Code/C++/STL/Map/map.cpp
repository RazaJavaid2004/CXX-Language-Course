// The `<map>` header file in C++ provides the `std::map` container, which is an associative container that stores key-value pairs with unique keys in a sorted order. Here's a comprehensive list of the commonly used functions in the `std::map` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty map.
// - **Range Constructor**: Creates a map with elements from another container.
// - **Copy Constructor**: Creates a map by copying another map.
// - **Initializer List Constructor**: Creates a map with an initializer list.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m1;  // Default constructor

//     pair<int, string> arr[] = { {1, "one"}, {2, "two"}, {3, "three"} };
//     map<int, string> m2(arr, arr + 3);  // Range constructor

//     map<int, string> m3(m2);  // Copy constructor

//     map<int, string> m4 = { {4, "four"}, {5, "five"}, {6, "six"} };  // Initializer list constructor

//     return 0;
// }
// ```

// ### 2. **Insertion Functions**
// - **insert()**: Inserts elements into the map.
// - **emplace()**: Constructs and inserts elements into the map.
// - **emplace_hint()**: Constructs and inserts elements with a hint.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m;

//     m.insert(pair<int, string>(1, "one"));
//     m.insert({2, "two"});
//     m.emplace(3, "three");
//     m.emplace_hint(m.begin(), 4, "four");

//     cout << "Elements in map: ";
//     for (const auto& p : m) {
//         cout << "{" << p.first << ", " << p.second << "} ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 3. **Deletion Functions**
// - **erase()**: Removes elements from the map.
// - **clear()**: Removes all elements from the map.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m = { {1, "one"}, {2, "two"}, {3, "three"} };

//     m.erase(2);  // Erase element with key 2
//     m.erase(m.begin());  // Erase first element

//     cout << "Elements in map after erasure: ";
//     for (const auto& p : m) {
//         cout << "{" << p.first << ", " << p.second << "} ";
//     }
//     cout << endl;

//     m.clear();  // Clear all elements
//     cout << "Map size after clear: " << m.size() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **operator[]**: Accesses or inserts elements.
// - **at()**: Accesses elements with bounds checking.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m;
//     m[1] = "one";
//     m[2] = "two";
//     m[3] = "three";

//     cout << "Element with key 2: " << m[2] << endl;
//     cout << "Element with key 3: " << m.at(3) << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the map is empty.
// - **size()**: Returns the number of elements in the map.
// - **max_size()**: Returns the maximum number of elements the map can hold.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m = { {1, "one"}, {2, "two"}, {3, "three"} };

//     cout << "Is map empty? " << (m.empty() ? "Yes" : "No") << endl;
//     cout << "Map size: " << m.size() << endl;
//     cout << "Map max size: " << m.max_size() << endl;

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
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m = { {1, "one"}, {2, "two"}, {3, "three"} };

//     cout << "Elements in map (forward): ";
//     for (auto it = m.begin(); it != m.end(); ++it) {
//         cout << "{" << it->first << ", " << it->second << "} ";
//     }
//     cout << endl;

//     cout << "Elements in map (reverse): ";
//     for (auto rit = m.rbegin(); rit != m.rend(); ++rit) {
//         cout << "{" << rit->first << ", " << rit->second << "} ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 7. **Comparison Functions**
// - **operator==**: Checks if two maps are equal.
// - **operator!=**: Checks if two maps are not equal.
// - **operator<, operator<=, operator>, operator>=**: Lexicographical comparison.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m1 = { {1, "one"}, {2, "two"}, {3, "three"} };
//     map<int, string> m2 = { {1, "one"}, {2, "two"}, {3, "three"} };
//     map<int, string> m3 = { {4, "four"}, {5, "five"}, {6, "six"} };

//     cout << "m1 == m2: " << (m1 == m2) << endl;
//     cout << "m1 != m3: " << (m1 != m3) << endl;
//     cout << "m1 < m3: " << (m1 < m3) << endl;

//     return 0;
// }
// ```

// ### 8. **Other Utility Functions**
// - **swap()**: Swaps the contents of two maps.
// - **key_comp()**: Returns the comparison object used to order the keys.
// - **value_comp()**: Returns the comparison object used to order the values.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m1 = { {1, "one"}, {2, "two"}, {3, "three"} };
//     map<int, string> m2 = { {4, "four"}, {5, "five"}, {6, "six"} };

//     m1.swap(m2);
//     cout << "Elements in m1 after swap: ";
//     for (const auto& p : m1) {
//         cout << "{" << p.first << ", " << p.second << "} ";
//     }
//     cout << endl;

//     auto comp = m1.key_comp();
//     if (comp(1, 2)) {
//         cout << "Key 1 is less than key 2" << endl;
//     }

//     return 0;
// }
// ```

// ### 9. **Operations**
// - **find()**: Finds an element with a specific key.
// - **count()**: Returns the number of elements with a specific key.
// - **lower_bound()**: Returns an iterator to the first element not less than the given key.
// - **upper_bound()**: Returns an iterator to the first element greater than the given key.
// - **equal_range()**: Returns the range of elements matching a specific key.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m = { {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"} };

//     auto it = m.find(3);
//     if (it != m.end()) {
//         cout << "Element with key 3 found: " << it->second << endl;
//     }

//     cout << "Count of elements with key 3: " << m.count(3) << endl;

//     auto lb = m.lower_bound(3);
//     auto ub = m.upper_bound(3);
//     cout << "Lower bound of 3: " << lb->second << endl;
//     cout << "Upper bound of 3: " << ub->second << endl;

//     auto range = m.equal_range(3);
//     cout << "Elements in range for key 3: ";
//     for (auto it = range.first; it != range.second; ++it) {
//         cout << "{" << it->first << ", " << it->second << "} ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::map` class in the `<map>` header file in C++. If you need more details or have specific questions about any functions, feel free to