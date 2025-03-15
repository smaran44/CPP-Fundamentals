#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main() {
    int arr[] = {50, 20, 40, 10, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size); // Sorting the array in ascending order

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
