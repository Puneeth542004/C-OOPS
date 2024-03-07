#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    int originalNumber = n;
    while (n != 0) {
        int digit = n % 10; 
        sum += digit; 
        n /= 10; 
    }

    cout << "Sum of digits of " << originalNumber << " = " << sum << endl;

    return 0;
}
