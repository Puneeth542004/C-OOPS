#include <iostream>
#include <string>

class MyClass {
private:
    int data;
    std::string message;

public:
    MyClass(int d, const std::string& m) : data(d), message(m) {}

    bool operator==(const MyClass& other) const {
        return (data == other.data && message == other.message);
    }
};

int main() {
    MyClass obj1(42, "Hello");
    MyClass obj2(42, "Hello");
    MyClass obj3(50, "World");

    if (obj1 == obj2) {
        std::cout << "obj1 and obj2 are equal" << std::endl;
    } else {
        std::cout << "obj1 and obj2 are not equal" << std::endl;
    }

    if (obj1 == obj3) {
        std::cout << "obj1 and obj3 are equal" << std::endl;
    } else {
        std::cout << "obj1 and obj3 are not equal" << std::endl;
    }

    return 0;
}
