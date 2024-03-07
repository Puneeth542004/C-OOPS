#include <iostream>

int main() {
    float arr[] = {3.14, 2.718, 1.618, 0.577, 1.414};

    float* ptr = arr;
    std::cout << "Values of the array pointed to by ptr: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
