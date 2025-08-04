// The `<queue>` header file in C++ provides the `std::queue` container adaptor, which is a FIFO (First In, First Out) data structure. The `std::queue` uses another container (like `std::deque` or `std::list`) to store its elements. Here’s a comprehensive list of commonly used functions in the `std::queue` class, along with examples for each:

// ### 1. **Constructor Functions**
// - **Default Constructor**: Creates an empty queue.
// - **Copy Constructor**: Creates a queue by copying another queue.
// - **Move Constructor**: Moves a queue.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q1;  // Default constructor

//     queue<int> q2(q1);  // Copy constructor

//     queue<int> q3(move(q2));  // Move constructor

//     return 0;
// }
// ```

// ### 2. **Insertion Functions**
// - **push()**: Adds an element to the end of the queue.
// - **emplace()**: Constructs and inserts an element at the end.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.emplace(40);  // Emplace is similar to push but constructs the element in place

//     cout << "Front element: " << q.front() << endl;
//     cout << "Back element: " << q.back() << endl;

//     return 0;
// }
// ```

// ### 3. **Deletion Functions**
// - **pop()**: Removes the front element.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     q.pop();  // Remove the front element (10)

//     cout << "Front element after pop: " << q.front() << endl;

//     return 0;
// }
// ```

// ### 4. **Access Functions**
// - **front()**: Returns a reference to the front element.
// - **back()**: Returns a reference to the back element.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Front element: " << q.front() << endl;
//     cout << "Back element: " << q.back() << endl;

//     return 0;
// }
// ```

// ### 5. **Capacity Functions**
// - **empty()**: Checks if the queue is empty.
// - **size()**: Returns the number of elements in the queue.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;
//     cout << "Queue size: " << q.size() << endl;

//     return 0;
// }
// ```

// ### 6. **Swap Function**
// - **swap()**: Exchanges the contents of two queues.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q1;
//     q1.push(10);
//     q1.push(20);

//     queue<int> q2;
//     q2.push(30);
//     q2.push(40);

//     q1.swap(q2);

//     cout << "Front element of q1 after swap: " << q1.front() << endl;
//     cout << "Front element of q2 after swap: " << q2.front() << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::queue` class in the `<queue>` header file in C++. If you need more details or have specific questions about any functions, feel free to ask!