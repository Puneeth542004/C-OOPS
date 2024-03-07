#include <iostream>
#include <iomanip>
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}
double determineRateOfInterest(bool isSeniorCitizen) {
    return isSeniorCitizen ? 12.0 : 10.0;
}

int main() {
    double principal, time;
    bool isSeniorCitizen;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the time (in years): ";
    std::cin >> time;

    std::cout << "Is the customer a senior citizen? (1 for yes, 0 for no): ";
    std::cin >> isSeniorCitizen;
	 double rate = determineRateOfInterest(isSeniorCitizen);
	 double interest = calculateSimpleInterest(principal, rate, time);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Simple Interest: $" << interest << std::endl;

    return 0;
}
