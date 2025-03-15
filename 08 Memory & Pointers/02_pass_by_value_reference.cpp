#include <iostream>
using namespace std;

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

    return 0;
}
