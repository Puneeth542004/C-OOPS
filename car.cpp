#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:

    Car(const std::string& carMake, const std::string& carModel, int carYear) : make(carMake), model(carModel), year(carYear) {
        std::cout << "Car object created for " << make << " " << model << " (" << year << ")" << std::endl;
    }

    ~Car() {
        std::cout << "Car object destroyed for " << make << " " << model << " (" << year << ")" << std::endl;
    }

    void displayInfo() {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {

    Car car1("Toyota", "Corolla", 2018);
    Car car2("Honda", "Civic", 2020);

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
