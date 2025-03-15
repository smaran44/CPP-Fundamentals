#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Taking input from user
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
