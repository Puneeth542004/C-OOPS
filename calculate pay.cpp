#include <iostream>

class Employee {
public:
    virtual double calculatePay() const = 0;
};

class Manager : public Employee {
public:
    double calculatePay() const override {
        return 5000.0; 
    }
};

class Engineer : public Employee {
public:
    double calculatePay() const override {
        return 4000.0; 
    }
};

int main() {
    Employee *manager = new Manager();
    Employee *engineer = new Engineer();

    std::cout << "Manager's pay: $" << manager->calculatePay() << std::endl;
    std::cout << "Engineer's pay: $" << engineer->calculatePay() << std::endl;

    delete manager;
    delete engineer;

    return 0;
}
