#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string make, string model, int year) : make(make), model(model), year(year) {}

    void setMake(string make) {
        this->make = make;
    }

    string getMake() const {
        return make;
    }

    void setModel(string model) {
        this->model = model;
    }

    string getModel() const {
        return model;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getYear() const {
        return year;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;
public:
    Car(string make, string model, int year, int seatingCapacity, string fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    void setSeatingCapacity(int capacity) {
        seatingCapacity = capacity;
    }

    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    void setFuelType(string fuelType) {
        this->fuelType = fuelType;
    }

    string getFuelType() const {
        return fuelType;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;
public:
    Truck(string make, string model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    void setPayloadCapacity(int capacity) {
        payloadCapacity = capacity;
    }

    int getPayloadCapacity() const {
        return payloadCapacity;
    }

    void setTowingCapacity(int capacity) {
        towingCapacity = capacity;
    }

    int getTowingCapacity() const {
        return towingCapacity;
    }
};

int main() {
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    car.setYear(2023);
    cout << "Car Make: " << car.getMake() << endl;
    cout << "Car Model: " << car.getModel() << endl;
    cout << "Car Year: " << car.getYear() << endl;
    cout << "Car Seating Capacity: " << car.getSeatingCapacity() << endl;
    cout << "Car Fuel Type: " << car.getFuelType() << endl;

    Truck truck("Ford", "F-150", 2020, 2000, 10000);
    truck.setModel("F-250");
    cout << "\nTruck Make: " << truck.getMake() << endl;
    cout << "Truck Model: " << truck.getModel() << endl;
    cout << "Truck Year: " << truck.getYear() << endl;
    cout << "Truck Payload Capacity: " << truck.getPayloadCapacity() << " lbs" << endl;
    cout << "Truck Towing Capacity: " << truck.getTowingCapacity() << " lbs" << endl;

    return 0;
}
