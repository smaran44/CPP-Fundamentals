#include <iostream>
using namespace std;

int globalVar = 100; // Global variable

void demoFunction() {
    int localVar = 10; // Local variable
    cout << "Inside function: Local Variable = " << localVar << endl;
    cout << "Inside function: Global Variable = " << globalVar << endl;
}

int main() {
    demoFunction();

    // Accessing global variable
    cout << "Inside main: Global Variable = " << globalVar << endl;

    // Uncommenting below line will cause error because localVar is not accessible here
    // cout << "Inside main: Local Variable = " << localVar << endl;

    return 0;
}
