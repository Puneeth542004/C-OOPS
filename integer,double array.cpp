#include <iostream>
#include <algorithm>

void sortArray(int arr[], size_t size) {
    std::sort(arr, arr + size);
}

void sortArray(double arr[], size_t size) {
    std::sort(arr, arr + size);
}

void displayIntArray(const int arr[], size_t size) {
    std::cout << "Integer array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void displayDoubleArray(const double arr[], size_t size) {
    std::cout << "Double array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    int intArray[] = {5, 3, 7, 1, 9};
    size_t intSize = sizeof(intArray) / sizeof(int);

    double doubleArray[] = {5.5, 3.3, 7.7, 1.1, 9.9};
    size_t doubleSize = sizeof(doubleArray) / sizeof(double);
    sortArray(intArray, intSize);
    sortArray(doubleArray, doubleSize);

    displayIntArray(intArray, intSize);
    displayDoubleArray(doubleArray, doubleSize);

    return 0;
}
