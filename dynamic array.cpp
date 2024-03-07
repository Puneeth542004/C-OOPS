#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    int *dynamicArray = new int[size];

    cout << "Enter elements of the dynamic array: ";
    for (int i = 0; i < size; ++i) {
        cin >> dynamicArray[i];
    }

    cout << "Dynamic array values: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;

    return 0;
}
