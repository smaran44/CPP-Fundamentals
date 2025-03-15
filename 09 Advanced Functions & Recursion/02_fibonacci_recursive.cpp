#include <iostream>
using namespace std;

// Function to calculate Fibonacci numbers using recursion
int fibonacci(int n) {
    if (n <= 0) return 0; // Base case for 0
    if (n == 1) return 1; // Base case for 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
