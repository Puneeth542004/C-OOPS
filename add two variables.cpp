#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() const {
        if (imaginary >= 0)
            std::cout << real << " + " << imaginary << "i" << std::endl;
        else
            std::cout << real << " - " << -imaginary << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 2.0);
    Complex c2(1.5, 4.0);

    Complex sum = c1 + c2;

    std::cout << "Sum of ";
    c1.display();
    std::cout << "and ";
    c2.display();
    std::cout << "is ";
    sum.display();

    return 0;
}
