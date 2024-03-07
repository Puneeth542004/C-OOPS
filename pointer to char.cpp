#include <iostream>

int main() {
    char* ptr;
    ptr = new char;
    *ptr = 'A';
    std::cout << "Value of char pointed to by ptr: " << *ptr << std::endl;

    delete ptr;

    return 0;
}
