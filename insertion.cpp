#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int& size, int element, int position) {

    if (position < 0 || position > size) {
        cout << "Invalid position." << endl;
        return;
    }

    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[position] = element;
    size++;
}

int main() {
    int size, element, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert the element: ";
    cin >> position;

    insertElement(arr, size, element, position);

    displayArray(arr, size);

    return 0;
}
