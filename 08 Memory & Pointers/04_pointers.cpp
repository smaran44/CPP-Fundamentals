#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr = &num; // Pointer storing address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr holds address: " << ptr << endl;
    cout << "Value at pointer ptr: " << *ptr << endl; // Dereferencing

    return 0;
}
