#include <iostream>
#include <string>
#include <cctype>

std::string preprocessString(const std::string& str) {
    std::string result;
    for (char ch : str) {
        if (std::isalnum(ch)) {
            result.push_back(std::tolower(ch));
        }
    }
    return result;
}

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string processedString = preprocessString(inputString);
    
    if (isPalindrome(processedString)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
