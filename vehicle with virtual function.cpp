#include <iostream>

class Vehicle {
public:
    virtual void drive() const {
        std::cout << "Vehicle is being driven." << std::endl;
    }
};

class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Car is being driven." << std::endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() const override {
        std::cout << "Truck is being driven." << std::endl;
    }
};

int main() {
    Vehicle* vehicle = new Vehicle();
    Vehicle* car = new Car();
    Vehicle* truck = new Truck();

    vehicle->drive();  
    car->drive();     
    truck->drive();    

    delete vehicle;
    delete car;
    delete truck;

    return 0;
}
