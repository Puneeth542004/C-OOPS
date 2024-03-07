#include <iostream>
class A {
private:
    int x; 

public:
    A(int value) : x(value) {} 
    int getX() const {
        return x;
    }
};
class B : private A {
public:
    B(int value) : A(value) {} 
    void displayX() {
        std::cout << "value of x: " << getX() << std::endl; 
    }
};

int main() {
    B obj(10); 

    obj.displayX(); 

    return 0;
}
