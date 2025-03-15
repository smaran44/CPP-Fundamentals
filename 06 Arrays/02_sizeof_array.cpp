#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Total size divided by one element size

    cout << "Size of array: " << size << endl;
    return 0;
}
