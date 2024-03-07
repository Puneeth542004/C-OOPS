#include <iostream>

const double PI = 3.14159265359;

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Radius cannot be negative." << std::endl;
    } else {
        double area = calculateArea(radius);
        std::cout << "Area of the circle with radius " << radius << " is: " << area << std::endl;
    }

    return 0;
}
