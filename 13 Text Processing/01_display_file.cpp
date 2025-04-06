#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("input.txt");

    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
    cout << endl;

    file.close();
    return 0;
}
