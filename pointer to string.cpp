#include <iostream>
#include <string>

int main() {
    std::string* ptr;

    ptr = new std::string;

    *ptr = "Hello, World!";

    std::cout << "Value of string pointed to by ptr: " << *ptr << std::endl;

    delete ptr;

    return 0;
}
