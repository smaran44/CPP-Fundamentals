#include <iostream>
using namespace std;

int main() {
    int x = 10;
    double y = x;  // int is automatically converted to double

    cout << "Integer: " << x << endl;
    cout << "Double: " << y << endl;  // Outputs 10.0

    return 0;
}
