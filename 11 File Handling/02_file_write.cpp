#include <iostream>   // Include iostream for console input and output
#include <fstream>    // Include fstream for file handling

int main() {
    // Create an output file stream and open "output.txt" for writing
    std::ofstream file("output.txt");

    // Check if the file opened successfully
    if (file.is_open()) {
        // Write text into the file
        file << "Hello, this is a test file!" << std::endl;
        file << "C++ File I/O is easy to learn." << std::endl;

        // Display success message on the console
        std::cout << "Data written to file successfully!" << std::endl;
    } else {
        // Display an error message if the file couldn't be opened
        std::cerr << "Error opening file for writing!" << std::endl;
        // cerr is used for standard error output
    }

    // Close the file to ensure data is saved and resources are released
    file.close();  

    return 0;  // Indicate successful execution
}

