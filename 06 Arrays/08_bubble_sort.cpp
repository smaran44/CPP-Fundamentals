#include <iostream>  // Include input-output stream library
using namespace std;  // Use the standard namespace

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparing elements
            if (arr[j] > arr[j + 1]) {  // Swap if the element is greater than the next
                swap(arr[j], arr[j + 1]);  // Swap elements using built-in swap function
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << " ";  // Print each element separated by a space
    }
    cout << endl;  // Move to the next line after printing all elements
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Initialize an unsorted array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    cout << "Unsorted array: ";
    printArray(arr, n);  // Print the original array

    bubbleSort(arr, n);  // Call Bubble Sort function to sort the array

    cout << "Sorted array: ";
    printArray(arr, n);  // Print the sorted array

    return 0;  // Return 0 to indicate successful execution
}
