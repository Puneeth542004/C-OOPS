#include <iostream>
#include <string>

class ReverseNumber {
public:
    ReverseNumber() : number(0) {}
    ReverseNumber(int num) : number(num) {}
	 int reverse() {
        int reversed = 0;
        int temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        return reversed;
    }

private:
    int number;
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    ReverseNumber reverseNumber(num);
    int reversed = reverseNumber.reverse();

    std::cout << "Reverse of " << num << " is: " << reversed << std::endl;

    return 0;
}
