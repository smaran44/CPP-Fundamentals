#include <iostream>  // Include iostream for input and output

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;  // Take input for the number of rows and columns

    // Dynamically allocate memory for a 2D array
    int** arr = new int*[rows];  // Allocate memory for row pointers
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];  // Allocate memory for each row
    }

    // Input values into the matrix
    std::cout << "Enter matrix values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr[i][j];  // Store values in the matrix
        }
    }

    // Print the matrix
    std::cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";  // Print each element
        }
        std::cout << std::endl;  // Move to the next line after each row
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // Deallocate each row
    }
    delete[] arr;  // Deallocate the array of row pointers

    return 0;  // Return 0 to indicate successful execution
}
