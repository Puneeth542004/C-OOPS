#include <iostream>

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    char* ptr = arr;

    std::cout << "Value of the array pointed to by ptr: ";
    while (*ptr != '\0') {
        std::cout << *ptr;
        ptr++;
    }
    std::cout << std::endl;

    return 0;
}
