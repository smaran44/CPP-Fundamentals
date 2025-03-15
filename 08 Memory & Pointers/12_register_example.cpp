#include <iostream>  // Including the input-output stream library
using namespace std; // Using the standard namespace to avoid prefixing std::

int main() {
    // Declaring a register variable
    register int num = 5; // Hint to store 'num' in a CPU register for faster access (may be ignored by modern compilers)

    // Printing the value of the register variable
    cout << "Register Variable: " << num << endl;

    return 0; // Returning 0 to indicate successful execution
}
