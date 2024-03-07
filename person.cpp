#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;
public:
    Person(string name, int age, char gender)
        : name(name), age(age), gender(gender) {}

    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() const {
        return age;
    }

    void setGender(char gender) {
        this->gender = gender;
    }

    char getGender() const {
        return gender;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string className;
public:
    Student(string name, int age, char gender, int rollNumber, string className)
        : Person(name, age, gender), rollNumber(rollNumber), className(className) {}

    void setRollNumber(int rollNumber) {
        this->rollNumber = rollNumber;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    void setClassName(string className) {
        this->className = className;
    }

    string getClassName() const {
        return className;
    }
};

class Teacher : public Person {
private:
    string subject;
    double salary;
public:
    Teacher(string name, int age, char gender, string subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}

    void setSubject(string subject) {
        this->subject = subject;
    }

    string getSubject() const {
        return subject;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    Student student("Alice", 18, 'F', 101, "Grade 10");
    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Age: " << student.getAge() << endl;
    cout << "Student Gender: " << student.getGender() << endl;
    cout << "Student Roll Number: " << student.getRollNumber() << endl;
    cout << "Student Class: " << student.getClassName() << endl;

    Teacher teacher("Mr. Smith", 35, 'M', "Mathematics", 50000);
    cout << "\nTeacher Name: " << teacher.getName() << endl;
    cout << "Teacher Age: " << teacher.getAge() << endl;
    cout << "Teacher Gender: " << teacher.getGender() << endl;
    cout << "Teacher Subject: " << teacher.getSubject() << endl;
    cout << "Teacher Salary: $" << teacher.getSalary() << endl;

    return 0;
}
