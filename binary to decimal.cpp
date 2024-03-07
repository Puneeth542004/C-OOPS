#include <iostream>
#include <cmath>

class BinaryToOctal {
public:
    BinaryToOctal(long long binary) : binary(binary) {}

    long long convertToOctal() {
        int octalNumber = 0, decimalNumber = 0, i = 0;
        while (binary != 0) {
            int remainder = binary % 10;
            decimalNumber += remainder * pow(2, i);
            ++i;
            binary /= 10;
        }

        i = 1;
        while (decimalNumber != 0) {
            int remainder = decimalNumber % 8;
            octalNumber += remainder * i;
            decimalNumber /= 8;
            i *= 10;
        }

        return octalNumber;
    }

private:
    long long binary;
};

int main() {
    long long binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    BinaryToOctal converter(binary);
    long long octal = converter.convertToOctal();

    std::cout << "Octal equivalent: " << octal << std::endl;

    return 0;
}
