#include <iostream>
#include <string>

class MyClass {
private:
    int data;
    std::string message;

public:

    MyClass(int d, const std::string& m) : data(d), message(m) {}

    friend std::ostream& operator<<(std::ostream& out, const MyClass& obj) {
        out << "Data: " << obj.data << ", Message: " << obj.message;
        return out;
    }
};

int main() {
    MyClass obj(42, "Hello, world!");

    std::cout << obj << std::endl;

    return 0;
}
