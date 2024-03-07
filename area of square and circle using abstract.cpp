#include <iostream>

class Shape {
public:
    virtual double calculateArea() = 0;
};
class Square : public Shape {
public:
    Square(double side) : side(side) {}
    double calculateArea() override {
        return side * side;
    }

private:
    double side;
};
class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};

int main() {
    double side, radius;

    std::cout << "Enter the side of the square: ";
    std::cin >> side;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Square square(side);
    Circle circle(radius);

    std::cout << "Area of the square: " << square.calculateArea() << std::endl;
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;

    return 0;
}
