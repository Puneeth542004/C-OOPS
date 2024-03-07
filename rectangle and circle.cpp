#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius; 
    }
};

int main() {
    Rectangle rectangle(4, 5);
    Circle circle(3);

    std::cout << "Rectangle:" << std::endl;
    std::cout << "Area: " << rectangle.area() << std::endl;

    std::cout << "\nCircle:" << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;

    return 0;
}
