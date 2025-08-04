#include <iostream>
using namespace std;

void mul(int m1[][3], int m2[][3], int rows) {
    int res[3][3];
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < 3; ++j) {
            res[i][j] = 0;
            for(int k = 0; k < 3; ++k) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void add(int m1[][3], int m2[][3], int rows) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << m1[i][j] + m2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int m1[3][3];
    int m2[3][3];

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            m1[i][j] = m2[i][j] = rand() % 10;
        }
    }

    mul(m1, m2, 3);
    add(m1, m2, 3);

    return 0;
}