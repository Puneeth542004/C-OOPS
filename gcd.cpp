#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int remainder;

    do {
        remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);

    return a; 
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
