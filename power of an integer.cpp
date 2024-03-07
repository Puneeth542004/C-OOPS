#include <iostream>
#include <cmath>

int power(int base, int exponent) {
    return static_cast<int>(std::pow(base, exponent));
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
  
    int intBase = 2;
    int intExponent = 3;
    std::cout << "Power of " << intBase << " raised to " << intExponent << " is: " << power(intBase, intExponent) << std::endl;

    double doubleBase = 2.5;
    double doubleExponent = 2.0;
    std::cout << "Power of " << doubleBase << " raised to " << doubleExponent << " is: " << power(doubleBase, doubleExponent) << std::endl;

    return 0;
}
