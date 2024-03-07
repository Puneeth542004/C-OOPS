#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> cols1;

    cout << "Enter the number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> cols2;

    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied. Number of columns of matrix 1 must be equal to the number of rows of matrix 2." << endl;
        return 1;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int productMatrix[rows1][cols2];

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            productMatrix[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << productMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
