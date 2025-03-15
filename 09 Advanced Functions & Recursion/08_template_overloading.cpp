#include <iostream>
using namespace std;

// Generic function template
template <typename T>
void display(T value) {
    cout << "Generic Template: " << value << endl;
}

// Overloaded version for arrays
template <typename T>
void display(T arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int num = 100;
    double pi = 3.1415;
    int arr[] = {1, 2, 3, 4, 5};

    display(num);      // Calls generic template
    display(pi);       // Calls generic template
    display(arr, 5);   // Calls the overloaded array function

    return 0;
}
