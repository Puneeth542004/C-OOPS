#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = celsiusToFahrenheit(celsius);

    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;

    return 0;
}
