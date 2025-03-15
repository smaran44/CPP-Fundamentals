#include <iostream>   // Include iostream for input-output operations
#include <fstream>    // Include fstream for file handling (reading/writing files)
#include <string>     // Include string for handling text lines

int main() {
    std::ifstream file("output.txt");  // Open the file "output.txt" for reading
    std::string line;                  // Variable to store each line read from the file

    // Check if the file opened successfully
    if (file.is_open()) {
        // Read the file line by line until the end
        while (getline(file, line)) {  // Read a line from the file
            std::cout << line << std::endl;  // Print each line to the console
        }
    } else {
        // Display an error message if the file couldn't be opened
        std::cerr << "Error opening file for reading!" << std::endl;
    }

    file.close();  // Close the file to free resources
    return 0;  // Indicate successful program execution
}
