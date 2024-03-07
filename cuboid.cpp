#include <iostream>

// Base class Shape
class Shape {
public:
    virtual double calculateArea() const = 0;
};

// Base class Rectangle
class Rectangle {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const {
        return length * width;
    }
};

// Derived class Cuboid inheriting from Rectangle and Shape
class Cuboid : public Rectangle, public Shape {
private:
    double height;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double calculateVolume() const {
        return length * width * height;
    }

    // Implementing pure virtual function calculateArea() from Shape
    double calculateArea() const override {
        // Since Cuboid is a 3D shape, we calculate its surface area using the formula
        // 2 * (length * width + width * height + height * length)
        return 2 * (length * width + width * height + height * length);
    }
};

int main() {
    double length, width, height;

    std::cout << "Enter length of the cuboid: ";
    std::cin >> length;
    std::cout << "Enter width of the cuboid: ";
    std::cin >> width;
    std::cout << "Enter height of the cuboid: ";
    std::cin >> height;

    Cuboid cuboid(length, width, height);

    std::cout << "Area of the cuboid: " << cuboid.calculateArea() << std::endl;
    std::cout << "Volume of the cuboid: " << cuboid.calculateVolume() << std::endl;

    return 0;
}
