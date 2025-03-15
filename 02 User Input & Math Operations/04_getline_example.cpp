//To read a full sentence, use getline().
#include <iostream>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);  // Reads full line
    cout << "Hello, " << fullName << "!" << endl;
    return 0;
}
