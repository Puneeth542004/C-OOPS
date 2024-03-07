#include <iostream>
#include <string>

class Person {
public:
    virtual void greet() const {
        std::cout << "Hello, I am a person." << std::endl;
    }
};

class Student : public Person {
public:
    void greet() const override {
        std::cout << "Hello, I am a student." << std::endl;
    }
};

class Teacher : public Person {
public:
    void greet() const override {
        std::cout << "Hello, I am a teacher." << std::endl;
    }
};

int main() {
    Person person;
    Student student;
    Teacher teacher;

    person.greet();  
    student.greet();  
    teacher.greet(); 

    return 0;
}
