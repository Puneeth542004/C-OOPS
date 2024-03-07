#include <iostream>
using namespace std;
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position." << endl;
        return;
    }
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--;
}
int main() {
    int size, position;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the position of the element to delete: ";
    cin >> position;
    deleteElement(arr, size, position);
    displayArray(arr, size);
    return 0;
}