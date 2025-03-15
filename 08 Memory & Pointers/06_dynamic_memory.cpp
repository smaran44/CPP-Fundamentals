#include <iostream>  // Include input-output stream library
using namespace std; // Use the standard namespace

int main() {
    // Dynamically allocate memory for an integer
    int *ptr = new int;  // 'new' allocates memory in the heap

    // Assign a value to the dynamically allocated memory
    *ptr = 50;  

    // Output the value stored in the allocated memory
    cout << "Dynamically allocated value: " << *ptr << endl;

    // Free the allocated memory to prevent memory leaks
    delete ptr;  // Releases the memory back to the system

    // Set pointer to nullptr to avoid dangling pointer issues
    ptr = nullptr;  

    return 0;  // Return 0 to indicate successful execution
}
