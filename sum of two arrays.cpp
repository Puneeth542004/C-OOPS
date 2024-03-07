#include <iostream>
#include <vector>

std::vector<std::vector<int>> sum(const std::vector<std::vector<int>>& matrix1, const std::vector<std::vector<int>>& matrix2) {
    std::vector<std::vector<int>> result;
    size_t rows = matrix1.size();
    size_t cols = matrix1[0].size();
    
    result.resize(rows, std::vector<int>(cols, 0));

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return result;
}

std::vector<int> sum(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result;
    size_t size = arr1.size();

    result.resize(size);

    for (size_t i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> matrix2 = {{7, 8, 9}, {10, 11, 12}};

    auto matrixSum = sum(matrix1, matrix2);

    std::cout << "Sum of two matrices:" << std::endl;
    for (const auto& row : matrixSum) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6};

    auto arrSum = sum(arr1, arr2);

    std::cout << "Sum of two arrays: ";
    for (int num : arrSum) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
