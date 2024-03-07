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
    Person *person = new Person();
    Person *student = new Student();
    Person *teacher = new Teacher();

    person->greet();   
    student->greet();  
    teacher->greet();  

    delete person;
    delete student;
    delete teacher;

    return 0;
}
