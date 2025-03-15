#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    // Taking input for sides
    cout << "Enter side A: ";
    cin >> a;
    
    cout << "Enter side B: ";
    cin >> b;

    // Calculating hypotenuse
    c = sqrt(pow(a, 2) + pow(b, 2));

    // Display result
    cout << "The hypotenuse is: " << c << endl;

    return 0;
}
