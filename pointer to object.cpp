#include <iostream>

class MyClass {
public:
    void printValue() {
        std::cout << "Value: " << value << std::endl;
    }

    void setValue(int val) {
        value = val;
    }

private:
    int value;
};

int main() {
    MyClass obj; 
    obj.setValue(42);
    obj.printValue(); 
    MyClass* ptr = &obj;
    ptr->setValue(99);
    ptr->printValue();

    return 0;
}
