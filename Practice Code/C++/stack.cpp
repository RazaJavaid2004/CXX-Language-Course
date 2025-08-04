// The `<stack>` header file in C++ provides the `std::stack` container adaptor, which is a LIFO (Last In, First Out) data structure. The `std::stack` uses another container (like `std::deque` or `std::vector`) to store its elements. Here's a comprehensive list of commonly used functions in the `std::stack` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty stack.
// - **Copy Constructor**: Creates a stack by copying another stack.
// - **Move Constructor**: Moves a stack.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s1;  // Default constructor

//     stack<int> s2(s1);  // Copy constructor

//     stack<int> s3(move(s2));  // Move constructor

//     return 0;
// }
// ```

// ### 2. **Insertion Functions**
// - **push()**: Adds an element to the top of the stack.
// - **emplace()**: Constructs and inserts an element at the top.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.emplace(40);  // Constructs element in place

//     cout << "Top element: " << s.top() << endl;

//     return 0;
// }
// ```

// ### 3. **Deletion Functions**
// - **pop()**: Removes the top element.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.pop();  // Removes the top element (30)

//     cout << "Top element after pop: " << s.top() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **top()**: Returns a reference to the top element.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     cout << "Top element: " << s.top() << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the stack is empty.
// - **size()**: Returns the number of elements in the stack.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
//     cout << "Stack size: " << s.size() << endl;

//     return 0;
// }
// ```

// ### 6. **Swap Function**
// - **swap()**: Exchanges the contents of two stacks.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s1;
//     s1.push(10);
//     s1.push(20);

//     stack<int> s2;
//     s2.push(30);
//     s2.push(40);

//     s1.swap(s2);

//     cout << "Top element of s1 after swap: " << s1.top() << endl;
//     cout << "Top element of s2 after swap: " << s2.top() << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::stack` class in the `<stack>` header file in C++. If you need more details or have specific questions about any functions, feel free to ask!