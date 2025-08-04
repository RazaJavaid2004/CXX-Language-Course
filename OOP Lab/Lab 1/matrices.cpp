#include <iostream>
using namespace std;

void printm(int m[][3], int rows);
void addm(int m1[][3], int m2[][3], int rows);
void prodm(int m1[][3], int m2[][3], int rows);

int main() {
    int matrix1[3][3];
    int matrix2[3][3];

    cout << "Enter the Elements of Matrix 1: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the Elements of Matrix 2: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }

    cout << "Matrix 1: " << endl;
    printm(matrix1, 3);

    cout << "Matrix 2: " << endl;
    printm(matrix2, 3);

    cout << "Adding Matrix 1 and Matrix 2: " << endl;
    addm(matrix1, matrix2, 3);

    cout << "Multiplying Matrix 1 and Matrix 2: " << endl;
    prodm(matrix1, matrix2, 3);

    return 0;
}

void printm(int m[][3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void addm(int m1[][3], int m2[][3], int rows) {
    int result[3][3];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void prodm(int m1[][3], int m2[][3], int rows) {
    int res[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            res[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }
}