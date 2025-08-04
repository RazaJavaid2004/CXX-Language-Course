// The `<sstream>` header file in C++ provides string stream classes, which allow input and output operations on strings. The main classes provided by `<sstream>` are `std::stringstream`, `std::istringstream`, and `std::ostringstream`. Here's a comprehensive list of commonly used functions and classes from `<sstream>`, along with examples for each:

// ### 1. **String Stream Classes**

// #### `std::stringstream`
// This class allows both input and output operations on a string.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     stringstream ss;
//     ss << "Hello, World! " << 123 << " " << 45.67;

//     string str;
//     int num;
//     double dnum;

//     ss >> str >> num >> dnum;

//     cout << "String: " << str << endl;
//     cout << "Integer: " << num << endl;
//     cout << "Double: " << dnum << endl;

//     return 0;
// }
// ```

// #### `std::istringstream`
// This class allows input operations on a string.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     string data = "123 45.67 Hello";
//     istringstream iss(data);

//     int num;
//     double dnum;
//     string str;

//     iss >> num >> dnum >> str;

//     cout << "Integer: " << num << endl;
//     cout << "Double: " << dnum << endl;
//     cout << "String: " << str << endl;

//     return 0;
// }
// ```

// #### `std::ostringstream`
// This class allows output operations on a string.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     ostringstream oss;
//     oss << 123 << " " << 45.67 << " Hello";

//     string result = oss.str();
//     cout << "Output string: " << result << endl;

//     return 0;
// }
// ```

// ### 2. **Member Functions of String Stream Classes**

// #### `str()`
// Sets or gets the contents of the string stream.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     stringstream ss;
//     ss << "Hello, World!";
//     cout << "Current string: " << ss.str() << endl;

//     ss.str("New string content");
//     cout << "Updated string: " << ss.str() << endl;

//     return 0;
// }
// ```

// #### `clear()`
// Clears the string stream's error state flags.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     stringstream ss;
//     ss << "123";
//     int num;
//     ss >> num;
//     cout << "First read: " << num << endl;

//     ss.setstate(ios::failbit);  // Simulate an error
//     ss.clear();  // Clear the error state

//     ss.str("456");
//     ss >> num;
//     cout << "Second read: " << num << endl;

//     return 0;
// }
// ```

// #### `rdbuf()`
// Gets the underlying stream buffer.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     stringstream ss;
//     ss << "Hello, World!";
//     streambuf* pbuf = ss.rdbuf();

//     cout << "Buffer content: ";
//     cout << pbuf << endl;

//     return 0;
// }
// ```

// ### 3. **Manipulators**

// #### `ws`
// Skips whitespace characters.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     string data = "    123";
//     istringstream iss(data);

//     int num;
//     iss >> ws >> num;

//     cout << "Integer: " << num << endl;

//     return 0;
// }
// ```

// #### General Example: Using `stringstream` for Complex Input Parsing
// Here's an example that demonstrates how to use `std::stringstream` to parse a complex input string:
// ```cpp
// #include <iostream>
// #include <sstream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     string data = "1,2,3;4,5,6;7,8,9";
//     stringstream ss(data);
//     vector<vector<int>> matrix;
//     string row;

//     while (getline(ss, row, ';')) {
//         stringstream rowStream(row);
//         string cell;
//         vector<int> rowValues;

//         while (getline(rowStream, cell, ',')) {
//             rowValues.push_back(stoi(cell));
//         }

//         matrix.push_back(rowValues);
//     }

//     // Output the parsed matrix
//     for (const auto& row : matrix) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// ```

// ### Summary
// The `<sstream>` header file provides powerful tools for manipulating strings through the `std::stringstream`, `std::istringstream`, and `std::ostringstream` classes. By using these classes, you can perform complex string parsing and formatting tasks efficiently.

// If you have any specific questions or need more examples, feel free to ask!