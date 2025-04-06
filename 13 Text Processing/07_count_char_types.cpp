#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream file("input.txt");

    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    char ch;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    while (file.get(ch)) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (!isspace(ch)) {
            special++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << special << endl;

    file.close();
    return 0;
}
