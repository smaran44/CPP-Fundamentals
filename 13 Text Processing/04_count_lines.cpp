#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("input.txt");  // Open the file in read mode

    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    char ch;
    int line_count = 0;

    while (file.get(ch)) {
        if (ch == '\n') {
            line_count++;  // Increment count for each newline character
        }
    }

    cout << "Total Lines: " << line_count << endl;

    file.close();  // Close the file
    return 0;
}
