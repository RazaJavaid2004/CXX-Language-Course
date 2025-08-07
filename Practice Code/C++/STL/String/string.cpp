// // The `<string>` header file in C++ provides a powerful and flexible way to manipulate strings. Here's a comprehensive list of some commonly used functions in the `std::string` class, along with examples for each:

// // ### 1. **Constructor Functions**
// // - **Default Constructor**: Creates an empty string.
// // - **Initialization Constructor**: Initializes a string with a specific value.
// // - **Copy Constructor**: Creates a copy of another string.
// // - **Substring Constructor**: Initializes a string with a substring of another string.
// // - **Fill Constructor**: Initializes a string with multiple copies of a character.

// // ### Examples:
// // ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1;  // Default constructor
//     string str2("Hello");  // Initialization constructor
//     string str3(str2);  // Copy constructor
//     string str4(str2, 1, 3);  // Substring constructor: "ell"
//     string str5(5, 'A');  // Fill constructor: "AAAAA"

//     return 0;
// }
// ```

// ### 2. **Assignment Functions**
// - **operator=**: Assigns a new value to the string.
// - **assign()**: Assigns a new value to the string.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     str = "Hello";  // operator=
//     str.assign("World");  // assign()

//     cout << str << endl;  // Output: World

//     return 0;
// }
// ```

// ### 3. **Concatenation Functions**
// - **operator+**: Concatenates two strings.
// - **operator+=**: Appends a string to the current string.
// - **append()**: Appends a string to the current string.

// // ### Examples:
// // ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1 = "Hello";
//     string str2 = "World";

//     string str3 = str1 + " " + str2;  // operator+
//     str1 += " " + str2;  // operator+=
//     str2.append(" Everyone");

//     cout << str1 << endl;  // Output: Hello World
//     cout << str3 << endl;  // Output: Hello World
//     cout << str2 << endl;  // Output: World Everyone

//     return 0;
// }
// ```

// ### 4. **Comparison Functions**
// - **operator==**: Checks if two strings are equal.
// - **operator!=**: Checks if two strings are not equal.
// - **operator<, operator<=, operator>, operator>=**: Lexicographical comparison.
// - **compare()**: Compares two strings.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1 = "Apple";
//     string str2 = "Banana";

//     if (str1 == "Apple") {
//         cout << "str1 is Apple" << endl;
//     }
//     if (str1 != str2) {
//         cout << "str1 is not Banana" << endl;
//     }
//     if (str1 < str2) {
//         cout << "str1 is less than str2" << endl;
//     }
//     int result = str1.compare(str2);
//     if (result < 0) {
//         cout << "str1 is less than str2" << endl;
//     }

//     return 0;
// }
// ```

// ### 5. **Element Access Functions**
// - **operator[]**: Accesses characters via the subscript operator.
// - **at()**: Accesses characters with bounds checking.
// - **front()**: Returns a reference to the first character.
// - **back()**: Returns a reference to the last character.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";

//     cout << str[1] << endl;  // Output: e
//     cout << str.at(1) << endl;  // Output: e
//     cout << str.front() << endl;  // Output: H
//     cout << str.back() << endl;  // Output: o

//     return 0;
// }
// ```

// ### 6. **Modifier Functions**
// - **insert()**: Inserts characters into the string.
// - **erase()**: Erases characters from the string.
// - **replace()**: Replaces characters in the string.
// - **clear()**: Clears the contents of the string.
// - **push_back()**: Adds a character to the end.
// - **pop_back()**: Removes the last character.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";

//     str.insert(1, "ey");  // str: "Heyello"
//     str.erase(1, 2);  // str: "Hello"
//     str.replace(1, 2, "i");  // str: "Hillo"
//     str.push_back('!');
//     str.pop_back();

//     cout << str << endl;  // Output: Hillo

//     str.clear();
//     cout << "String after clear: " << str << endl;  // Output: String after clear: 

//     return 0;
// }
// ```

// ### 7. **Search Functions**
// - **find()**: Finds the first occurrence of a substring.
// - **rfind()**: Finds the last occurrence of a substring.
// - **find_first_of()**: Finds the first occurrence of any character from a set.
// - **find_last_of()**: Finds the last occurrence of any character from a set.
// - **find_first_not_of()**: Finds the first occurrence of a character not in a set.
// - **find_last_not_of()**: Finds the last occurrence of a character not in a set.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello, World!";

//     size_t pos = str.find("World");
//     cout << "Position of 'World': " << pos << endl;

//     pos = str.rfind('o');
//     cout << "Last position of 'o': " << pos << endl;

//     pos = str.find_first_of("aeiou");
//     cout << "First vowel position: " << pos << endl;

//     pos = str.find_last_of("aeiou");
//     cout << "Last vowel position: " << pos << endl;

//     pos = str.find_first_not_of("Hello, ");
//     cout << "First character not in 'Hello, ': " << pos << endl;

//     pos = str.find_last_not_of("! ");
//     cout << "Last character not in '! ': " << pos << endl;

//     return 0;
// }
// ```

// ### 8. **Substring Functions**
// - **substr()**: Returns a substring.

// ### Example:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello, World!";
//     string sub = str.substr(7, 5);

//     cout << "Substring: " << sub << endl;  // Output: World

//     return 0;
// }
// ```

// ### 9. **Conversion Functions**
// - **to_string()**: Converts various types to a string.

// ### Example:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num = 123;
//     string str = to_string(num);

//     cout << "String: " << str << endl;  // Output: 123

//     return 0;
// }
// ```

// ### 10. **Other Utility Functions**
// - **length()**: Returns the length of the string.
// - **size()**: Returns the size of the string.
// - **empty()**: Checks if the string is empty.
// - **c_str()**: Returns a C-style string (null-terminated).
// - **data()**: Returns a pointer to the internal character array.
// - **copy()**: Copies a substring into a character array.

// ### Examples:
// ```cpp
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello, World!";

//     cout << "Length: " << str.length() << endl;
//     cout << "Size: " << str.size() << endl;
//     cout << "Is empty: " << (str.empty() ? "Yes" : "No") << endl;
//     cout << "C-String: " << str.c_str() << endl;

//     char buffer[20];
//     str.copy(buffer, 5);
//     buffer[5] = '\0';  // Null-terminate the copied string
//     cout << "Copied string: " << buffer << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `std::string` class in C++. If you need more details or have specific questions about any functions, feel free to ask!