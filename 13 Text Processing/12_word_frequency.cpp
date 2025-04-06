#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

// Helper function to convert a string to lowercase
string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Helper function to remove punctuation from a word
string cleanWord(const string& word) {
    string cleaned;
    for (char ch : word) {
        if (isalnum(ch)) cleaned += ch;
    }
    return cleaned;
}

int main() {
    ifstream infile("input.txt");

    if (!infile.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    map<string, int> wordCount;
    string line;

    while (getline(infile, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) {
            word = toLowerCase(cleanWord(word));
            if (!word.empty()) {
                wordCount[word]++;
            }
        }
    }

    cout << "Word Frequencies:\n";
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    infile.close();
    return 0;
}
