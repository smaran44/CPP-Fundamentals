#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int approx = static_cast<int>(pi); // Safe conversion

    cout << "Approximate Pi: " << approx << endl;
    return 0;
}
