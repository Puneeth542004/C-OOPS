#include <iostream>
using namespace std;
void printMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    cout << "Printing default message: ";
    printMessage();

    cout << "Printing custom message: ";
    printMessage("This is a custom message.");

    return 0;
}
