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
        Dynamic2DArray result(rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return  result;
    }
    Dynamic2DArray operator - (const Dynamic2DArray& other) const {
        Dynamic2DArray result(rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                    result.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return  result;
    }
    Dynamic2DArray operator * (const Dynamic2DArray& other) const {
        Dynamic2DArray result(rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                result.data[i][j] = this->data[i][j] * other.data[i][j];
            }
        }
        return result;
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

int main() {
    Dynamic2DArray arr1(2, 2), arr2(2, 2);
    
    arr1[0][0] = 2;
    arr1[0][1] = 4;
    arr1[1][0] = 5;
    arr1[1][1] = 8;

    arr2[0][0] = 1;
    arr2[0][1] = 3;
    arr2[1][0] = 3;
    arr2[1][1] = 7;

    cout << "Arr1: " << endl;
    arr1.display();
    cout << endl;

    cout << "Arr2: " << endl;
    arr2.display();
    cout << endl;

    Dynamic2DArray sum = arr1 + arr2;
    Dynamic2DArray diff = arr1 - arr2;
    Dynamic2DArray prod = arr1 * arr2;
    
    cout << "Arr1 + Arr2: " << endl;
    sum.display();
    cout << endl;

    cout << "Arr1 - Arr2: " << endl;
    diff.display();
    cout << endl;

    cout << "Arr1 * Arr2: " << endl;
    prod.display();

    return 0;
}