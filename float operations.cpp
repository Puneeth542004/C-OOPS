#include <iostream>

using namespace std;

// Function to calculate modulo for floating-point numbers
float calculateModulo(float dividend, float divisor) {
    return dividend - static_cast<int>(dividend / divisor) * divisor;
}

int main() {
    float num1, num2;

    // Read two floating-point numbers from the user
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;

    // Perform operations
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division = num1 / num2;
    float modulo = calculateModulo(num1, num2);

    // Display results
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulo: " << modulo << endl;

    return 0;
}
