#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    MyClass& operator+=(const MyClass& other) {
        value += other.value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    obj1 += obj2;

    std::cout << "Result of adding two objects: " << obj1.getValue() << std::endl;

    return 0;
}
