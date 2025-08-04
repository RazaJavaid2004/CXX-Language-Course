// The `<iomanip>` header file in C++ provides several functions and manipulators to format input and output. These manipulators can be used to control the appearance of both the input and output streams. Here are the main functions and manipulators provided by `<iomanip>` along with examples for each:

// ### 1. `setfill()`
// Sets the fill character.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setfill('*') << setw(10) << 123 << endl;
//     return 0;
// }
// ```

// ### 2. `setw()`
// Sets the width of the next input/output field.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setw(10) << 123 << endl;
//     return 0;
// }
// ```

// ### 3. `setprecision()`
// Sets the decimal precision of floating-point values.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setprecision(4) << 123.456789 << endl;
//     return 0;
// }
// ```

// ### 4. `fixed`
// Forces floating-point values to be output in fixed-point notation.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << fixed << setprecision(2) << 123.456789 << endl;
//     return 0;
// }
// ```

// ### 5. `scientific`
// Forces floating-point values to be output in scientific notation.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << scientific << setprecision(2) << 123.456789 << endl;
//     return 0;
// }
// ```

// ### 6. `left`
// Sets the adjustfield format flag to left.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << left << setw(10) << 123 << endl;
//     return 0;
// }
// ```

// ### 7. `right`
// Sets the adjustfield format flag to right.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << right << setw(10) << 123 << endl;
//     return 0;
// }
// ```

// ### 8. `boolalpha` and `noboolalpha`
// Controls the format flag for boolean values.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << boolalpha << true << " " << false << endl;
//     cout << noboolalpha << true << " " << false << endl;
//     return 0;
// }
// ```

// ### 9. `showpoint`
// Forces the output of the decimal point and trailing zeros.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << showpoint << setprecision(3) << 123.0 << endl;
//     return 0;
// }
// ```

// ### 10. `showpos`
// Shows the plus sign (+) for positive numbers.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << showpos << 123 << " " << -123 << endl;
//     return 0;
// }
// ```

// ### 11. `uppercase` and `nouppercase`
// Controls the case of alphabetic characters in floating-point and hexadecimal numbers.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << uppercase << hex << 255 << endl;
//     cout << nouppercase << hex << 255 << endl;
//     return 0;
// }
// ```

// ### 12. `hex`, `dec`, `oct`
// Sets the basefield format flag to hexadecimal, decimal, or octal.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << hex << 255 << endl;
//     cout << dec << 255 << endl;
//     cout << oct << 255 << endl;
//     return 0;
// }
// ```

// ### 13. `internal`
// Sets the adjustfield format flag to internal.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << internal << setw(10) << -123 << endl;
//     return 0;
// }
// ```

// ### 14. `resetiosflags` and `setiosflags`
// Sets or resets format flags.
// ```cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << 123.456 << endl;
//     cout << resetiosflags(ios::fixed | ios::showpoint) << 123.456 << endl;
//     return 0;
// }
// ```

// These are some of the most commonly used functions and manipulators provided by the `<iomanip>` header file in C++. These tools allow you to precisely control the format of your input and output, making your programs more robust and user-friendly. If you have any specific formatting tasks or need further explanations, feel free to ask!