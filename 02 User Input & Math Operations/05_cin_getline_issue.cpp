#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;  
    cin.ignore();  // Ignore the newline left by cin

    cout << "Enter your full name: ";
    getline(cin, name);  // Reads full name

    cout << "Name: " << name << ", Age: " << age << endl;
    return 0;
}
//If we don't use cin.ignore() before calling getline(cin, variable), it can cause unexpected behavior.