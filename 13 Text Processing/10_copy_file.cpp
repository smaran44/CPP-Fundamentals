#include <iostream>
#include <fstream>

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
        outfile.put(ch);
    }

    cout << "Contents of 'input.txt' copied to 'output.txt'." << endl;

    infile.close();
    outfile.close();
    return 0;
}
