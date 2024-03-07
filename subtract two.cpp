#include <iostream>

class Subtract {
private:
    int value;

public:
   
    Subtract(int val) : value(val) {}

    Subtract operator-(const Subtract& other) const {
        return Subtract(value - other.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    
    Subtract sub1(10);
    Subtract sub2(5);

    Subtract result = sub1 - sub2;

    std::cout << "Result of subtracting " << sub2.getValue() << " from " << sub1.getValue() << " is " << result.getValue() << std::endl;

    return 0;
}
