#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("input.txt");

    if (!infile.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    string line, longest_line;
    size_t max_length = 0;

    while (getline(infile, line)) {
        if (line.length() > max_length) {
            max_length = line.length();
            longest_line = line;
        }
    }

    if (max_length > 0) {
        cout << "Longest Line (" << max_length << " characters):\n" << longest_line << endl;
    } else {
        cout << "File is empty or no lines found." << endl;
    }

    infile.close();
    return 0;
}
