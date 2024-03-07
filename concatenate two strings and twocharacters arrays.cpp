#include <iostream>
#include <cstring>

std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

char* concatenate(const char* arr1, const char* arr2) {
    size_t len1 = strlen(arr1);
    size_t len2 = strlen(arr2);
    char* result = new char[len1 + len2 + 1]; 
    strcpy(result, arr1);
    strcat(result, arr2);
    return result;
}

int main() {
    std::string strConcat = concatenate("Hello, ", "world!");
    std::cout << "Concatenated string: " << strConcat << std::endl;

    const char* arr1 = "Hello, ";
    const char* arr2 = "world!";
    char* arrConcat = concatenate(arr1, arr2);
    std::cout << "Concatenated character array: " << arrConcat << std::endl;

    delete[] arrConcat;

    return 0;
}
