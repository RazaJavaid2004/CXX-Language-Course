// The `<deque>` (double-ended queue) header file in C++ provides the `std::deque` container, which is a sequence container that allows fast insertion and deletion at both the beginning and the end. Here's a comprehensive list of commonly used functions in the `std::deque` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty deque.
// - **Fill Constructor**: Creates a deque with a specified number of elements.
// - **Range Constructor**: Creates a deque with elements from another container.
// - **Copy Constructor**: Creates a deque by copying another deque.
// - **Initializer List Constructor**: Creates a deque with an initializer list.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d1;  // Default constructor

//     deque<int> d2(5, 100);  // Fill constructor

//     int arr[] = {1, 2, 3, 4, 5};
//     deque<int> d3(arr, arr + 5);  // Range constructor

//     deque<int> d4(d3);  // Copy constructor

//     deque<int> d5 = {6, 7, 8, 9, 10};  // Initializer list constructor

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
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d;

//     d.push_back(10);
//     d.push_front(20);
//     d.insert(d.begin(), 30);
//     d.emplace_back(40);
//     d.emplace_front(50);
//     d.emplace(next(d.begin()), 60);

//     cout << "Elements in deque: ";
//     for (int n : d) {
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
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d = {1, 2, 3, 4, 5};

//     d.pop_back();  // Remove last element
//     d.pop_front();  // Remove first element
//     d.erase(next(d.begin()));  // Remove second element

//     cout << "Elements in deque after erasure: ";
//     for (int n : d) {
//         cout << n << " ";
//     }
//     cout << endl;

//     d.clear();  // Clear all elements
//     cout << "Deque size after clear: " << d.size() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **front()**: Returns a reference to the first element.
// - **back()**: Returns a reference to the last element.
// - **operator[]**: Accesses elements via the subscript operator.
// - **at()**: Accesses elements with bounds checking.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d = {1, 2, 3, 4, 5};

//     cout << "First element: " << d.front() << endl;
//     cout << "Last element: " << d.back() << endl;
//     cout << "Element at index 2: " << d[2] << endl;
//     cout << "Element at index 3: " << d.at(3) << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the deque is empty.
// - **size()**: Returns the number of elements in the deque.
// - **max_size()**: Returns the maximum number of elements the deque can hold.
// - **resize()**: Resizes the container to contain a specified number of elements.
// - **shrink_to_fit()**: Reduces the capacity to fit its size.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d = {1, 2, 3};

//     cout << "Is deque empty? " << (d.empty() ? "Yes" : "No") << endl;
//     cout << "Deque size: " << d.size() << endl;
//     cout << "Deque max size: " << d.max_size() << endl;

//     d.resize(5);
//     cout << "Deque size after resize: " << d.size() << endl;

//     d.shrink_to_fit();
//     cout << "Deque size after shrink_to_fit: " << d.size() << endl;

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
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d = {1, 2, 3, 4, 5};

//     cout << "Elements in deque (forward): ";
//     for (auto it = d.begin(); it != d.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     cout << "Elements in deque (reverse): ";
//     for (auto rit = d.rbegin(); rit != d.rend(); ++rit) {
//         cout << *rit << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 7. **Comparison Functions**
// - **operator==**: Checks if two deques are equal.
// - **operator!=**: Checks if two deques are not equal.
// - **operator<, operator<=, operator>, operator>=**: Lexicographical comparison.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d1 = {1, 2, 3};
//     deque<int> d2 = {1, 2, 3};
//     deque<int> d3 = {4, 5, 6};

//     cout << "d1 == d2: " << (d1 == d2) << endl;
//     cout << "d1 != d3: " << (d1 != d3) << endl;
//     cout << "d1 < d3: " << (d1 < d3) << endl;

//     return 0;
// }
// ```

// ### 8. **Other Utility Functions**
// - **swap()**: Swaps the contents of two deques.
// - **assign()**: Assigns new contents to the deque, replacing its current contents.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d1 = {1, 2, 3};
//     deque<int> d2 = {4, 5, 6};

//     d1.swap(d2);
//     cout << "Elements in d1 after swap: ";
//     for (int n : d1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     d1.assign(5, 100);
//     cout << "Elements in d1 after assign: ";
//     for (int n : d1) {
//         cout << n << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::deque` class in the `<deque>` header file in C++. If you need more details or have specific questions about any functions, feel free to ask!