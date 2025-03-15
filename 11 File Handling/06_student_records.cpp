#include <iostream>
#include <fstream>

int main() {
    std::string name;
    int age;

    // Writing to file
    std::ofstream outFile("students.txt", std::ios::app);  // Open file in append mode
    if (!outFile) {  // Check if file opened successfully
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Taking user input
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);  // Read full name including spaces
    std::cout << "Enter age: ";
    std::cin >> age;  // Read integer age

    outFile << name << " " << age << std::endl;  // Write name and age to file
    outFile.close();  // Close the file after writing

    // Reading from file
    std::ifstream inFile("students.txt");  // Open file for reading
    if (!inFile) {  // Check if file opened successfully
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    inFile.close();  // Close the file after reading
    return 0;  // Exit program successfully
}

