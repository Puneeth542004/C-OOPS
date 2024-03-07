#include <iostream>

int main() {
    float* ptr;
    ptr = new float;

    *ptr = 3.14;

    std::cout << "Value of float pointed to by ptr: " << *ptr << std::endl;

    delete ptr;

    return 0;
}
