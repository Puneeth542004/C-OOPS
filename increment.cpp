#include <iostream>

class Counter {
private:
    int count;

public:
   
    Counter(int initialCount = 0) : count(initialCount) {}

    Counter& operator++() {
        ++count;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }

    void displayCount() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter counter1(5);
    Counter counter2;

    ++counter1;
    counter1.displayCount();

    counter2 = counter1++;
    counter1.displayCount();
    counter2.displayCount();

    return 0;
}
