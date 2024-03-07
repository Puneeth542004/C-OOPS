#include <iostream>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double factorial(double n) {
    if (n == 0.0 || n == 1.0) {
        return 1.0;
    }
    return n * factorial(n - 1.0);
}

int main() {
    int intNum = 5;
    std::cout << "Factorial of " << intNum << " is: " << factorial(intNum) << std::endl;

    double doubleNum =5;
    std::cout << " floating Factorial of " << doubleNum << " is: " << factorial(doubleNum) << std::endl;

    return 0;
}
