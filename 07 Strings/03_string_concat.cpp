#include <iostream>
using namespace std;

int main() {
    string firstName = "John";
    string lastName = "Doe";

    // Using + operator
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl;

    // Using append()
    string fullName2 = firstName.append(" ").append(lastName);
    cout << "Full Name (append): " << fullName2 << endl;

    return 0;
}
