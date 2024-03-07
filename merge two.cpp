#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int index = 0;

    for (int i = 0; i < size1; ++i) {
        mergedArr[index++] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        mergedArr[index++] = arr2[i];
    }
}

void displayArray(int arr[], int size) {
    cout << "Merged array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    int arr1[size1];

    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int arr2[size2];

    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;

    int mergedArr[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    displayArray(mergedArr, mergedSize);

    return 0;
}
