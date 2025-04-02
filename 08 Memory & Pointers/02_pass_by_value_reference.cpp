#include <iostream>
using namespace std;

int global = 99; // Global variable

// Pass by Value (does not modify original variable)
void passByValue(int x) {
    x = 100;
}

// Pass by Reference (modifies original variable)
void passByReference(int &x) {
    x = 100;
}

int main() {
    int num = 10;

    passByValue(num);
    cout << "After pass by value: " << num << endl; // num remains 10

    passByReference(num);
    cout << "After pass by reference: " << num << endl; // num changes to 100

    passByValue(global); // Pass global variable by value
    cout << "Global variable after pass by value: " << global << endl; // global remains 99
    
    passByReference(global); // Pass global variable by reference
    cout << "Global variable after pass by reference: " << global << endl; // global changes to 100

    return 0;
}
