#include <iostream>  // Include the iostream library for input and output

int main() {
    int size;  
    std::cout << "Enter array size: ";  
    std::cin >> size;  // Take user input for the array size

    int* arr = new int[size];  // Dynamically allocate memory for an array of given size

    // Store values in the dynamically allocated array
    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];  // Input values into the array
    }

    // Print the stored values
    std::cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";  // Output array elements
    }

    delete[] arr;  // Deallocate the dynamically allocated array to free memory
    return 0;  // Return 0 to indicate successful execution
}
