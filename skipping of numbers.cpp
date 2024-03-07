#include <iostream>

class Number {
public:
    Number(int start) : num(start) {}

    void printNumber() const {
        std::cout << num << " ";
    }
    void incrementNumber(int step) {
        num += step;
    }

protected:
    int num; 
};

class Skipper : public Number {
public:
    Skipper(int start) : Number(start) {}
    void printNumbers(int end, int skip) {
        while (num <= end) {
            printNumber();
            incrementNumber(skip);
        }
        std::cout << std::endl;
    }
};

int main() {
    int start, end, skip;
    std::cout << "Enter the starting number (M): ";
    std::cin >> start;
    std::cout << "Enter the ending number (N): ";
    std::cin >> end;
    std::cout << "Enter the number of numbers to skip (K): ";
    std::cin >> skip;
    Skipper skipper(start);
    skipper.printNumbers(end, skip);

    return 0;
}
