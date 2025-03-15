#include <iostream>   // Include iostream for input-output operations
#include <fstream>    // Include fstream for file handling (reading/writing files)

int main() {
    // Open "output.txt" in append mode (std::ios::app ensures new content is added to the file without overwriting existing data)
    std::ofstream file("output.txt", std::ios::app);

    // Check if the file opened successfully
    if (file.is_open()) {
        file << "This line is appended!" << std::endl;  // Append a new line to the file
        std::cout << "Data appended to file!" << std::endl;  // Notify user of success
    } else {
        std::cerr << "Error opening file for appending!" << std::endl;  // Error message if file opening fails
    }

    file.close();  // Close the file to free resources
    return 0;  // Indicate successful execution
}

