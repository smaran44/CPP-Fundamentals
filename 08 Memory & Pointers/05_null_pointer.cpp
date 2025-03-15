#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr; // Null pointer (points to nothing)

    if (ptr == nullptr) {
        cout << "Pointer is null!" << endl;
    } else {
        cout << "Pointer value: " << *ptr << endl;
    }

    return 0;
}dynamic_memory.cpp
