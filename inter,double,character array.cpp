#include <iostream>

void printArray(const int arr[], size_t size) {
    std::cout << "Integer array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const double arr[], size_t size) {
    std::cout << "Double array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const char arr[], size_t size) {
    std::cout << "Character array: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(int);

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleSize = sizeof(doubleArray) / sizeof(double);

    char charArray[] = {'H', 'e', 'l', 'l', 'o'};
    size_t charSize = sizeof(charArray) / sizeof(char);

    printArray(intArray, intSize);
    printArray(doubleArray, doubleSize);
    printArray(charArray, charSize);

    return 0;
}
