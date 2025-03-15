#include <iostream>
using namespace std;

// Function to return sum of two numbers
int sum(int a, int b) {
    return a + b; // Returning the sum
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calling sum function
    cout << "Sum = " << sum(num1, num2) << endl;
    return 0;
}
