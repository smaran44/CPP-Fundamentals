#include <iostream>  // Including the input-output stream library
using namespace std; // Using the standard namespace to avoid prefixing std::

// Using typedef to define a new type alias for unsigned int
typedef unsigned int uint;

// Using 'using' keyword to define a type alias for int
using age_t = int;

int main() {
    uint x = 42;     // Declaring an unsigned integer variable using typedef alias
    age_t age = 20;  // Declaring an integer variable using 'using' alias

    // Printing the values of x and age
    cout << "Unsigned Int (uint): " << x << endl;
    cout << "Age: " << age << endl;

    return 0; // Returning 0 to indicate successful execution
}
