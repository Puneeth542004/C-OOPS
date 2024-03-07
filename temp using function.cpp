#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char choice;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    std::cout << "Choose conversion:\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cin >> choice;

    switch (choice) {
        case '1':
            std::cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << std::endl;
            break;
        case '2':
            std::cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please choose 1 or 2." << std::endl;
    }

    return 0;
}
