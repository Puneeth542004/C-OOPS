#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;

    if (rows != cols) {
        cout << "The matrix is not square. Diagonals cannot be calculated." << endl;
        return 1;
    }

    int matrix[rows][cols];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {
        secondaryDiagonalSum += matrix[i][rows - i - 1];
    }

    cout << "Sum of the main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
