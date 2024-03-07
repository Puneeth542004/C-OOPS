#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string& username) {
    // Check if the username meets the criteria
    if (username.length() < 5 || username.length() > 15) {
        return false; // Username length should be between 5 and 15 characters
    }

    for (char ch : username) {
        if (!isalnum(ch) && ch != '_') {
            return false; // Username should only contain alphanumeric characters and underscores
        }
    }

    return true;
}

int main() {
    string username;

    // Input
    cout << "Enter your username: ";
    getline(cin, username);

    // Check if the username is valid
    if (isValidUsername(username)) {
        cout << "The username '" << username << "' is valid." << endl;
    } else {
        cout << "The username '" << username << "' is invalid." << endl;
    }

    return 0;
}
