#include <iostream>
using namespace std;
bool isHarshad(int number) {
    int sumOfDigits = 0;
    int temp = number;
 while (temp != 0) {
        sumOfDigits += temp % 10;
        temp /= 10;
    }
 return number % sumOfDigits == 0;
}
int main() {
    int number;
cout << "Enter a number: ";
    cin >> number;
 if (isHarshad(number)) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number." << endl;
    }
  return 0;
}
