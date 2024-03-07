#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Address of each element of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << arr[i] << ": " << &arr[i] << std::endl;
    }

    return 0;
}
