// The `<functional>` header file in C++ provides a variety of utilities related to function objects, also known as functors. It includes standard function object classes, support for callable objects, and more. Here's a comprehensive list of commonly used components from the `<functional>` header, along with examples for each:

// ### 1. **Function Objects**

// #### `std::plus`
// Performs addition.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     plus<int> add;
//     cout << "10 + 20 = " << add(10, 20) << endl;
//     return 0;
// }
// ```

// #### `std::minus`
// Performs subtraction.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     minus<int> subtract;
//     cout << "20 - 10 = " << subtract(20, 10) << endl;
//     return 0;
// }
// ```

// #### `std::multiplies`
// Performs multiplication.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     multiplies<int> multiply;
//     cout << "10 * 20 = " << multiply(10, 20) << endl;
//     return 0;
// }
// ```

// #### `std::divides`
// Performs division.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     divides<int> divide;
//     cout << "20 / 10 = " << divide(20, 10) << endl;
//     return 0;
// }
// ```

// #### `std::modulus`
// Performs modulus operation.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     modulus<int> mod;
//     cout << "20 % 7 = " << mod(20, 7) << endl;
//     return 0;
// }
// ```

// #### `std::negate`
// Performs negation.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     negate<int> negate;
//     cout << "Negation of 10 = " << negate(10) << endl;
//     return 0;
// }
// ```

// ### 2. **Comparison Function Objects**

// #### `std::equal_to`
// Checks if two values are equal.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     equal_to<int> equal;
//     cout << "10 == 20: " << equal(10, 20) << endl;
//     cout << "10 == 10: " << equal(10, 10) << endl;
//     return 0;
// }
// ```

// #### `std::not_equal_to`
// Checks if two values are not equal.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     not_equal_to<int> not_equal;
//     cout << "10 != 20: " << not_equal(10, 20) << endl;
//     cout << "10 != 10: " << not_equal(10, 10) << endl;
//     return 0;
// }
// ```

// #### `std::greater`
// Checks if the first value is greater than the second.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     greater<int> greater_than;
//     cout << "20 > 10: " << greater_than(20, 10) << endl;
//     cout << "10 > 20: " << greater_than(10, 20) << endl;
//     return 0;
// }
// ```

// #### `std::less`
// Checks if the first value is less than the second.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     less<int> less_than;
//     cout << "10 < 20: " << less_than(10, 20) << endl;
//     cout << "20 < 10: " << less_than(20, 10) << endl;
//     return 0;
// }
// ```

// #### `std::greater_equal`
// Checks if the first value is greater than or equal to the second.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     greater_equal<int> greater_equal;
//     cout << "20 >= 10: " << greater_equal(20, 10) << endl;
//     cout << "10 >= 10: " << greater_equal(10, 10) << endl;
//     return 0;
// }
// ```

// #### `std::less_equal`
// Checks if the first value is less than or equal to the second.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     less_equal<int> less_equal;
//     cout << "10 <= 20: " << less_equal(10, 20) << endl;
//     cout << "10 <= 10: " << less_equal(10, 10) << endl;
//     return 0;
// }
// ```

// ### 3. **Logical Function Objects**

// #### `std::logical_and`
// Performs logical AND.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     logical_and<bool> logicalAnd;
//     cout << "true && false: " << logicalAnd(true, false) << endl;
//     cout << "true && true: " << logicalAnd(true, true) << endl;
//     return 0;
// }
// ```

// #### `std::logical_or`
// Performs logical OR.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     logical_or<bool> logicalOr;
//     cout << "true || false: " << logicalOr(true, false) << endl;
//     cout << "true || true: " << logicalOr(true, true) << endl;
//     return 0;
// }
// ```

// #### `std::logical_not`
// Performs logical NOT.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int main() {
//     logical_not<bool> logicalNot;
//     cout << "!true: " << logicalNot(true) << endl;
//     cout << "!false: " << logicalNot(false) << endl;
//     return 0;
// }
// ```

// ### 4. **Function Wrappers**

// #### `std::function`
// General-purpose polymorphic function wrapper.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     function<int(int, int)> func = add;
//     cout << "10 + 20 = " << func(10, 20) << endl;
//     return 0;
// }
// ```

// #### `std::bind`
// Creates a function object that binds arguments to a function.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     auto bindAdd = bind(add, placeholders::_1, 10);
//     cout << "bindAdd(20): " << bindAdd(20) << endl;
//     return 0;
// }
// ```

// ### 5. **Memory Functions**

// #### `std::mem_fn`
// Creates a function object from a pointer to a member function.
// ```cpp
// #include <iostream>
// #include <functional>
// using namespace std;

// struct MyStruct {
//     void display(int a) {
//         cout << "Value: " << a << endl;
//     }
// };

// int main() {
//     MyStruct obj;
//     auto func = mem_fn(&MyStruct::display);
//     func(&obj, 10);
//     return 0;
// }
// ```

// ### Summary
// The `<functional>` header provides a variety of tools for working with function objects, including arithmetic, comparison, and logical function objects, as well as utilities like `std::function`, `std::bind`, and `std::mem_fn`.

// These examples demonstrate how you can use these tools in your programs. If you have any specific questions or need more examples, feel free to ask!