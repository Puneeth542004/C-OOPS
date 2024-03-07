#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*ptr)(int, int);
    ptr = add;
    std::cout << "Result of addition: " << ptr(5, 3) << std::endl;

    ptr = subtract;
    std::cout << "Result of subtraction: " << ptr(5, 3) << std::endl;

    return 0;
}
