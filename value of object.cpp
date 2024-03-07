#include <iostream>

class MyClass {
public:
    void setX(int x) {
        this->x = x; 
    }

    int getX() {
        return this->x; 
    }

    void printAddress() {
        std::cout << "Address of current object: " << this << std::endl; 
    }

private:
    int x;
};

int main() {
    MyClass obj;
    obj.setX(42);

    std::cout << "Value of x: " << obj.getX() << std::endl;

    obj.printAddress();

    return 0;
}
