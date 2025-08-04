#include <iostream>
using namespace std;

class Dynamic2DArray {
    int** data;
    int rows;
    int cols;
    void allocateMemory(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for(int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }
    public:
    Dynamic2DArray(int r = 0, int c = 0) : data(nullptr), rows(r), cols(c) {
        allocateMemory(r, c);
    }
    Dynamic2DArray(const Dynamic2DArray& other) {
        allocateMemory(other.rows, other.cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }
    }
    Dynamic2DArray& operator = (const Dynamic2DArray& other) {
        if(this == &other) return *this;
        for(int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
        allocateMemory(other.rows, other.cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }
    Dynamic2DArray operator + (const Dynamic2DArray& other) const {
        Dynamic2DArray sum(rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                sum.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return sum;
    }
    Dynamic2DArray operator - (const Dynamic2DArray& other) const {
        Dynamic2DArray diff(rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                diff.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return diff;
    }
    Dynamic2DArray operator * (const Dynamic2DArray& other) const {
        Dynamic2DArray prod(rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                prod.data[i][j] = this->data[i][j] * other.data[i][j];
            }
        }
        return prod;
    }
    int* operator [] (int index) {
        return data[index];
    }
    const int* operator [] (int index) const {
        return data[index];
    }
    ~Dynamic2DArray() {
        for(int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
    int getRows() const {
        return rows;
    }
    int getCols() const {
        return cols;
    }
    void display() const {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

bool searchMatrix(Dynamic2DArray& matrix, int target) {
    int rows = matrix.getRows();
    int cols = matrix.getCols();

    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / cols][mid % cols];

        if (midValue == target) {
            return true;
        } else if (midValue < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false; 
}

int main() {
    Dynamic2DArray matrix(3, 4);
    int value = 1;

    for (int i = 0; i < matrix.getRows(); ++i) {
        for (int j = 0; j < matrix.getCols(); ++j) {
            matrix[i][j] = value++;
        }
    }

    cout << "Matrix:\n";
    for (int i = 0; i < matrix.getRows(); ++i) {
        for (int j = 0; j < matrix.getCols(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Target \"" << target << "\" found in the matrix." << endl;
    } else {
        cout << "Target \"" << target << "\" Not found in the matrix." << endl;
    }

    return 0;
}