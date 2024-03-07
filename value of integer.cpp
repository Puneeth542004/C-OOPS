#include <iostream>

int main() {
    int* ptr;
    ptr = new int;
    *ptr = 42;

    std::cout << "Value of integer pointed to by ptr: " << *ptr << std::endl;

    delete ptr;

    return 0;
}
