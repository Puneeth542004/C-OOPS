#include <iostream>

class RightAngleTriangle {
public:
    RightAngleTriangle() : rows(0) {}

    RightAngleTriangle(int rows) : rows(rows) {}
    RightAngleTriangle(int rows, int num) : rows(rows), num(num) {}
    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    int rows; 
    int num;  
};

int main() {
    int rows, num;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number to repeat: ";
    std::cin >> num;

    RightAngleTriangle triangle(rows, num);
    triangle.printPattern();

    return 0;
}
