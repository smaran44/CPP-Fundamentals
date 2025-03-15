#include <iostream>  // Including the input-output stream library
using namespace std; // Using the standard namespace to avoid prefixing std::

void counterFunction() {
    static int count = 0; // Static variable retains its value between function calls
    int _count = 0;
    count++;  // Increment the count variable
    _count++;
    cout << "Count: " << count << endl; // Print the current value of count
    cout << "_Count: " << _count << endl; // Print the current value of _count
}

int main() {
    // Calling counterFunction multiple times to demonstrate static variable behavior
    counterFunction(); // First call, count becomes 1
    counterFunction(); // Second call, count becomes 2
    counterFunction(); // Third call, count becomes 3

    return 0; // Returning 0 to indicate successful execution
}
