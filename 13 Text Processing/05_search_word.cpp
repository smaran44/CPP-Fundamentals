#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define PATTERN "it"  // Word to search for

// Function to check if a word exists in a line
bool containsWord(const string& line, const string& word) {
    return line.find(word) != string::npos;
}

int main() {
    ifstream file("input.txt");  // Open the file in read mode

    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    string line;
    int found = 0;

    while (getline(file, line)) {
        if (containsWord(line, PATTERN)) {
            cout << line << endl;  // Print matching line
            found++;
        }
    }

    if (found == 0) {
        cout << "No matching lines found." << endl;
    }

    file.close();  // Close the file
    return 0;
}
