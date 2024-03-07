#include <iostream>
#include <cmath>
using namespace std;

bool isNarcissistic(int number) {
    int numDigits = 0;
    int temp = number;
    int sum = 0;

    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    // Check if the sum equals the original number
    return sum == number;
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a narcissistic number
    if (isNarcissistic(number)) {
        cout << number << " is a narcissistic number." << endl;
    } else {
        cout << number << " is not a narcissistic number." << endl;
    }

    return 0;
}
