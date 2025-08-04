#include <iostream>
#include <stdexcept>
using namespace std;

class Dynamic2DArray {
    int** data;
    int rows;
    int cols;
    void allocateMemory(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for(int i = 0; i < rows; ++i) {
            data[i] = new int[cols]{0};
        }
    }
    public:
    Dynamic2DArray(int r = 0, int c = 0) : data(nullptr), rows(r), cols(c) {
        allocateMemory(r, c);
    }
    Dynamic2DArray(const Dynamic2DArray& other) {
        allocateMemory(other.rows, other.cols);
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }
    Dynamic2DArray operator=(const Dynamic2DArray& other) {
        if(this == &other) return *this;
        for(int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
        allocateMemory(other.rows, other.cols);
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }
    Dynamic2DArray operator+(const Dynamic2DArray& other) const {
        if(rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix Dimensions Must Match for Addition!");
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
            throw invalid_argument("Matrix Dimensions Must Match for Subtraction!");
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
            throw invalid_argument("Matrix Dimensions Must Match for Multiplication!");
        }
        Dynamic2DArray result(rows, cols);
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
    // Dynamic2DArray operator*(const Dynamic2DArray& other) {
    //     if(rows != other.cols) {
    //         throw invalid_argument("Matrix Multiplication requires First Matrix's Column to Match Second Matrix's Row");
    //     }
    //     Dynamic2DArray result(rows, other.cols);
    //     for(int i = 0; i < rows; ++i) {
    //         for(int j = 0; j < other.cols; ++j) {
    //             result.data[i][j] = 0;
    //             for(int k = 0; k < cols; ++k) {
    //                 result.data[i][j] += this->data[i][k] * other.data[k][j];
    //             }
    //         }
    //     }
    //     return result;
    // }
    friend ostream& operator<<(ostream& os, const Dynamic2DArray& other) {
        for(int i = 0; i < other.rows; ++i) {
            for(int j = 0; j < other.cols; ++j) {
                os << other.data[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }
    int* operator[](int index) {
        if(index < 0 || index >= rows) {
            throw out_of_range("Index Out of Range!");
        }
        return data[index];
    }
    const int* operator[](int index) const {
        if(index < 0 || index >= rows) {
            throw out_of_range("Index Out of Range!");
        }
        return data[index];
    }
    int getRows() const {
        return rows;
    }
    int getCols() const {
        return cols;
    }
    void display() const {
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~Dynamic2DArray() {
        if(data) {
            for(int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
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