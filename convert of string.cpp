#include <iostream>
#include <string>
using namespace std;

class StringConverter {
private:
    string inputString;

public:
    StringConverter(string str) {
        inputString = str;
    }

    void toUpperCase() {
        for (char &c : inputString) {
            if (islower(c)) {
                c = toupper(c);
            }
        }
    }

    void toLowerCase() {
        for (char &c : inputString) {
            if (isupper(c)) {
                c = tolower(c);
            }
        }
    }

    int countCapitalLetters() {
        int count = 0;
        for (char c : inputString) {
            if (isupper(c)) {
                count++;
            }
        }
        return count;
    }

    string getString() {
        return inputString;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    StringConverter converter(input);

    cout << "Choose an option:\n";
    cout << "1. Convert to uppercase\n";
    cout << "2. Convert to lowercase\n";
    cout << "Option: ";
    int option;
    cin >> option;

    switch (option) {
        case 1:
            converter.toUpperCase();
            break;
        case 2:
            converter.toLowerCase();
            break;
        default:
            cout << "Invalid option!\n";
            return 1;
    }

    cout << "Modified string: " << converter.getString() << endl;
    cout << "Number of capital letters: " << converter.countCapitalLetters() << endl;

    return 0;
}
