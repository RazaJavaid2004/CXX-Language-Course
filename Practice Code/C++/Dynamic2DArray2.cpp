#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Dynamic2DArray {
    vector <vector <int> > data;
    int rows;
    int cols;
    public:
    Dynamic2DArray(int r = 0, int c = 0) : rows(r), cols(c), data(r, vector<int>(c)) {}
    Dynamic2DArray(const Dynamic2DArray& other) : rows(other.rows), cols(other.cols), data(other.data) {}
    Dynamic2DArray& operator=(Dynamic2DArray other) {
        swap(rows, other.rows);
        swap(cols, other.cols);
        swap(data, other.data);
        return *this;
    }
    Dynamic2DArray operator+(const Dynamic2DArray& other) const {
        if(rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix Dimensions must match for Addition!");
        }
        Dynamic2DArray result(rows, cols);
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
    Dynamic2DArray operator-(const Dynamic2DArray& other) const {
        if(rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix Dimensions must match for Subtraction!");
        }
        Dynamic2DArray result(rows, cols);
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
    Dynamic2DArray operator*(const Dynamic2DArray& other) const {
        if(rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix Dimensions must match for Multiplication!");
        }
        Dynamic2DArray result;
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] * other.data[i][j];
            }
        }
        return result;
    }
    vector <int>& operator[](int index) {
        if(index < 0 || index >= rows) {
            throw out_of_range("Index is Out Of Range!");
        }
        return data[index];
    }
    const vector <int>& operator[](int index) const {
        if(index < 0 || index >= rows) {
            throw out_of_range("Index is Out Of Range!");
        }
        return data[index];
    }
    friend ostream& operator<<(ostream& os, const Dynamic2DArray& other) {
        for(const auto& row : other.data) {
            for(const auto& element : row) {
                os << element;
            }
            os << endl;
        }
        return os;
    }
    int getRows() const {
        return rows;
    }
    int getCols() const {
        return cols;
    }
    void display() const {
        for(const auto& row : data) {
            for(const auto& element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Dynamic2DArray arr1(2, 2), arr2(2, 2);

    arr1[0][0] = 2; arr1[0][1] = 4; arr1[1][0] = 5; arr1[1][1] = 8;
    arr2[0][0] = 1; arr2[0][1] = 3; arr2[1][0] = 3; arr2[1][1] = 7;

    cout << "Arr1:\n";
    arr1.display();
    cout << "Arr2:\n";
    arr2.display();

    Dynamic2DArray sum = arr1 + arr2;
    Dynamic2DArray diff = arr1 - arr2;
    Dynamic2DArray prod = arr1 * arr2;

    cout << "Arr1 + Arr2:\n";
    sum.display();
    cout << "Arr1 - Arr2:\n";
    diff.display();
    cout << "Arr1 * Arr2:\n";
    prod.display();

    return 0;
}