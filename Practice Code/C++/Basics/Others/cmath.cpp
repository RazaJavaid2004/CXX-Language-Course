// The `<cmath>` header in C++ provides a wide range of mathematical functions. Here’s a comprehensive list of some commonly used functions from `<cmath>`, along with examples for each:

// ### 1. **Basic Mathematical Functions**

// #### `abs()` / `fabs()`
// Returns the absolute value of an integer or a floating-point number.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int x = -5;
//     double y = -3.7;

//     cout << "abs(-5) = " << abs(x) << endl;
//     cout << "fabs(-3.7) = " << fabs(y) << endl;

//     return 0;
// }
// ```

// #### `ceil()`
// Returns the smallest integer greater than or equal to the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 3.7;

//     cout << "ceil(3.7) = " << ceil(x) << endl;

//     return 0;
// }
// ```

// #### `floor()`
// Returns the largest integer less than or equal to the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 3.7;

//     cout << "floor(3.7) = " << floor(x) << endl;

//     return 0;
// }
// ```

// #### `round()`
// Returns the nearest integer to the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 3.5;

//     cout << "round(3.5) = " << round(x) << endl;

//     return 0;
// }
// ```

// ### 2. **Exponential and Logarithmic Functions**

// #### `exp()`
// Returns the value of e raised to the power of the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "exp(1.0) = " << exp(x) << endl;

//     return 0;
// }
// ```

// #### `log()`
// Returns the natural logarithm (base e) of the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 2.71828;

//     cout << "log(2.71828) = " << log(x) << endl;

//     return 0;
// }
// ```

// #### `log10()`
// Returns the base-10 logarithm of the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 100.0;

//     cout << "log10(100.0) = " << log10(x) << endl;

//     return 0;
// }
// ```

// ### 3. **Power Functions**

// #### `pow()`
// Returns the value of the first argument raised to the power of the second argument.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double base = 2.0;
//     double exponent = 3.0;

//     cout << "pow(2.0, 3.0) = " << pow(base, exponent) << endl;

//     return 0;
// }
// ```

// #### `sqrt()`
// Returns the square root of the given value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 16.0;

//     cout << "sqrt(16.0) = " << sqrt(x) << endl;

//     return 0;
// }
// ```

// ### 4. **Trigonometric Functions**

// #### `sin()`
// Returns the sine of an angle (in radians).
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double angle = M_PI / 2;  // 90 degrees

//     cout << "sin(90 degrees) = " << sin(angle) << endl;

//     return 0;
// }
// ```

// #### `cos()`
// Returns the cosine of an angle (in radians).
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double angle = M_PI;  // 180 degrees

//     cout << "cos(180 degrees) = " << cos(angle) << endl;

//     return 0;
// }
// ```

// #### `tan()`
// Returns the tangent of an angle (in radians).
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double angle = M_PI / 4;  // 45 degrees

//     cout << "tan(45 degrees) = " << tan(angle) << endl;

//     return 0;
// }
// ```

// ### 5. **Inverse Trigonometric Functions**

// #### `asin()`
// Returns the arc sine of a value (in radians).
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "asin(1.0) = " << asin(x) << " radians" << endl;

//     return 0;
// }
// ```

// #### `acos()`
// Returns the arc cosine of a value (in radians).
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "acos(1.0) = " << acos(x) << " radians" << endl;

//     return 0;
// }
// ```

// #### `atan()`
// Returns the arc tangent of a value (in radians).
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "atan(1.0) = " << atan(x) << " radians" << endl;

//     return 0;
// }
// ```

// ### 6. **Hyperbolic Functions**

// #### `sinh()`
// Returns the hyperbolic sine of a value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "sinh(1.0) = " << sinh(x) << endl;

//     return 0;
// }
// ```

// #### `cosh()`
// Returns the hyperbolic cosine of a value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "cosh(1.0) = " << cosh(x) << endl;

//     return 0;
// }
// ```

// #### `tanh()`
// Returns the hyperbolic tangent of a value.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "tanh(1.0) = " << tanh(x) << endl;

//     return 0;
// }
// ```

// ### 7. **Rounding and Remainder Functions**

// #### `fmod()`
// Returns the remainder of the division of two floating-point numbers.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 5.3;
//     double y = 2.0;

//     cout << "fmod(5.3, 2.0) = " << fmod(x, y) << endl;

//     return 0;
// }
// ```

// #### `trunc()`
// Returns the integral part of a floating-point number, discarding the fractional part.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 5.7;

//     cout << "trunc(5.7) = " << trunc(x) << endl;

//     return 0;
// }
// ```

// #### `remainder()`
// Computes the remainder of the division operation.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 5.3;
//     double y = 2.0;

//     cout << "remainder(5.3, 2.0) = " << remainder(x, y) << endl;

//     return 0;
// }
// ```

// ### 8. **Error and Gamma Functions**

// #### `erf()`
// Returns the error function.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "erf(1.0) = " << erf(x) << endl;

//     return 0;
// }
// ```

// #### `erfc()`
// Returns the complementary error function.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 1.0;

//     cout << "erfc(1.0) = " << erfc(x) << endl;

//     return 0;
// }
// ```

// #### `tgamma()`
// Returns the gamma function.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 2.5;

//     cout << "tgamma(2.5) = " << tgamma(x) << endl;

//     return 0;
// }
// ```

// #### `lgamma()`
// Returns the natural logarithm of the gamma function.
// ```cpp
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 2.5;

//     cout << "lgamma(2.5) = " << lgamma(x) << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `<cmath>` header file in C++. If you need more details