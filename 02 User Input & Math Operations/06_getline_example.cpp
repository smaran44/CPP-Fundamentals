#include <iostream>
using namespace std;

int main() {
    string fullName;
    
    cout << "Enter your full name: ";
    cin.ignore();  // Clears the input buffer (use if `cin` was used before)
    getline(cin, fullName);  // Reads the full line including spaces

    cout << "Hello, " << fullName << "!" << endl;
    return 0;
}
//If we don't use cin.ignore() before calling getline(cin, variable), it can cause unexpected behavior