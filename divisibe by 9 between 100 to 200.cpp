#include <iostream>

class DivisibleByNine {
public:
    DivisibleByNine() : count(0), sum(0) {
        std::cout << "Searching for numbers divisible by 9 between 100 and 200..." << std::endl;
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                ++count;
                sum += i;
            }
        }
    }

    ~DivisibleByNine() {
        std::cout << "Number of integers divisible by 9 between 100 and 200: " << count << std::endl;
        std::cout << "Sum of integers divisible by 9 between 100 and 200: " << sum << std::endl;
    }

private:
    int count; 
    int sum;   
};

int main() {
    DivisibleByNine divisibleByNine;

    return 0;
}
