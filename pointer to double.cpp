#include <iostream>

int main() {
    double* ptr;

    ptr = new double;

    *ptr = 3.14159;

    std::cout << "Value of double pointed to by ptr: " << *ptr << std::endl;

    delete ptr;

    return 0;
}
