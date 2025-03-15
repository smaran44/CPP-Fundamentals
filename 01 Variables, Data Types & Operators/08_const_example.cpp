#include <iostream>
using namespace std;

int main() {
    const int MAX_AGE = 100; // Constant integer
    cout << "Max allowed age: " << MAX_AGE << endl;

    // MAX_AGE = 120; // ❌ Error: Cannot modify a constant

    return 0;
}
