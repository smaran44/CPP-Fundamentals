#include <iostream>
using namespace std;

int main() {
    string str = "Hello World";

    string sub1 = str.substr(0, 5); // Extracts "Hello"
    string sub2 = str.substr(6);    // Extracts "World"

    cout << "Substring 1: " << sub1 << endl;
    cout << "Substring 2: " << sub2 << endl;

    return 0;
}
