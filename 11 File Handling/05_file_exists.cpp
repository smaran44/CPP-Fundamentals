#include <iostream>   // Include iostream for standard input-output
#include <fstream>    // Include fstream for file handling

// Function to check if a file exists
bool fileExists(const std::string& filename) {
    std::ifstream file(filename);  // Try to open the file in read mode
    return file.good();  // Returns true if the file exists and can be opened
}

int main() {
    std::string filename = "output.txt";  // Specify the file name to check

    // Check if the file exists using the fileExists function
    if (fileExists(filename)) {
        std::cout << "File exists!" << std::endl;
    } else {
        std::cout << "File does not exist!" << std::endl;
    }

    return 0;  // Exit the program successfully
}
