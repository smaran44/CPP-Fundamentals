#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
//The template <typename T> statement allows us to create generic functions or generic classes that can work with any data type.

int main() {
    int x = 10, y = 20;
    double p = 5.5, q = 8.8;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    cout << "Before swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    return 0;
}

/*Pass by Reference (&) ensures that the function works directly on the original variables instead of creating copies.
If we use pass by value (T a, T b), swapping would only occur inside the function, and the original values would remain unchanged.*/
