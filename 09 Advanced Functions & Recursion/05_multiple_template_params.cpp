#include <iostream>
using namespace std;

// Function template with two different data types
template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "Value 1: " << a << ", Value 2: " << b << endl;
}

int main() {
    display(10, 20.5);   // int and double
    display("Hello", 100); // string and int
    display('A', 3.14);   // char and double

    return 0;
}
