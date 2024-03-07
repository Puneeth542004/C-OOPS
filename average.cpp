#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    float average;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;
    average = (num1 + num2 + num3) / 3.0;
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << endl;

    return 0;
}
