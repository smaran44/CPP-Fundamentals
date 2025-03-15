#include <iostream>
using namespace std;

int main() {
    double x = 5.7;
    int y = (int)x;  // Explicit conversion

    cout << "Original (double): " << x << endl;
    cout << "Converted (int): " << y << endl;  // Outputs 5 (decimal lost)

    return 0;
}
