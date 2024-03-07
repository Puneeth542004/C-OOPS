#include <iostream>

class Array {
private:
    int* data;
    size_t size;

public:
    Array(size_t s) : size(s) {
        data = new int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

    ~Array() {
        delete[] data;
    }

    int& operator[](size_t index) {
        if (index >= size) {
            std::cerr << "Index out of range" << std::endl;
            return data[0];
        }
        return data[index];
    }

    void display() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array arr(5);

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
 arr.display();
 std::cout << "Accessing element at index 10: " << arr[10] << std::endl;
	 return 0;
}
