#include <iostream>
using namespace std;

// Template function to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;
    cout << "Max of 7.2 and 3.9: " << findMax(7.2, 3.9) << endl;
    cout << "Max of 'A' and 'B': " << findMax('A', 'B') << endl; // Works with characters

    return 0;
}
