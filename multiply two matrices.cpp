#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    size_t rows;
    size_t cols;

public:
    Matrix(size_t numRows, size_t numCols) : rows(numRows), cols(numCols) {
        data.resize(rows);
        for (size_t i = 0; i < rows; ++i) {
            data[i].resize(cols, 0); 
        }
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cerr << "Error: Incompatible matrix sizes for multiplication" << std::endl;
            return Matrix(0, 0); 
        }

        Matrix result(rows, other.cols);

        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < other.cols; ++j) {
                for (size_t k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    void display() const {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix matrix1(2, 3);
    matrix1.display();
    std::cout << std::endl;

    Matrix matrix2(3, 2);
    matrix2.display();
    std::cout << std::endl;

    Matrix result = matrix1 * matrix2;

    result.display();

    return 0;
}
