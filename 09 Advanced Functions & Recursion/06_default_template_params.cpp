#include <iostream>
using namespace std;

// Function template with a default type
template <typename T1 = int, typename T2 = double>
void printValues(T1 a = 5, T2 b = 3.14) {
    cout << "Value 1: " << a << ", Value 2: " << b << endl;
}

int main() {
    printValues();      // Uses default int and double values
    printValues(20);    // Uses int = 20, double = default (3.14)
    printValues(7, 8.5); // Uses both custom values

    return 0;
}
