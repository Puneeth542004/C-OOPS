#include <iostream>
using namespace std;

bool isPerfect(int number) {
    int sum = 0;

    // Find sum of proper divisors
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if sum of proper divisors equals the number
    return sum == number;
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is perfect
    if (isPerfect(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}
