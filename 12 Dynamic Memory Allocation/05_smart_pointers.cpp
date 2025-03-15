#include <iostream>  // Include iostream for input and output
#include <memory>    // Include smart pointer library to use unique_ptr

int main() {
    // Allocate memory using a unique_ptr and initialize the value to 10
    // std::make_unique<int>(10) creates a unique_ptr that points to an int with value 10
    std::unique_ptr<int> ptr = std::make_unique<int>(10);  

    // Dereference the unique_ptr (*ptr) to access the value and print it
    std::cout << "Value: " << *ptr << std::endl;  // Output: "Value: 10"

    // Memory is automatically deallocated when 'ptr' goes out of scope at the end of main
    return 0;  // No need to explicitly delete memory, unique_ptr handles it automatically
}
