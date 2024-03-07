#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle object created with length: " << length << " and width: " << width << std::endl;
    }

    ~Rectangle() {
        std::cout << "Rectangle object destroyed with length: " << length << " and width: " << width << std::endl;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {

    Rectangle rectangle1(5.0, 3.0);
    Rectangle rectangle2(7.0, 4.0);

    std::cout << "Area of rectangle 1: " << rectangle1.calculateArea() << std::endl;
    std::cout << "Area of rectangle 2: " << rectangle2.calculateArea() << std::endl;

    return 0;
}
