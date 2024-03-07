#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter the number whose multiplication table you want to print: ";
    cin >> number;

    cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}
