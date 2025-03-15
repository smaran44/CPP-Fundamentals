#include <iostream>  // Include input-output stream library
#include <string>    // Include string library for string operations
using namespace std; // Use the standard namespace

int main() {
    // Declare and initialize a string
    string str = "Hello, welcome to C++ programming";

    // Find the position of the substring "C++" in the main string
    size_t pos = str.find("C++");
    //size_t is an unsigned integral type that is used to represent the size of objects in bytes.

    // Check if the substring was found
    if (pos != string::npos) {
        // If found, print its position
        cout << "'C++' found at index: " << pos << endl;
    } else {
        // If not found, print a message
        cout << "'C++' not found" << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
//string::npos is a special constant in C++ that represents "no position" or "not found" when using functions like find() on strings.