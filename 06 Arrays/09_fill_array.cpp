#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5];

    fill(arr, arr + 5, 100); // Fill all elements with 100

    cout << "Array after filling: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
