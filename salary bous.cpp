#include <iostream>
class Person {
protected:
    std::string name;
    int age;

public:
    void getData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    virtual double calculateBonus() = 0; 
};
class Account : public Person {
protected:
    double salary;

public:
    void getData() {
        Person::getData(); 
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void displayData() {
        Person::displayData();
        std::cout << "Salary: " << salary << std::endl;
    }

    double calculateBonus() override {
        return 0.05 * salary; 
    }
};
class Admin : public Person {
protected:
    double salary;

public:
    void getData() {
        Person::getData(); 
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void displayData() {
        Person::displayData(); 
        std::cout << "Salary: " << salary << std::endl;
    }

    double calculateBonus() override {
        return 0.07 * salary; 
    }
};
class Master : public Admin, public Account {
public:
    void getData() {
        std::cout << "Enter Master's information:" << std::endl;
        Admin::getData(); 
        Account::getData(); 
    }

    void displayData() {
        std::cout << "Master's information:" << std::endl;
        Admin::displayData();
        Account::displayData(); 
    }

    double calculateBonus() override {
        return Admin::calculateBonus() + Account::calculateBonus();
    }
};

int main() {
    Master master;

    master.getData();

    std::cout << "\nMaster's information with bonus:" << std::endl;
    master.displayData();
    std::cout << "Total Bonus: $" << master.calculateBonus() << std::endl;

    return 0;
}
