#include <iostream>

void findMinMax(int arr[], int size, int& min, int& max) {
    if (size == 0)
        return;

    min = max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    std::cout << "Enter " << SIZE << " integers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, SIZE, min, max);

    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}
