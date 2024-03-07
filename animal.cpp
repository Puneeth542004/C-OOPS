#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(string name, string species, int age)
        : name(name), species(species), age(age) {}

    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setSpecies(string species) {
        this->species = species;
    }

    string getSpecies() const {
        return species;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() const {
        return age;
    }
};

class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(string name, string species, int age, string color, string breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    void setColor(string color) {
        this->color = color;
    }

    string getColor() const {
        return color;
    }

    void setBreed(string breed) {
        this->breed = breed;
    }

    string getBreed() const {
        return breed;
    }
};

class Dog : public Animal {
private:
    double weight;
    string breed;
public:
    Dog(string name, string species, int age, double weight, string breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    void setWeight(double weight) {
        this->weight = weight;
    }

    double getWeight() const {
        return weight;
    }

    void setBreed(string breed) {
        this->breed = breed;
    }

    string getBreed() const {
        return breed;
    }
};

int main() {
    Cat cat("Whiskers", "Cat", 3, "Gray", "Persian");
    cout << "Cat Name: " << cat.getName() << endl;
    cout << "Cat Species: " << cat.getSpecies() << endl;
    cout << "Cat Age: " << cat.getAge() << endl;
    cout << "Cat Color: " << cat.getColor() << endl;
    cout << "Cat Breed: " << cat.getBreed() << endl;

    Dog dog("Buddy", "Dog", 5, 20.5, "Labrador");
    cout << "\nDog Name: " << dog.getName() << endl;
    cout << "Dog Species: " << dog.getSpecies() << endl;
    cout << "Dog Age: " << dog.getAge() << endl;
    cout << "Dog Weight: " << dog.getWeight() << " lbs" << endl;
    cout << "Dog Breed: " << dog.getBreed() << endl;

    return 0;
}
