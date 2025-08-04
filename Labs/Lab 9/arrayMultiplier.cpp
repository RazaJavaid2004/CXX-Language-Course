#include <iostream>
#include <vector>
using namespace std;

class ArrayMultiplier {
    public:
    ArrayMultiplier() {}
    virtual void calculate() = 0;
    virtual ~ArrayMultiplier() {}
};

class ArrayMultiplier1D : public ArrayMultiplier {
    vector <int> arr1, arr2, result;
    public:
    ArrayMultiplier1D(const vector<int>& vec1, const vector<int>& vec2) : arr1(vec1), arr2(vec2) {
        if(arr1.size() != arr2.size()) {
            throw invalid_argument("Size of Both Arrays Must Be Same!");
        }
        result.resize(arr1.size());
    }
    void calculate() override {
        for(int i = 0; i < arr1.size(); ++i) {
            result[i] = arr1[i] * arr2[2];
        }

        cout << "1D Matrix Multiplication: " << endl;
        for(const auto& val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
};

class ArrayMultiplier2D : public ArrayMultiplier {
    vector <vector <int> > matrix1, matrix2, result;
    public:
    ArrayMultiplier2D(const vector<vector<int>>& m1, const vector<vector<int>>& m2) : matrix1(m1), matrix2(m2) {
        if(matrix1.size() != matrix2.size() || matrix1[0].size() != matrix2[0].size()) {
            throw invalid_argument("Dimensions of Both Matrix Must Match!");
        }
        result.resize(matrix1.size(), vector<int>(matrix1[0].size(), 0));
    }
    void calculate() override {
        if(matrix1[0].size() != matrix2.size()) {
            throw invalid_argument("Number of columns in the first matrix must equal the number of rows in the second matrix for multiplication!");
        }

        result.resize(matrix1.size(), vector <int> (matrix2[0].size(), 0));
        for(int i = 0; i < matrix1.size(); ++i) {
            for(int j = 0; j < matrix2[0].size(); ++j) {
                for(int k = 0; k < matrix1[0].size(); ++k) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        cout << "2D Matrix Multiplication: " << endl;
        for(const auto& row : result) {
            for(const auto& val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    try {
        vector <int> array1 = {1, 2, 3};
        vector <int> array2 = {4, 5, 6};
        ArrayMultiplier1D multiplier1D(array1, array2);
        multiplier1D.calculate();

        vector<vector <int>> matrix1 = {{1, 2}, {3, 4}};
        vector<vector <int>> matrix2 = {{5, 6}, {7, 8}};
        ArrayMultiplier2D multiplier2D(matrix1, matrix2);
        multiplier2D.calculate();

    }
    catch(const invalid_argument& e) {
        cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}