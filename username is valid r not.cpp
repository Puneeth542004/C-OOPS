#include <iostream>
#include <string>
#include <cctype>

bool isValidUsername(const std::string& username) {
    if (username.length() < 5)
        return false;
    
    for (char ch : username) {
        if (!std::isalnum(ch))
            return false;
    }
    
    return true;
}

int main() {
    std::string username;
    std::cout << "Enter your username: ";
    std::cin >> username;

    if (isValidUsername(username)) {
        std::cout << "Username is valid!" << std::endl;
    } else {
        std::cout << "Username is not valid. Please make sure it is at least 5 characters long and contains only alphanumeric characters." << std::endl;
    }

    return 0;
}
