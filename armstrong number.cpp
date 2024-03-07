#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int numDigits = 0;
    int temp = number;
    int sum = 0;

    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return sum == number;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
