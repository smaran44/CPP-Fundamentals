#include <iostream>
using namespace std;

int global = 99; // Global variable

// Function modifies the global variable directly
void modifyGlobal() {
    global = 500; // Directly modifying the global variable
}

// Function using Pass by Value (Does NOT modify global)
void passByValue(int x) {
    x = 100; // This only modifies the local copy of x
}

// Function using Pass by Reference (Modifies global)
void passByReference(int &x) {
    x = 100; // This modifies the actual variable passed
}

// Function with Local Variable (No effect on global)
void localScope() {
    int global = 200; // Local variable "shadows" the global variable
    cout << "Inside localScope(), local global = " << global << endl; // Prints 200
}

int main() {
    cout << "Initial global: " << global << endl; // Prints 99

    modifyGlobal();
    cout << "After modifyGlobal(): " << global << endl; // Prints 500

    passByValue(global);
    cout << "After passByValue(global): " << global << endl; // Still 500 (unchanged)

    passByReference(global);
    cout << "After passByReference(global): " << global << endl; // Prints 100

    localScope();
    cout << "After localScope(), global = " << global << endl; // Still 100

    return 0;
}
