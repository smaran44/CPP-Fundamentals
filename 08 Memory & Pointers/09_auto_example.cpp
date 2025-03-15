#include <iostream>  // Including the input-output stream library
using namespace std; // Using the standard namespace to avoid prefixing std::

int main() {
    // Using 'auto' keyword, which allows the compiler to automatically deduce the variable type
    auto num = 10;   // Type is deduced as int (integer)
    auto pi = 3.14;  // Type is deduced as double (floating-point number)

    // Printing the values of num and pi
    cout << "Num: " << num << ", Pi: " << pi << endl;

    return 0; // Returning 0 to indicate successful execution
}
