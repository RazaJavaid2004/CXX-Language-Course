// The `<unordered_map>` header file in C++ provides the `std::unordered_map` container, which is an associative container that stores key-value pairs with unique keys. The elements are stored in no particular order and are accessed using a hash table. Here’s a comprehensive list of commonly used functions in the `std::unordered_map` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty unordered map.
// - **Range Constructor**: Creates an unordered map with elements from another container.
// - **Copy Constructor**: Creates an unordered map by copying another unordered map.
// - **Move Constructor**: Moves an unordered map.
// - **Initializer List Constructor**: Creates an unordered map with an initializer list.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um1;  // Default constructor

//     pair<int, string> arr[] = { {1, "one"}, {2, "two"}, {3, "three"} };
//     unordered_map<int, string> um2(arr, arr + 3);  // Range constructor

//     unordered_map<int, string> um3(um2);  // Copy constructor

//     unordered_map<int, string> um4(move(um3));  // Move constructor

//     unordered_map<int, string> um5 = { {4, "four"}, {5, "five"}, {6, "six"} };  // Initializer list constructor

//     return 0;
// }
// ```

// ### 2. **Insertion Functions**
// - **insert()**: Inserts elements into the unordered map.
// - **emplace()**: Constructs and inserts elements into the unordered map.
// - **emplace_hint()**: Constructs and inserts elements with a hint.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um;

//     um.insert(pair<int, string>(1, "one"));
//     um.insert({2, "two"});
//     um.emplace(3, "three");
//     um.emplace_hint(um.begin(), 4, "four");

//     cout << "Elements in unordered map: ";
//     for (const auto& p : um) {
//         cout << "{" << p.first << ", " << p.second << "} ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 3. **Deletion Functions**
// - **erase()**: Removes elements from the unordered map.
// - **clear()**: Removes all elements from the unordered map.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um = { {1, "one"}, {2, "two"}, {3, "three"} };

//     um.erase(2);  // Erase element with key 2
//     um.erase(um.begin());  // Erase first element

//     cout << "Elements in unordered map after erasure: ";
//     for (const auto& p : um) {
//         cout << "{" << p.first << ", " << p.second << "} ";
//     }
//     cout << endl;

//     um.clear();  // Clear all elements
//     cout << "Unordered map size after clear: " << um.size() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **operator[]**: Accesses or inserts elements.
// - **at()**: Accesses elements with bounds checking.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um;
//     um[1] = "one";
//     um[2] = "two";
//     um[3] = "three";

//     cout << "Element with key 2: " << um[2] << endl;
//     cout << "Element with key 3: " << um.at(3) << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the unordered map is empty.
// - **size()**: Returns the number of elements in the unordered map.
// - **max_size()**: Returns the maximum number of elements the unordered map can hold.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um = { {1, "one"}, {2, "two"}, {3, "three"} };

//     cout << "Is unordered map empty? " << (um.empty() ? "Yes" : "No") << endl;
//     cout << "Unordered map size: " << um.size() << endl;
//     cout << "Unordered map max size: " << um.max_size() << endl;

//     return 0;
// }
// ```

// ### 6. **Iterator Functions**
// - **begin()**: Returns an iterator to the beginning.
// - **end()**: Returns an iterator to the end.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um = { {1, "one"}, {2, "two"}, {3, "three"} };

//     cout << "Elements in unordered map: ";
//     for (auto it = um.begin(); it != um.end(); ++it) {
//         cout << "{" << it->first << ", " << it->second << "} ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 7. **Comparison Functions**
// - **operator==**: Checks if two unordered maps are equal.
// - **operator!=**: Checks if two unordered maps are not equal.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um1 = { {1, "one"}, {2, "two"}, {3, "three"} };
//     unordered_map<int, string> um2 = { {1, "one"}, {2, "two"}, {3, "three"} };
//     unordered_map<int, string> um3 = { {4, "four"}, {5, "five"}, {6, "six"} };

//     cout << "um1 == um2: " << (um1 == um2) << endl;
//     cout << "um1 != um3: " << (um1 != um3) << endl;

//     return 0;
// }
// ```

// ### 8. **Other Utility Functions**
// - **swap()**: Swaps the contents of two unordered maps.
// - **bucket_count()**: Returns the number of buckets.
// - **max_bucket_count()**: Returns the maximum number of buckets.
// - **load_factor()**: Returns the load factor.
// - **max_load_factor()**: Returns the maximum load factor.
// - **rehash()**: Rehashes the container.
// - **reserve()**: Reserves at least the specified number of buckets.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um1 = { {1, "one"}, {2, "two"}, {3, "three"} };
//     unordered_map<int, string> um2 = { {4, "four"}, {5, "five"}, {6, "six"} };

//     um1.swap(um2);
//     cout << "Elements in um1 after swap: ";
//     for (const auto& p : um1) {
//         cout << "{" << p.first << ", " << p.second << "} ";
//     }
//     cout << endl;

//     cout << "Number of buckets: " << um1.bucket_count() << endl;
//     cout << "Maximum number of buckets: " << um1.max_bucket_count() << endl;
//     cout << "Load factor: " << um1.load_factor() << endl;
//     cout << "Maximum load factor: " << um1.max_load_factor() << endl;

//     um1.rehash(10);
//     cout << "Number of buckets after rehash: " << um1.bucket_count() << endl;

//     um1.reserve(20);
//     cout << "Number of buckets after reserve: " << um1.bucket_count() << endl;

//     return 0;
// }
// ```

// ### 9. **Operations**
// - **find()**: Finds an element with a specific key.
// - **count()**: Returns the number of elements with a specific key.
// - **equal_range()**: Returns the range of elements matching a specific key.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int, string> um = { {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"} };

//     auto it = um.find(3);
//     if (it != um.end()) {
//         cout << "Element with key 3 found: " << it->second << endl;
//     }

//     cout << "Count of elements with key 3: " << um.count(3) << endl;

//     auto range = um.equal_range(3);
//     cout << "Elements in range for key 3: ";
//     for (auto it = range.first; it != range.second; ++it) {
//         cout << "{" << it->first << ", " << it->second << "} ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::unordered_map` class in the `<unordered_map>` header file in C++. If you need more