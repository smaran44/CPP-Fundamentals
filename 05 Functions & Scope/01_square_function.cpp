#include <iostream>
using namespace std;

// Function to calculate square of a number
int square(int num) {  
    return num * num; // Returns the square of num
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Calling the function and printing result
    cout << "Square of " << number << " is " << square(number) << endl;
    return 0;
}
