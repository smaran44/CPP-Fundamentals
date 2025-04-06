#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Error: Could not open input/output file!" << endl;
        return 1;
    }

    char ch;
    while (infile.get(ch)) {
        outfile.put(toupper(ch));
    }

    cout << "Contents of 'input.txt' converted to uppercase and saved in 'output.txt'." << endl;

    infile.close();
    outfile.close();
    return 0;
}
