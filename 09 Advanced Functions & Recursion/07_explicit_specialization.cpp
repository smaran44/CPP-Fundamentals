#include <iostream>
using namespace std;

// Generic template
template <typename T>
void show(T value) {
    cout << "General template: " << value << endl;
}

// Specialized version for strings
template <>
void show<string>(string value) {
    cout << "String specialization: " << value << " (length: " << value.length() << ")" << endl;
}

int main() {
    show(10);          // Calls general template
    show(3.14);        // Calls general template
    show("Hello");     // Calls specialized template for strings

    return 0;
}
