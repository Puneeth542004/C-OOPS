#include <iostream>
#include <cmath> // For using floor and ceil functions

using namespace std;

int main() {
    float floatingNum;
    
    // Read a floating-point number from the user
    cout << "Enter a floating-point number: ";
    cin >> floatingNum;
    
    // Round the floating-point number using floor and ceil functions
    int roundedDown = floor(floatingNum);
    int roundedUp = ceil(floatingNum);
    
    // Display the rounded values
    cout << "Rounded down: " << roundedDown << endl;
    cout << "Rounded up: " << roundedUp << endl;

    return 0;
}
