#include <iostream>  // Including the input-output stream library
using namespace std; // Using the standard namespace to avoid prefixing std::

// Declaration of an external variable (defined in another file)
extern int globalVar;

int main() {
    // Accessing and printing the external variable
    cout << "Global Variable: " << globalVar << endl;

    return 0; // Returning 0 to indicate successful execution
}

int globalVar = 42;
