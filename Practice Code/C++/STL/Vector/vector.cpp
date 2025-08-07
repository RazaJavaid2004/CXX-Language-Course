// // Certainly! The `<vector>` header file in C++ provides a wide array of functions to work with vectors. Here's a comprehensive list of some commonly used functions along with examples for each:

// // ### 1. **Constructor Functions**
// // - **Default Constructor**: Creates an empty vector.
// // - **Fill Constructor**: Creates a vector with a specified number of elements.
// // - **Range Constructor**: Creates a vector with elements from another container.
// // - **Copy Constructor**: Creates a vector by copying another vector.

// // ### Examples:
// // ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // Default Constructor
//     vector<int> vec1;

//     // Fill Constructor
//     vector<int> vec2(5, 10);  // Vector of 5 elements, each initialized to 10

//     // Range Constructor
//     int arr[] = {1, 2, 3, 4, 5};
//     vector<int> vec3(arr, arr + 5);

//     // Copy Constructor
//     vector<int> vec4(vec3);

//     return 0;
// }
// ```

// ### 2. **Capacity Functions**
// - `size()`: Returns the number of elements in the vector.
// - `max_size()`: Returns the maximum number of elements the vector can hold.
// - `capacity()`: Returns the size of the storage space currently allocated for the vector.
// - `empty()`: Checks if the vector is empty.
// - `reserve()`: Requests that the vector capacity be at least enough to contain n elements.
// - `shrink_to_fit()`: Reduces the capacity to fit its size.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << "Size: " << vec.size() << endl;
//     cout << "Max size: " << vec.max_size() << endl;
//     cout << "Capacity: " << vec.capacity() << endl;
//     cout << "Is empty: " << (vec.empty() ? "Yes" : "No") << endl;

//     vec.reserve(10);
//     cout << "Reserved capacity: " << vec.capacity() << endl;

//     vec.shrink_to_fit();
//     cout << "Shrink to fit capacity: " << vec.capacity() << endl;

//     return 0;
// }
// ```

// ### 3. **Element Access Functions**
// - `at()`: Returns a reference to the element at a specified position.
// - `[]`: Access elements via the subscript operator.
// - `front()`: Returns a reference to the first element.
// - `back()`: Returns a reference to the last element.
// - `data()`: Returns a direct pointer to the memory array used internally by the vector.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << "Element at index 2: " << vec.at(2) << endl;
//     cout << "Element at index 3: " << vec[3] << endl;
//     cout << "First element: " << vec.front() << endl;
//     cout << "Last element: " << vec.back() << endl;

//     int* ptr = vec.data();
//     cout << "First element using data(): " << *ptr << endl;
//     ptr++;
//     cout << "First element using data(): " << *ptr << endl;

//     return 0;
// }
// ```

// ### 4. **Modifier Functions**
// - `push_back()`: Adds an element to the end.
// - `pop_back()`: Removes the last element.
// - `insert()`: Inserts elements at the specified position.
// - `erase()`: Removes elements from the specified position.
// - `clear()`: Removes all elements.
// - `assign()`: Assigns new values to the vector elements.
// - `emplace_back()`: Constructs and inserts an element at the end.
// - `resize()`: Resizes the container to contain the specified number of elements.
// - `swap()`: Exchanges the contents of the container with those of another.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec;

//     vec.push_back(10);
//     vec.push_back(20);

//     vec.insert(vec.begin(), 5);  // Insert at the beginning
//     vec.emplace_back(30);  // Add at the end

//     vec.erase(vec.begin() + 1);  // Remove second element
//     vec.pop_back();  // Remove last element

//     vec.assign(3, 100);  // Assign new values

//     cout << "Elements: ";
//     for (int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     vec.resize(5);  // Resize to 5 elements

//     vector<int> vec2 = {1, 2, 3};
//     vec.swap(vec2);  // Swap with another vector

//     cout << "After swap, vec: ";
//     for (int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 5. **Iterator Functions**
// - `begin()`: Returns an iterator to the beginning.
// - `end()`: Returns an iterator to the end.
// - `rbegin()`: Returns a reverse iterator to the reverse beginning.
// - `rend()`: Returns a reverse iterator to the reverse end.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << "Elements: ";
//     for (auto it = vec.begin(); it != vec.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     cout << "Reverse elements: ";
//     for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
//         cout << *rit << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ```

// ### 6. **Comparison Operators**
// - `==`, `!=`, `<`, `<=`, `>`, `>=`: Compare vectors.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec1 = {1, 2, 3};
//     vector<int> vec2 = {1, 2, 3};
//     vector<int> vec3 = {4, 5, 6};

//     cout << "vec1 == vec2: " << (vec1 == vec2) << endl;
//     cout << "vec1 != vec3: " << (vec1 != vec3) << endl;
//     cout << "vec1 < vec3: " << (vec1 < vec3) << endl;

//     return 0;
// }
// ```

// This should give you a good overview of most of the common functionalities provided by the `vector` header file in C++. If you need further examples or have specific questions about any functions, feel free to ask!