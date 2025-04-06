#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define PATTERN "it"  // Word to count

// Function to count how many times the word appears in a line
int countWordOccurrences(const string& line, const string& word) {
    int count = 0;
    size_t pos = 0;

    while ((pos = line.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();  // Move past the found word
    }

    return count;
}

int main() {
    ifstream file("input.txt");  // Open the file in read mode

    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    string line;
    int total_count = 0;

    while (getline(file, line)) {
        total_count += countWordOccurrences(line, PATTERN);
    }

    cout << "The word '" << PATTERN << "' appears " << total_count << " times in the file." << endl;

    file.close();  // Close the file
    return 0;
}
