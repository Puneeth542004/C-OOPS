#include <iostream>

class CubeCalculator {
public:
    CubeCalculator(int limit) : limit(limit) {}
    void displayCubes() {
        for (int i = 1; i <= limit; ++i) {
            std::cout << "Cube of " << i << " is " << i * i * i << std::endl;
        }
    }

private:
    int limit;
};

int main() {
    int limit;
    std::cout << "Enter the limit: ";
    std::cin >> limit;

    CubeCalculator calculator(limit);
    calculator.displayCubes();

    return 0;
}
