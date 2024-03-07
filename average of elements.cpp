#include <iostream>
using namespace std;

double averageOfArray(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    double avg = averageOfArray(arr, size);

    cout << "Average of array elements: " << avg << endl;

    return 0;
}
