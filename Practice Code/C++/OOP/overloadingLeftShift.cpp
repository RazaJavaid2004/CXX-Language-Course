// #include <iostream>
// using namespace std;

// class Person {
//     string name;
//     int age;

// public:
//     Person(string n, int a) : name(n), age(a) {}

//     // Overloading << operator
//     friend ostream& operator<<(ostream& os, const Person& p) {
//         os << "Name: " << p.name << ", Age: " << p.age;
//         return os; // Returning stream to allow chaining (cout << obj1 << obj2)
//     }
// };

// int main() {
//     Person p1("Alice", 25);
//     cout << p1 << endl; // Uses overloaded << operator
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Matrix {
//     int** data;
//     int rows, cols;

// public:
//     Matrix(int r, int c) : rows(r), cols(c) {
//         data = new int*[rows];
//         for (int i = 0; i < rows; i++)
//             data[i] = new int[cols]{0};
//     }

//     // Overloading << operator to print matrix
//     friend ostream& operator<<(ostream& os, const Matrix& m) {
//         for (int i = 0; i < m.rows; i++) {
//             for (int j = 0; j < m.cols; j++) {
//                 os << m.data[i][j] << " ";
//             }
//             os << endl;
//         }
//         return os;
//     }

//     ~Matrix() {
//         for (int i = 0; i < rows; i++) delete[] data[i];
//         delete[] data;
//     }
// };

// int main() {
//     Matrix mat(2, 3);
//     cout << mat; // Uses overloaded << operator
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// ostream& operator<<(ostream& os, const vector<int>& vec) {
//     os << "[ ";
//     for (const auto& num : vec) {
//         os << num << " ";
//     }
//     os << "]";
//     return os;
// }

// int main() {
//     vector<int> numbers = {1, 2, 3, 4, 5};
//     cout << numbers << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// enum Color { Red, Green, Blue };

// ostream& operator<<(ostream& os, Color c) {
//     switch (c) {
//         case Red: os << "Red"; break;
//         case Green: os << "Green"; break;
//         case Blue: os << "Blue"; break;
//     }
//     return os;
// }

// int main() {
//     Color myColor = Green;
//     cout << "Selected color: " << myColor << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Point {
//     int x, y;
// };

// ostream& operator<<(ostream& os, const Point& p) {
//     os << "(" << p.x << ", " << p.y << ")";
//     return os;
// }

// int main() {
//     Point p1 = {3, 5};
//     cout << "Point: " << p1 << endl;
//     return 0;
// }

// // ✔ Use a friend function if accessing private members.
// // ✔ Always return ostream& to allow chaining (cout << obj1 << obj2).
// // ✔ Overload for STL containers like vector<int> to enhance readability.
// // ✔ Useful for enums, structs, and complex objects like matrices.