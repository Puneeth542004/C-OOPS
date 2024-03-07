#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() {
        return height * width;
    }

    double perimeter() {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double area() {
        return 0.5 * height * width;
    }

    double perimeter() {
        double side = sqrt((height * height) + (width * width));
        return height + width + side;
    }
};

int main() {
    Rectangle rectangle(5, 4);
    cout << "Rectangle Area: " << rectangle.area() << endl;
    cout << "Rectangle Perimeter: " << rectangle.perimeter() << endl;

    Triangle triangle(3, 4);
    cout << "Triangle Area: " << triangle.area() << endl;
    cout << "Triangle Perimeter: " << triangle.perimeter() << endl;

    return 0;
}
