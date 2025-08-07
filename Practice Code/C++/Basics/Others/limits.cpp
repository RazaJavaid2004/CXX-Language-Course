// The `<limits>` header in C++ provides information about the properties of fundamental types, such as the maximum and minimum values they can hold, their precision, and their range. It is particularly useful for writing portable code that needs to know the limitations of the different data types. Here’s a comprehensive list of commonly used functions and members from the `<limits>` header, along with examples for each:

// ### 1. **std::numeric_limits**

// #### `min()`
// Returns the minimum finite value of the type.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Minimum int value: " << numeric_limits<int>::min() << endl;
//     cout << "Minimum double value: " << numeric_limits<double>::min() << endl;

//     return 0;
// }
// ```

// #### `max()`
// Returns the maximum finite value of the type.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Maximum int value: " << numeric_limits<int>::max() << endl;
//     cout << "Maximum double value: " << numeric_limits<double>::max() << endl;

//     return 0;
// }
// ```

// #### `lowest()`
// Returns the lowest finite value of the type.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Lowest float value: " << numeric_limits<float>::lowest() << endl;

//     return 0;
// }
// ```

// #### `epsilon()`
// Returns the machine epsilon, which is the difference between 1 and the least value greater than 1 that is representable.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Epsilon for float: " << numeric_limits<float>::epsilon() << endl;
//     cout << "Epsilon for double: " << numeric_limits<double>::epsilon() << endl;

//     return 0;
// }
// ```

// #### `infinity()`
// Returns the positive infinity value.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Positive infinity for float: " << numeric_limits<float>::infinity() << endl;

//     return 0;
// }
// ```

// #### `quiet_NaN()`
// Returns a quiet Not-a-Number (NaN) value.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Quiet NaN for double: " << numeric_limits<double>::quiet_NaN() << endl;

//     return 0;
// }
// ```

// #### `digits()`
// Returns the number of digits (in base 2) that can be represented without change.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Digits in int: " << numeric_limits<int>::digits << endl;
//     cout << "Digits in double: " << numeric_limits<double>::digits << endl;

//     return 0;
// }
// ```

// #### `digits10()`
// Returns the number of decimal digits that can be represented without change.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Decimal digits in int: " << numeric_limits<int>::digits10 << endl;
//     cout << "Decimal digits in double: " << numeric_limits<double>::digits10 << endl;

//     return 0;
// }
// ```

// #### `is_signed`
// Returns whether the type is signed.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Is int signed? " << (numeric_limits<int>::is_signed ? "Yes" : "No") << endl;
//     cout << "Is unsigned int signed? " << (numeric_limits<unsigned int>::is_signed ? "Yes" : "No") << endl;

//     return 0;
// }
// ```

// #### `is_integer`
// Returns whether the type is an integer type.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Is int an integer? " << (numeric_limits<int>::is_integer ? "Yes" : "No") << endl;
//     cout << "Is double an integer? " << (numeric_limits<double>::is_integer ? "Yes" : "No") << endl;

//     return 0;
// }
// ```

// #### `is_exact`
// Returns whether the type is exact.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Is int exact? " << (numeric_limits<int>::is_exact ? "Yes" : "No") << endl;
//     cout << "Is float exact? " << (numeric_limits<float>::is_exact ? "Yes" : "No") << endl;

//     return 0;
// }
// ```

// #### `has_infinity`
// Returns whether the type supports infinity.
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Does float have infinity? " << (numeric_limits<float>::has_infinity ? "Yes" : "No") << endl;
//     cout << "Does int have infinity? " << (numeric_limits<int>::has_infinity ? "Yes" : "No") << endl;

//     return 0;
// }
// ```

// #### `has_quiet_NaN`
// Returns whether the type supports quiet NaN (Not-a-Number).
// ```cpp
// #include <iostream>
// #include <limits>
// using namespace std;

// int main() {
//     cout << "Does double have quiet NaN? " << (numeric_limits<double>::has_quiet_NaN ? "Yes" : "No") << endl;

//     return 0;
// }
// ```

// ### Summary

// The `<limits>` header provides a way to query various properties of fundamental types, such as their range, precision, and special values like infinity and NaN. Here are some of the key functions and properties provided by `std::numeric_limits`:

// - `min()`, `max()`, `lowest()`
// - `epsilon()`, `infinity()`, `quiet_NaN()`
// - `digits`, `digits10`
// - `is_signed`, `is_integer`, `is_exact`
// - `has_infinity`, `has_quiet_NaN`

// These examples demonstrate how you can use these functions to obtain detailed information about the characteristics of different data types.

// If you have any specific questions or need more examples, feel free to ask!