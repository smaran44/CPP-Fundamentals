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
    bool in_word = false;
    int word_count = 0;

    // Read characters one by one until end of file
    while (file.get(ch)) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = false;  // We're not inside a word
        } else if (!in_word) {
            in_word = true;   // Start of a new word
            word_count++;     // Increment word count
        }
    }

    cout << "Total Words: " << word_count << endl;

    file.close();  // Close the file
    return 0;
}
