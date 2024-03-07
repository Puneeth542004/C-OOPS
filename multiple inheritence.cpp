#include <iostream>
class A {
protected:
    int a;

public:
    void setA(int value) {
        a = value;
    }
};
class B {
protected:
    int b;

public:
    void setB(int value) {
        b = value;
    }
};
class C : public A, public B {
protected:
    int c;

public:
    void setC(int value) {
        c = value;
    }

    void displayValues() {
        std::cout << "value of a: " << a << std::endl;
        std::cout << "value of b: " << b << std::endl;
        std::cout << "value of c: " << c << std::endl;
    }
};

int main() {
    C obj;
    obj.setA(100);
    obj.setB(200);
    obj.setC(300);

    obj.displayValues();

    return 0;
}
