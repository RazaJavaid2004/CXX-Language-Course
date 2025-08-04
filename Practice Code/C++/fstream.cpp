// The `<fstream>` header file in C++ provides facilities for file-based input and output operations. It defines several classes, including `ifstream`, `ofstream`, and `fstream`, which are used to handle file I/O.

// Here's an overview of the functions provided by these classes, along with examples for each:

// ### 1. **ifstream**: Input File Stream
// - **`ifstream()`**: Default constructor.
// - **`ifstream(const char* filename, ios_base::openmode mode = ios_base::in)`**: Opens a file.
// - **`open()`**: Opens a file.
// - **`is_open()`**: Checks if the file is open.
// - **`close()`**: Closes the file.
// - **`read()`**: Reads binary data.
// - **`get()`**: Reads a single character.
// - **`getline()`**: Reads a line of text.
// - **`ignore()`**: Ignores characters.
// - **`seekg()`**: Sets the position of the next character to be extracted.
// - **`tellg()`**: Returns the position of the current character in the input stream.

// ### Example:
// ```cpp
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     ifstream inFile("example.txt");
//     if (!inFile) {
//         cerr << "Unable to open file";
//         return 1;
//     }

//     string line;
//     while (getline(inFile, line)) {
//         cout << line << endl;
//     }

//     inFile.close();
//     return 0;
// }
// ```

// ### 2. **ofstream**: Output File Stream
// - **`ofstream()`**: Default constructor.
// - **`ofstream(const char* filename, ios_base::openmode mode = ios_base::out)`**: Opens a file.
// - **`open()`**: Opens a file.
// - **`is_open()`**: Checks if the file is open.
// - **`close()`**: Closes the file.
// - **`write()`**: Writes binary data.
// - **`put()`**: Writes a single character.
// - **`seekp()`**: Sets the position of the next character to be written.
// - **`tellp()`**: Returns the position of the current character in the output stream.

// ### Example:
// ```cpp
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream outFile("example.txt");
//     if (!outFile) {
//         cerr << "Unable to open file";
//         return 1;
//     }

//     outFile << "This is a line of text." << endl;
//     outFile << "This is another line of text." << endl;

//     outFile.close();
//     return 0;
// }
// ```

// ### 3. **fstream**: File Stream for Input and Output
// - **`fstream()`**: Default constructor.
// - **`fstream(const char* filename, ios_base::openmode mode = ios_base::in | ios_base::out)`**: Opens a file.
// - **`open()`**: Opens a file.
// - **`is_open()`**: Checks if the file is open.
// - **`close()`**: Closes the file.
// - **`read()`**: Reads binary data.
// - **`write()`**: Writes binary data.
// - **`seekg()`**: Sets the position of the next character to be extracted.
// - **`seekp()`**: Sets the position of the next character to be written.
// - **`tellg()`**: Returns the position of the current character in the input stream.
// - **`tellp()`**: Returns the position of the current character in the output stream.

// ### Example:
// ```cpp
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     fstream file("example.txt", ios::in | ios::out | ios::trunc);
//     if (!file) {
//         cerr << "Unable to open file";
//         return 1;
//     }

//     // Write to file
//     file << "Hello, world!" << endl;

//     // Seek to the beginning and read from file
//     file.seekg(0);
//     string line;
//     while (getline(file, line)) {
//         cout << line << endl;
//     }

//     file.close();
//     return 0;
// }
// ```

// ### 4. **Common Methods for All Streams**
// - **`eof()`**: Checks if the end of file has been reached.
// - **`fail()`**: Checks if the stream has encountered an error.
// - **`bad()`**: Checks if a non-recoverable error has occurred.
// - **`good()`**: Checks if the stream is in good condition.
// - **`clear()`**: Clears the error state.
// - **`flush()`**: Flushes the output buffer.

// ### Example:
// ```cpp
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream inFile("example.txt");
//     if (!inFile) {
//         cerr << "Unable to open file";
//         return 1;
//     }

//     while (!inFile.eof()) {
//         string line;
//         if (getline(inFile, line)) {
//             cout << line << endl;
//         } else if (inFile.fail()) {
//             cerr << "Error reading file" << endl;
//             inFile.clear();  // Clear the error state
//             break;
//         }
//     }

//     inFile.close();
//     return 0;
// }
// ```

// These examples demonstrate a wide range of functionalities provided by the `<fstream>` header file in C++. If you need more specific examples or have any questions, feel free to ask!