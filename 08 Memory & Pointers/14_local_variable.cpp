#include <iostream>
using namespace std;

// Function using Pass by Value (Does NOT modify original local variable)
void passByValue(int x) {
    x = 100;  // Modifies only the local copy of x
}

// Function using Pass by Reference (Modifies original variable)
void passByReference(int &x) {
    x = 100;  // Modifies the actual variable passed
}

// Function using Pass by Pointer (Modifies original variable)
void passByPointer(int *x) {
    *x = 99;  // Dereference pointer to modify actual value
}

// Function to test local scope
void localScope() {
    int localVar = 50;  // Local variable inside localScope()
    cout << "Inside localScope(), localVar = " << localVar << endl; // Prints 50
}

// Function to modify local variable using reference
void modifyLocal(int &localVar) {
    localVar = 200;  // Modifies the actual variable passed
}

int main() {
    int localVar = 10;  // Local variable in main()

    cout << "Initial localVar: " << localVar << endl; // Prints 10

    passByValue(localVar);
    cout << "After passByValue(localVar): " << localVar << endl; // Still 10 (unchanged)

    passByReference(localVar);
    cout << "After passByReference(localVar): " << localVar << endl; // Prints 100

    passByPointer(&localVar);
    cout << "After passByPointer(localVar): " << localVar << endl; // Prints 99

    localScope(); // Calls localScope(), but its localVar is separate
    cout << "After localScope(), localVar in main() = " << localVar << endl; // Still 100

    modifyLocal(localVar);
    cout << "After modifyLocal(localVar): " << localVar << endl; // Prints 200

    return 0;
}
