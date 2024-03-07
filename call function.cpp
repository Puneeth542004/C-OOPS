#include <iostream>

class MathOperations {
public:
    double operator()(double x, double y) {
        return x + y; 
    }
};

int main() {
    MathOperations add;

    double result = add(5.0, 3.0);

    std::cout << "Result of adding 5.0 and 3.0 is: " << result << std::endl;

    return 0;
}
