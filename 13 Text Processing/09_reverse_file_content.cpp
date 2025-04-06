#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Error: Could not open input/output file!" << endl;
        return 1;
    }

    string content((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>());
    reverse(content.begin(), content.end());

    outfile << content;

    cout << "Reversed contents of 'input.txt' written to 'output.txt'." << endl;

    infile.close();
    outfile.close();
    return 0;
}
