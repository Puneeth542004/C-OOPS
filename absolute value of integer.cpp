#include <iostream>
#include <cmath>

int absolute(int num) {
    return std::abs(num);
}

double absolute(double num) {
    return std::fabs(num);
}

int main() {
    int intNum = -5;
    std::cout << "Absolute value of " << intNum << " is: " << absolute(intNum) << std::endl;

    double doubleNum = -5.5;
    std::cout << "Absolute value of " << doubleNum << " is: " << absolute(doubleNum) << std::endl;

    return 0;
}
