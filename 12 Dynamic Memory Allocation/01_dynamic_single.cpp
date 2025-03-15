#include <iostream>  // Include the iostream library for input and output

int main() {
    int* ptr = new int;  // Dynamically allocate memory for an integer

    *ptr = 42;  // Store the value 42 in the allocated memory
    std::cout << "Value: " << *ptr << std::endl;  // Print the stored value

    delete ptr;  // Deallocate the dynamically allocated memory to prevent memory leaks
    return 0;  // Return 0 to indicate successful execution
}
