#include <iostream>

class SeriesSum {
public:
    SeriesSum() : n(0) {}
    SeriesSum(int n) : n(n) {}
	 SeriesSum(int start, int end) {
        this->start = start;
        this->end = end;
        n = end - start + 1;
    }
	int calculateSum() {
        return (n * (start + end)) / 2;
    }

private:
    int start; 
    int end;   
    int n;    
};

int main() {
    int start, end;
    std::cout << "Enter the starting term of the series: ";
    std::cin >> start;
    std::cout << "Enter the ending term of the series: ";
    std::cin >> end;

    SeriesSum series(start, end);
    int sum = series.calculateSum();

    std::cout << "Sum of the series from " << start << " to " << end << " is: " << sum << std::endl;

    return 0;
}
