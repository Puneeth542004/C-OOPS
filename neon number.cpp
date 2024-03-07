#include <iostream>
using namespace std;

bool isNeon(int number) {
    int square = number * number;
    int sumOfDigits = 0;

    while (square != 0) {
        sumOfDigits += square % 10;
        square /= 10;
    }

    return sumOfDigits == number;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isNeon(number)) {
        cout << number << " is a Neon number." << endl;
    } else {
        cout << number << " is not a Neon number." << endl;
    }

    return 0;
}
