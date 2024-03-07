#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for the diamond pattern (must be odd): ";
    cin >> rows;
    if (rows % 2 == 0) {
        cout << "Number of rows must be odd." << endl;
        return 1;
    }
    for (int i = 1; i <= rows; i += 2) {   
        for (int j = 0; j < (rows - i) / 2; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows - 2; i >= 1; i -= 2) {
     
        for (int j = 0; j < (rows - i) / 2; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}