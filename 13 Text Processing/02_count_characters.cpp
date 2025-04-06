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
    int count = 0;

    while (file.get(ch)) {
        count++;  // Increment character count for each character read
    }

    cout << "Total Characters: " << count << endl;

    file.close();  // Close the file
    return 0;
}
