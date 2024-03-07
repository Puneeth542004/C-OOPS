#include <iostream>
#include <string>

class MyClass {
private:
    int num;
    std::string str;
public:
    MyClass(int num, std::string str) : num(num), str(str) {}

    int getNum() const {
        return num;
    }

    std::string getStr() const {
        return str;
    }
};

int main() {
    MyClass obj(42, "Hello");

    MyClass* ptr = &obj;

    std::cout << "Num: " << ptr->getNum() << std::endl;
    std::cout << "Str: " << ptr->getStr() << std::endl;

    return 0;
}
