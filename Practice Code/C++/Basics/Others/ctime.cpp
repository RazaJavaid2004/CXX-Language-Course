// The `<ctime>` header file in C++ provides functions for manipulating date and time. These functions are helpful for retrieving, formatting, and modifying time-related data. Here's a comprehensive list of some commonly used functions from `<ctime>`, along with examples for each:

// ### 1. **Time and Date Functions**

// #### `time()`
// Returns the current calendar time as a `time_t` object.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t currentTime = time(nullptr);
//     cout << "Current time: " << currentTime << endl;

//     return 0;
// }
// ```

// #### `difftime()`
// Returns the difference between two `time_t` values in seconds.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t startTime = time(nullptr);
//     // Simulate some work with a sleep function (platform-dependent)
//     time_t endTime = time(nullptr);

//     double seconds = difftime(endTime, startTime);
//     cout << "Elapsed time: " << seconds << " seconds" << endl;

//     return 0;
// }
// ```

// #### `mktime()`
// Converts a `tm` structure to `time_t`.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     struct tm timeinfo = {0};
//     timeinfo.tm_year = 2022 - 1900;  // Years since 1900
//     timeinfo.tm_mon = 11;            // Months since January (0-11)
//     timeinfo.tm_mday = 24;           // Day of the month (1-31)

//     time_t rawtime = mktime(&timeinfo);
//     cout << "Time since epoch: " << rawtime << " seconds" << endl;

//     return 0;
// }
// ```

// ### 2. **Conversion Functions**

// #### `localtime()`
// Converts `time_t` to `tm` as local time.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t currentTime = time(nullptr);
//     struct tm* localTime = localtime(&currentTime);

//     cout << "Local time: " << asctime(localTime);

//     return 0;
// }
// ```

// #### `gmtime()`
// Converts `time_t` to `tm` as UTC time.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t currentTime = time(nullptr);
//     struct tm* gmtTime = gmtime(&currentTime);

//     cout << "UTC time: " << asctime(gmtTime);

//     return 0;
// }
// ```

// #### `asctime()`
// Converts a `tm` structure to a string.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t currentTime = time(nullptr);
//     struct tm* localTime = localtime(&currentTime);

//     cout << "Local time: " << asctime(localTime);

//     return 0;
// }
// ```

// #### `ctime()`
// Converts `time_t` to a string representing local time.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t currentTime = time(nullptr);
//     cout << "Local time: " << ctime(&currentTime);

//     return 0;
// }
// ```

// ### 3. **Formatted Output Functions**

// #### `strftime()`
// Formats date and time according to a format string.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     time_t currentTime = time(nullptr);
//     struct tm* localTime = localtime(&currentTime);

//     char buffer[80];
//     strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
//     cout << "Formatted time: " << buffer << endl;

//     return 0;
// }
// ```

// ### 4. **Time Manipulation Functions**

// #### `clock()`
// Returns the processor time consumed by the program.
// ```cpp
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     clock_t startTime = clock();
//     // Simulate some work
//     clock_t endTime = clock();

//     double elapsedTime = double(endTime - startTime) / CLOCKS_PER_SEC;
//     cout << "Elapsed processor time: " << elapsedTime << " seconds" << endl;

//     return 0;
// }
// ```

// These examples cover a wide range of functionalities provided by the `<ctime>` header file in C++. If you need more details or have specific questions about any functions, feel free to ask!