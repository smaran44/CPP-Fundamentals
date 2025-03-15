#include <iostream>  // Include input-output stream library for console input/output
using namespace std;  // Use the standard namespace

int main() {
    // Declare and initialize an array with 5 integer elements
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Array elements: ";

    // Range-based for loop to iterate through each element in the array
    for (int num : arr) {  
        cout << num << " ";  // Print each element followed by a space
    }

    cout << endl;  // Move to the next line after printing all elements
    
    return 0;  // Return 0 to indicate successful execution
}
/*Range-Based for Loop (for (int num : arr))
Iterates over each element of arr, storing it in num during each iteration.
This is a modern way to iterate through arrays (introduced in C++11).*/