#include <iostream>

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    std::cout << "Result of adding two integers: " << intResult << std::endl;

    float floatResult = add(5.5f, 3.5f);
    std::cout << "Result of adding two floating point numbers: " << floatResult << std::endl;

    return 0;
}
