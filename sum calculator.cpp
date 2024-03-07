#include <iostream>

class SumCalculator {
public:
    SumCalculator(int num1, int num2) : num1(num1), num2(num2) {}

    int calculateSum() {
        return num1 + num2;
    }

private:
    int num1;
    int num2;
};

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    SumCalculator calculator(num1, num2);
    int sum = calculator.calculateSum();

    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
