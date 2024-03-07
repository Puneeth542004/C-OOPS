#include <iostream>

class Rectangle {
public:
    Rectangle() : length(0), width(0) {}
    Rectangle(int l, int w) : length(l), width(w) {}

    int calculateArea() {
        return length * width;
    }

private:
    int length;
    int width;
};

int main() {
    const int numRectangles = 3; 

    Rectangle rectangles[numRectangles]; 
    for (int i = 0; i < numRectangles; ++i) {
        int length, width;
        std::cout << "Enter length of rectangle " << i + 1 << ": ";
        std::cin >> length;
        std::cout << "Enter width of rectangle " << i + 1 << ": ";
        std::cin >> width;
        rectangles[i] = Rectangle(length, width);
    }

    for (int i = 0; i < numRectangles; ++i) {
        int area = rectangles[i].calculateArea();
        std::cout << "Area of rectangle " << i + 1 << ": " << area << std::endl;
    }

    return 0;
}
