#include <iostream>
using namespace std;

int main() {
    string name;
    
    cout << "Enter your name: ";
    cin >> name; // Takes only one word (stops at space)
    cout << "Hello, " << name << "!" << endl;

    cin.ignore(); // Clear input buffer

    cout << "Enter full name: ";
    getline(cin, name); // Takes full line input
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
