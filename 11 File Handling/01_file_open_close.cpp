#include <iostream>   // Include iostream for input-output operations
#include <fstream>    // Include fstream for file handling

int main() {
    std::ofstream file;  // Create an output file stream object

    // Open a file named "example.txt" for writing
    file.open("example.txt");  

    // Check if the file opened successfully
    if (file.is_open()) {  
        std::cout << "File opened successfully!" << std::endl;
    } else {
        std::cerr << "Error opening file!" << std::endl; // Display error message if file opening fails
        // cerr is used for standard error output
    }

    file.close();  // Close the file to release resources
    return 0; // Return 0 to indicate successful execution
}

/*  Class	             Purpose	                Header File
  ifstream	Input file stream (for reading files)	<fstream>
  ofstream	Output file stream (for writing files)	<fstream>
  fstream	Both input and output operations	    <fstream>*/