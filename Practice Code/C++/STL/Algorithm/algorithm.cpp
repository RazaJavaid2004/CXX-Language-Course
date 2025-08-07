// The `<algorithm>` header in C++ provides a collection of functions that perform algorithmic operations on containers. These functions can be divided into several categories: sorting, searching, modifying, partitioning, and more. Here are some commonly used functions from the `<algorithm>` header, along with examples:

// ### 1. **Sorting Algorithms**

// #### `sort()`
// Sorts elements in a range.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {5, 3, 1, 4, 2};
//     sort(vec.begin(), vec.end());
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// #### `stable_sort()`
// Sorts elements while preserving the relative order of equivalent elements.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {5, 3, 3, 1, 4, 2};
//     stable_sort(vec.begin(), vec.end());
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// ### 2. **Searching Algorithms**

// #### `find()`
// Finds the first occurrence of a value in a range.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {5, 3, 1, 4, 2};
//     auto it = find(vec.begin(), vec.end(), 3);
//     if (it != vec.end()) cout << "Found: " << *it << endl;
//     else cout << "Not found" << endl;
//     return 0;
// }
// ```

// #### `binary_search()`
// Checks if a value exists in a sorted range.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     bool found = binary_search(vec.begin(), vec.end(), 3);
//     cout << (found ? "Found" : "Not found") << endl;
//     return 0;
// }
// ```

// ### 3. **Modifying Algorithms**

// #### `copy()`
// Copies elements from one range to another.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vector<int> vec2(5);
//     copy(vec.begin(), vec.end(), vec2.begin());
//     for (int n : vec2) cout << n << " ";
//     return 0;
// }
// ```

// #### `replace()`
// Replaces all occurrences of a value in a range.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 2, 5};
//     replace(vec.begin(), vec.end(), 2, 10);
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// #### `fill()`
// Fills a range with a specified value.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec(5);
//     fill(vec.begin(), vec.end(), 7);
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// ### 4. **Partitioning Algorithms**

// #### `partition()`
// Reorders elements based on a predicate.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// bool isOdd(int n) { return n % 2 == 1; }

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     partition(vec.begin(), vec.end(), isOdd);
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// ### 5. **Other Algorithms**

// #### `reverse()`
// Reverses the order of elements in a range.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     reverse(vec.begin(), vec.end());
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// #### `accumulate()` (from `<numeric>` header)
// Calculates the sum of elements in a range.
// ```cpp
// #include <numeric>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int sum = accumulate(vec.begin(), vec.end(), 0);
//     cout << "Sum: " << sum << endl;
//     return 0;
// }
// ```

// #### `unique()`
// Removes consecutive duplicate elements.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 2, 3, 3, 4, 5};
//     auto it = unique(vec.begin(), vec.end());
//     vec.resize(distance(vec.begin(), it));
//     for (int n : vec) cout << n << " ";
//     return 0;
// }
// ```

// ### 6. **Set Algorithms**

// #### `set_union()`
// Computes the union of two sorted ranges.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec1 = {1, 2, 3};
//     vector<int> vec2 = {2, 3, 4};
//     vector<int> result(6);
//     auto it = set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());
//     result.resize(it - result.begin());
//     for (int n : result) cout << n << " ";
//     return 0;
// }
// ```

// #### `set_intersection()`
// Computes the intersection of two sorted ranges.
// ```cpp
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> vec1 = {1, 2, 3};
//     vector<int> vec2 = {2, 3, 4};
//     vector<int> result(3);
//     auto it = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());
//     result.resize(it - result.begin());
//     for (int n : result) cout << n << " ";
//     return 0;
// }
// ```

// These examples cover a wide range of algorithms provided by the `<algorithm>` header in C++. If you need more details or have specific questions about any functions, feel free to ask!