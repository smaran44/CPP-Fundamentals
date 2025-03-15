#include <iostream>
#include <cctype> // For toupper() and tolower()
using namespace std;

int main() {
    string text = "Hello World";

    // Convert to uppercase
    for (char &c : text) {
        c = toupper(c);
    }
    cout << "Uppercase: " << text << endl;

    // Convert to lowercase
    for (char &c : text) {
        c = tolower(c);
    }
    cout << "Lowercase: " << text << endl;

    return 0;
}
