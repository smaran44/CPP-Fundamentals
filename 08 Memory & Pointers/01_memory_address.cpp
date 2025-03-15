#include <iostream>
using namespace std;

int main() {
    int num = 10;
    double pi = 3.14;
    char letter = 'A';

    cout << "Address of num: " << &num << endl;
    cout << "Address of pi: " << &pi << endl;
    cout << "Address of letter: " << (void*)&letter << endl; // (void*) to show char address properly

    return 0;
}
